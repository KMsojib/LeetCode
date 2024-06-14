/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;

    }
};

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        
        Solution.deleteNode();
    }

    return 0;
}

/*
    problem analysis:
        1. given singly linked list
        2. given a node i want to delete this node.
        3. unique value of the linked list.


        what i need to do:
            1. delete the node which i need to delete.
            2. all the values before (node) should be in th same order
            3. all the vlaue after (node) should be in the same order.
            4. 

    sample analysis:
        (4)->(5)->(1)->(9) node = 5
        after delte node 5
        (4)->(1)->(9)





*/
https://leetcode.com/problems/largest-number/description/