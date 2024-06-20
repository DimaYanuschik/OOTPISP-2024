
# Лабораторная работа №5 #

## Последовательные контейнеры библиотеки STL ##

## Вариант 12 ##
 

## Цель работы ##
Создание консольного приложения, состоящего из нескольких файлов в системе  программирования Visual Studio. Использование последовательных контейнеров библиотеки STL в ОО  программе. 

### Задания для первой и второй, третьей задачи ###
```c++
template <class T>
T sum_elements(const std::vector<T>& container) {
    return std::accumulate(container.begin(), container.end(), T());
}

template <typename T>
T findMinFirstElement(const std::list<T>& container) {
    if (container.empty()) {
        return T{};
    }

    auto minIt = std::min_element(container.begin(), container.end(),
        [](const T& a, const T& b) { return a.GetFirstNumber() < b.GetFirstNumber(); });
    return *minIt;
}

  void findAndAddAverage(size_t position) {
        if (container.empty()) {
            return;
        }

        T sum = 0;
        for (const auto& element : container) {
            sum += element;
        }
        T average = sum / static_cast<T>(container.size());
        addElementAtPosition(average, position);
    }

### Задания для четвертой и пятой задачи ###

```c++
template <typename T>
class PriorityQueue {
private:
    std::priority_queue<T> queue;

public:
    void fillElements(const std::initializer_list<T>& elements) {
        for (const auto& element : elements) {
            queue.push(element);
        }
    }

    void addElement(const T& element) {
        queue.push(element);
    }

    void removeElement() {
        if (!queue.empty()) {
            queue.pop();
        }
    }

    void removeElementsInRange(int minFirstNumber, int maxFirstNumber) {
        std::set<T> elementsToRemove;
        while (!queue.empty()) {
            const T& top = queue.top();
            if (top.GetFirstNumber() >= minFirstNumber && top.GetFirstNumber() <= maxFirstNumber) {
                elementsToRemove.insert(top);
            }
            queue.pop();
        }

        for (const auto& element : elementsToRemove) {
            queue.push(element);
        }
    }

    void printElements() const {
        std::priority_queue<T> temp = queue;
        while (!temp.empty()) {
            std::cout << temp.top();
            temp.pop();
        }
    }

    T getAverage() const {
        T sum = 0;
        size_t count = 0;
        std::priority_queue<T> temp = queue;
        while (!temp.empty()) {
            sum += temp.top();
            temp.pop();
            count++;
        }
        return sum / static_cast<T>(count);
    }

    void subtractAverage() {
        T average = getAverage();
        std::priority_queue<T> temp;
        while (!queue.empty()) {
            T element = queue.top();
            queue.pop();
            element -= average;
            temp.push(element);
        }
        queue = std::move(temp);
    }
};
```






