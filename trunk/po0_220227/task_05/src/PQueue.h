#include <queue>
#include <functional>

template <typename T>
class QList {
private:
    std::priority_queue<T, std::vector<T>, std::function<bool(const T&, const T&)>> pq;
    std::function<bool(const T&, const T&)> comparator;

public:
    List(std::function<bool(const T&, const T&)> comp = std::less<T>())
        : comparator(comp), pq(comp) {}

    void fillElements(const std::vector<T>& elements) {
        for (const auto& element : elements) {
            pq.push(element);
        }
    }

    void addElement(const T& element) {
        pq.push(element);
    }

    void removeElement() {
        if (!pq.empty()) {
            pq.pop();
        }
    }

    void removeInRange(int minElement, int maxElement) {
        std::priority_queue<int, std::vector<int>, std::function<bool(const int&, const int&)>> temp(comparator);
        while (!pq.empty()) {
            int element = pq.top();
            pq.pop();
            if (element < minElement || element > maxElement) {
                temp.push(element);
            }
        }
        pq = std::move(temp);
    }

    void printElements() const {
        std::priority_queue<T, std::vector<T>, std::function<bool(const T&, const T&)>> temp(pq);
        while (!temp.empty()) {
            std::cout << temp.top() << " ";
            temp.pop();
        }
        std::cout << std::endl;
    }

    T getAverage() const {
        T sum = 0;
        size_t count = 0;
        std::priority_queue<T, std::vector<T>, std::function<bool(const T&, const T&)>> temp(pq);
        while (!temp.empty()) {
            sum += temp.top();
            count++;
            temp.pop();
        }
        return sum / static_cast<T>(count);
    }

    void subtractAverage() {
        T average = getAverage();
        std::priority_queue<T, std::vector<T>, std::function<bool(const T&, const T&)>> temp(comparator);
        while (!pq.empty()) {
            T element = pq.top();
            pq.pop();
            element -= average;
            temp.push(element);
        }
        pq = std::move(temp);
    }
};