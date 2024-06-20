#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

#include "Pair.h"
#include "List.h"
#include "PQueue.h"
#include <queue>
#include <set>

template <class T>
std::vector<T> create_list() {
    return std::vector<T>();
}

template <class T>
void fill_list(std::vector<T>& container, const std::vector<T>& elements) {
    container.insert(container.end(), elements.begin(), elements.end());
}

template <class T>
void add_elements(std::vector<T>& container, const std::vector<T>& elements) {
    container.insert(container.end(), elements.begin(), elements.end());
}

template <class T>
void remove_elements(std::vector<T>& container, const std::vector<T>& elements) {
    for (T element : elements) {
        auto it = std::find(container.begin(), container.end(), element);
        if (it != container.end()) {
            container.erase(it);
        }
    }
}

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

int main() {
    // Задание 1
    std::vector<int> my_list = create_list<int>();

    std::vector<int> initial_elements_1 = { 1, 2, 3, 4, 5 };
    fill_list(my_list, initial_elements_1);

    std::vector<int> additional_elements_1 = { 6, 7, 8 };
    add_elements(my_list, additional_elements_1);

    std::vector<int> elements_to_remove_1 = { 2, 4 };
    remove_elements(my_list, elements_to_remove_1);

    int sum = sum_elements(my_list);

    std::cout << "Сумма элементов списка: " << sum << std::endl;

    // Задание 2
    std::vector<Pair> my_pair_list = create_list<Pair>();

    std::vector<Pair> initial_elements_2 = { Pair(1, 2.5), Pair(3, 4.5), Pair(5, 6.5) };
    fill_list(my_pair_list, initial_elements_2);

    std::vector<Pair> additional_elements_2 = { Pair(7, 8.5), Pair(9, 10.5) };
    add_elements(my_pair_list, additional_elements_2);

    std::vector<Pair> elements_to_remove_2 = { Pair(1, 2.5), Pair(5, 6.5) };
    remove_elements(my_pair_list, elements_to_remove_2);

    Pair pairSum = sum_elements(my_pair_list);

    std::list<Pair> pairList;
    pairList.emplace_back(1, 10.0);
    pairList.emplace_back(3, 20.0);
    pairList.emplace_back(2, 15.0);
    pairList.emplace_back(4, 30.0);

    Pair minPair = findMinFirstElement(pairList);
    std::cout << "Minimum first element: " << minPair << std::endl;

    std::cout << "Minimum first element: " << minPair << std::endl;

    std::cout << "Сумма элементов списка: " << sum << std::endl;

    // Задание 3-5

    QList<int> list([](int a, int b) {
        return a > b;
        });

    std::vector<int> elements = { 10, 5, 8, 3, 7 };
    list.fillElements(elements);

    std::cout << "Initial list: ";
    list.printElements();

    list.addElement(6);

    std::cout << "List after adding element: ";
    list.printElements();

    list.removeElement();

    std::cout << "List after removing element: ";
    list.printElements();

    list.removeInRange(4, 8);

    std::cout << "List after removing elements in range: ";
    list.printElements();

    std::cout << "Average: " << list.getAverage() << std::endl;

    list.subtractAverage();

    std::cout << "List after subtracting average: ";
    list.printElements();

    return 0;
}