/*
    problem link: 
        https://leetcode.com/problems/contains-duplicate/description/

    Problem Analysis:
        1. if any value appears at least twice then return false, else true;
*/


/*----------------------------------------  BruteForce Aproach ----------------------------------------*/
// Time Complexity: O(n^2)
// Space Complexity: O(1)

/*
    Solution: 
    1. Iterate over the array for every element,and check weather it presnet twice time or not.

*/

#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    for(int i = 0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i] == nums[j]){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    //vector<int>nums = {1,1,1,3,3,4,3,2,4,2};
    vector<int>nums = {1,2,3,4,5};
    cout<<containsDuplicate(nums)<<endl;
    return 0;
}



/*----------------------------------------  Sorting Aproach ----------------------------------------*/
// Time Complexity: O(n log n)
// Space Complexity: O(1)

/*
    Solution: 
    1. I need to sort the whole arrya, usually i was use C++ build in STL which is similar to mearge sort.
    2. Then iterated the whole array (n-1) time (wroste case).
    3. for( 1 to n-1 )
            (i-1) == (i)
                reuturn false;
        
        return true;

*/

#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    for(int i = 1; i<nums.size(); i++){
        if(nums[i-1] == nums[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    //vector<int>nums = {1,1,1,3,3,4,3,2,4,2};
    vector<int>nums = {1,2,3,4,5};
    cout<<containsDuplicate(nums)<<endl;
    return 0;
}


/*---------------------------------------- Hashing Aproach ----------------------------------------*/
// Time Complexity: O(n)
// Space Complexity: O(n)

// optimise the O(n log n)-----> o(n)
// Using Hashing 

/*
    Solution: 
    1. The problem says that, if any element occures at least 2 times then return false. so,
    we can count the number of elements iterating time, and still check any element >1 or not?
    if >1 then simple return the False, after end the loop if any element dosen't occures two time
    then return true;

*/

#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    map<int,int>mp;
    for(int i = 0; i < nums.size(); i++){
        mp[nums[i]]++;
        if(mp[nums[i]] > 1){
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int>nums = {1,1,1,3,3,4,3,2,4,2};
    //vector<int>nums = {1,2,3,4,5};
    cout<<containsDuplicate(nums)<<endl;
    return 0;
}
