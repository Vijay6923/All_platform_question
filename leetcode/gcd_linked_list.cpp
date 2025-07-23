#include <bits/stdc++.h>
using namespace std;

// Definition of a singly-linked list node
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *nextNode) : val(x), next(nextNode) {}
};

// Class with the required logic
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* current = head;
        while (current->next) {
            int gcdValue = __gcd(current->val, current->next->val);
            ListNode* gcdNode = new ListNode(gcdValue, current->next);
            current->next = gcdNode;
            current = gcdNode->next;
        }

        return head;
    }
};

// Helper to print the linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Helper to create a linked list from vector
ListNode* createList(const vector<int>& values) {
    if (values.empty()) return nullptr;

    ListNode* head = new ListNode(values[0]);
    ListNode* tail = head;

    for (size_t i = 1; i < values.size(); ++i) {
        tail->next = new ListNode(values[i]);
        tail = tail->next;
    }

    return head;
}

// Main function to test the logic
int main() {
    vector<int> input = {18, 6, 10, 3};
    ListNode* head = createList(input);

    Solution sol;
    ListNode* updatedHead = sol.insertGreatestCommonDivisors(head);

    printList(updatedHead);  // Output: 18 -> 6 -> 6 -> 2 -> 10 -> 1 -> 3

    return 0;
}