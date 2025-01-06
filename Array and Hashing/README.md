# Array Hashing

This folder contains solutions to LeetCode problems related to array hashing. Array hashing involves using hash tables (or maps) to efficiently solve problems related to arrays, such as finding duplicates, checking for certain properties, and more.

## Overview

Array hashing is a powerful technique used to optimize various array-related problems. By using hash tables, we can achieve efficient look-ups, insertions, and deletions, which are crucial for solving many algorithmic challenges.

## Topics Covered

- Finding duplicates in arrays
- Checking for unique elements
- Grouping elements based on certain criteria
- Efficiently searching for pairs or subsets
- Managing frequency counts of elements

Feel free to explore each folder and review the solutions. This will help you understand various array hashing techniques and how they are applied to solve different problems.

Happy coding!

## Implementations

### Hashing using Arrays and Maps

#### Python

```python
# Hashing using Arrays and Maps in Python

# Example: Finding duplicates in an array using a hash map
def find_duplicates(arr):
    hash_map = {}
    duplicates = []
    for num in arr:
        if num in hash_map:
            duplicates.append(num)
        else:
            hash_map[num] = 1
    return duplicates

# Example usage:
arr = [1, 2, 3, 4, 5, 1, 2, 3]
print("Duplicates:", find_duplicates(arr))

// Hashing using Arrays and Maps in C++

#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> find_duplicates(const std::vector<int>& arr) {
    std::unordered_map<int, int> hash_map;
    std::vector<int> duplicates;
    for (int num : arr) {
        if (hash_map.find(num) != hash_map.end()) {
            duplicates.push_back(num);
        } else {
            hash_map[num] = 1;
        }
    }
    return duplicates;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 1, 2, 3};
    std::vector<int> duplicates = find_duplicates(arr);
    std::cout << "Duplicates: ";
    for (int num : duplicates) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}

# Suffix and Prefix Hashing in Python

# Calculate prefix sums
def prefix_sums(arr):
    prefix = [0] * len(arr)
    prefix[0] = arr[0]
    for i in range(1, len(arr)):
        prefix[i] = prefix[i - 1] + arr[i]
    return prefix

# Calculate suffix sums
def suffix_sums(arr):
    suffix = [0] * len(arr)
    suffix[-1] = arr[-1]
    for i in range(len(arr) - 2, -1, -1):
        suffix[i] = suffix[i + 1] + arr[i]
    return suffix

# Example usage:
arr = [1, 2, 3, 4, 5]
print("Prefix Sums:", prefix_sums(arr))
print("Suffix Sums:", suffix_sums(arr))

// Suffix and Prefix Hashing in C++

#include <iostream>
#include <vector>

std::vector<int> prefix_sums(const std::vector<int>& arr) {
    std::vector<int> prefix(arr.size());
    prefix[0] = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    return prefix;
}

std::vector<int> suffix_sums(const std::vector<int>& arr) {
    std::vector<int> suffix(arr.size());
    suffix[arr.size() - 1] = arr[arr.size() - 1];
    for (int i = arr.size() - 2; i >= 0; --i) {
        suffix[i] = suffix[i + 1] + arr[i];
    }
    return suffix;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    std::vector<int> prefix = prefix_sums(arr);
    std::vector<int> suffix = suffix_sums(arr);
    
    std::cout << "Prefix Sums: ";
    for (int num : prefix) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Suffix Sums: ";
    for (int num : suffix) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}

You can now copy this README file into your repository. It includes all the provided code implementations for hashing using arrays and maps, as well as suffix and prefix hashing in both Python and C++.
