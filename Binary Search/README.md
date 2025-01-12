# Binary Search

This folder contains solutions to LeetCode problems related to binary search. Binary search is an efficient algorithm for finding an item from a sorted list of items. It works by repeatedly dividing in half the portion of the list that could contain the item, until you've narrowed down the possible locations to just one.

## Overview

Binary search is a fundamental algorithm used to quickly find elements in sorted arrays or lists. By leveraging the sorted nature of the data, binary search can efficiently narrow down the search space, making it much faster than linear search for large datasets.

## Topics Covered

- Basic binary search implementation
- Finding the first or last occurrence of an element
- Searching for elements in rotated sorted arrays
- Finding the peak element in an array
- Solving problems involving range queries

Feel free to explore each folder and review the solutions. This will help you understand various binary search techniques and how they are applied to solve different problems.

## Basic Binary Search Implementation

Below is an example of a basic binary search implementation in Python.

```python
def binary_search(arr, target):
    """
    Perform a binary search on a sorted array to find the target element.
    
    Parameters:
    arr (list): A sorted list of elements.
    target (int): The element to search for in the list.
    
    Returns:
    int: The index of the target element if found, otherwise -1.
    """
    left, right = 0, len(arr) - 1
    
    while left <= right:
        mid = (left + right) // 2  # Find the mid index
        
        # Check if the target is present at mid
        if arr[mid] == target:
            return mid
        # If target is greater, ignore the left half
        elif arr[mid] < target:
            left = mid + 1
        # If target is smaller, ignore the right half
        else:
            right = mid - 1
    
    # Target is not present in the array
    return -1

# Example usage:
if __name__ == "__main__":
    arr = [2, 3, 4, 10, 40] # Random number
    target = 10 # target
    result = binary_search(arr, target)
    
    if result != -1:
        print(f"Element is present at index {result}")
    else:
        print("Element is not present in array")
