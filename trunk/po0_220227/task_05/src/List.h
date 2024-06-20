#pragma once

#include <iostream>
#include <list>
#include <cmath>

template <typename T>
class List {
private:
    std::list<T> container;

public:
    void fillElements(const std::initializer_list<T>& elements) {
        container.assign(elements);
    }

    void addElementAtPosition(const T& element, size_t position) {
        auto it = container.begin();
        std::advance(it, position);
        container.insert(it, element);
    }

    void removeElementAtPosition(size_t position) {
        auto it = container.begin();
        std::advance(it, position);
        container.erase(it);
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

    void printElements() const {
        for (const auto& element : container) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
};