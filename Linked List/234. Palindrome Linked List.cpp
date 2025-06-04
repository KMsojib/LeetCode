# Problem          : 234. Palindrome Linked List
# Time Complexity  : O(n)
# Space Complexity : O(1) 
# C++ / Python Solution


// Aproach         : Stack
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode* temp = head;
        while (head != nullptr) {
            st.push(head->val);
            head = head->next;
        }
        int n = (int)st.size();
        n /= 2;
        while (n--) {
            if ((temp->val) != st.top()) {
                return false;
            } else {
                temp = temp->next;
                st.pop();
            }
        }
        return true;
    }
};

// Approach         : Two Pointer

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> val;
        while (head != nullptr) {
            val.push_back(head->val);
            head = head->next;
        }
        int l = 0, r = val.size() - 1;
        while (l < r) {
            if (val[l] != val[r]) {
                return false;
            }
            l++, r--;
        }
        return true;
    }
};

// Aproach         : Fast & Slow Pointer

class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next
        }
        ListNode* rev = reverse(slow);
        while (rev != nullptr) {
            if (head->val != rev->val) {
                return false;
            }
            head = head->next;
            rev = rev->next;
        }
        return true;
    }
};

Runtime 0 ms Beats 100.00 % || Memory 117.81 MB Beats 93.37 %
