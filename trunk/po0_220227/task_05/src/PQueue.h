#pragma once

#include <queue>
#include <functional>

class QList {
public:
    explicit QList(const std::function<bool(int, int)>& comp = std::less<int>())
        : comparator(comp), pq(comp) {}

    void fillElements(const std::vector<int>& elements) {
        for (int element : elements) {
            pq.push(element);
        }
    }

    void addElement(int element) {
        pq.push(element);
    }

    void removeElement() {
        if (!pq.empty()) {
            pq.pop();
        }
    }

    void removeInRange(int minElement, int maxElement) {
        std::priority_queue<int, std::vector<int>, std::function<bool(int, int)>> temp(comparator);
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
        std::priority_queue<int, std::vector<int>, std::function<bool(int, int)>> temp(pq);
        while (!temp.empty()) {
            std::cout << temp.top() << " ";
            temp.pop();
        }
        std::cout << std::endl;
    }

    int getAverage() const {
        int sum = 0;
        size_t count = 0;
        std::priority_queue<int, std::vector<int>, std::function<bool(int, int)>> temp(pq);
        while (!temp.empty()) {
            sum += temp.top();
            count++;
            temp.pop();
        }
        return sum / static_cast<int>(count);
    }

    void subtractAverage() {
        int average = getAverage();
        std::priority_queue<int, std::vector<int>, std::function<bool(int, int)>> temp(comparator);
        while (!pq.empty()) {
            int element = pq.top();
            pq.pop();
            element -= average;
            temp.push(element);
        }
        pq = std::move(temp);
    }
private:
    std::function<bool(int, int)> comparator = std::less<int>();
    std::priority_queue<int, std::vector<int>, std::function<bool(int, int)>> pq;
};