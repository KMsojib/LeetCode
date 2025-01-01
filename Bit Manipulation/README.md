# Bit Manipulation

This folder contains solutions to LeetCode problems related to bit manipulation. Bit manipulation involves using bitwise operators to perform operations on binary representations of integers. It is a powerful technique used in various algorithmic challenges.

**Overview**

Bit manipulation allows for efficient computations by directly operating on the binary representations of numbers. This technique is often used in problems involving sets, masks, and low-level data processing.

**Topics Covered**

#### 1. Bitwise AND (`&`)
- **Description:** Performs a bitwise AND operation between two integers.
- **Example:** `5 & 3`
- **Code:**
  ```python
  result = 5 & 3  
#### 1. Bitwise OR (|)
- **Description:** Performs a bitwise OR operation between two integers.
- **Example:** 5 | 3
- **Code:**:
    result = 5 | 3 

#### 3. Bitwise XOR (^)
- **Description:** Performs a bitwise XOR operation between two integers.
- **Example:** 5 ^ 3
- **Code:**
result = 5 ^ 3  

#### 4. Bitwise NOT (~)
- **Description:**: Performs a bitwise NOT operation, inverting the bits of an integer.
- **Example:** ~5
- **Code:**
result = ~5 
#### 5. Left Shift (<<)
- **Description:**: Shifts the bits of an integer to the left by a specified number of positions.
- **Example:** 5 << 1
- **Code:**
result = 5 << 1  
#### 6. Right Shift (>>)
- **Description:**: Shifts the bits of an integer to the right by a specified number of positions.
- **Example:** 5 >> 1
- **Code:**
result = 5 >> 1 
#### 7. Checking if a Number is Power of Two
- **Description:**: Checks if a given number is a power of two using bitwise operations.
- **Example:** num & (num - 1) == 0
- **Code:**
is_power_of_two = num > 0 and (num & (num - 1)) == 0  
#### 8. Counting Set Bits
- **Description:**: Counts the number of 1's in the binary representation of an integer.
- **Example:**: bin(num).count('1')
- **Code:**
count = bin(num).count('1')  