/*
Problem statement:

Given an integer array arr, return true if there are three consecutive odd numbers in the array. Otherwise, return false.
 

Example 1:

Input: arr = [2,6,4,1]
Output: false
Explanation: There are no three consecutive odds.

Example 2:

Input: arr = [1,2,34,3,4,5,7,23,12]
Output: true
Explanation: [5,7,23] are three consecutive odds.
 

Constraints:

1 <= arr.length <= 1000
1 <= arr[i] <= 1000

*/

/*Complexity Analysis
Time complexity: O(n)
    The algorithm loops from 0 to n−2, which has a time complexity of O(n−2). 
    This can be simplified to a time complexity of O(n).

Space complexity: O(1)
    The algorithm has a constant space complexity, as it does not use any additional space.
*/
// Bruteforce Solution:

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        bool ok = false;
        int n = arr.size() - 1;
        int l = 0;
        while (l + 2 <= n) {
            if (arr[l] % 2 != 0 && arr[l + 1] % 2 != 0 && arr[l + 2] % 2 != 0) {
                return true;
            } else {
                l++;
            }
        }
        return false;
    }
};

// Counting Aproach
/*
Time complexity: O(n)
    The algorithm loops over arr only once. Thus, the time complexity remains O(n).
Space Complexity: O(1)
*/

class Solution(object):
    def threeConsecutiveOdds(self, arr):
        odd_count = 0
        for i in arr:
            if i%2:
                odd_count+=1
            else:
                odd_count = 0
            
            if odd_count == 3:
                return True
        return False

