/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

/*
    Problem link:https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/?envType=daily-question&envId=2024-07-05
    TC: O(n)
    SC: O(1)

*/
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans = {INT_MAX, INT_MIN};
        ListNode* crn = head;
        int firstCriticalidx = -1, previousCriticalidx = -1, id = 0, prevNode = crn->val;
        crn = crn->next;
        while(crn->next != NULL){
            id++;
            int crnNode = crn->val, nextNode = crn->next->val;
            if((prevNode < crnNode &&  crnNode > nextNode) || (prevNode > crnNode && nextNode > crnNode)){
                if(firstCriticalidx == -1){
                    firstCriticalidx = id;
                    previousCriticalidx = id;
                }
                else{
                    ans[0] = min(ans[0], id - previousCriticalidx);
                    ans[1] = max(ans[1], id - firstCriticalidx);
                    previousCriticalidx = id;
                }
            }
            prevNode = crnNode;
            crn = crn->next;
        }

        vector<int>defaultAns = {-1,-1};
        return (ans[0] == INT_MAX) ? defaultAns : ans;

    }
};