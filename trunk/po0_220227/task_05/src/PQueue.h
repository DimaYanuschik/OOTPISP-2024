#include <iostream>
#include <queue>

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