#include <iostream>
#include <vector>

std::vector<int> merge(std::vector<int> left, std::vector<int> right) {
    std::vector<int> merged(left.size() + right.size());

    int left_index = 0;
    int right_index = 0;

    while (left_index < left.size() && right_index < right.size()) {
        if (left[left_index] < right[right_index]) {
            merged.push_back(left[left_index]);
            left_index++;
        } else {
            merged.push_back(right[left_index]);
            right_index++;
        }
    }

    while (left_index < left.size()) {
        merged.push_back(left[left_index]);
        left_index++;
    }

    while (right_index < right.size()) {
        merged.push_back(right[right_index]);
        right_index++;
    }

    return merged;
}

std::vector<int> merge_sort(std::vector<int> array) {
    if (array.size() <= 1) {
        return array;
    }

    int midpoint = array.size() / 2;
    std::vector<int> left(array.begin(), array.begin() + midpoint);
    std::vector<int> right(array.begin() + midpoint, array.end());

    return merge(merge_sort(left), merge_sort(right));
}

int main() {
    int n;
    std::cin >> n;
    if (n < 0) {
        std::cout << "Invalid n" << std::endl;
        return 1;
    }

    std::vector<int> array(n);

    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }
}
