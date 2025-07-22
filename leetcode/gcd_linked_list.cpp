#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;

        ListNode* temp = head;
        while (temp->next != nullptr) {
            int g = __gcd(temp->val, temp->next->val);
            ListNode* node = new ListNode(g, temp->next);
            temp->next = node;
            temp = node->next;
        }
        return head;
    }
};
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

ListNode* createList(const vector<int>& vals) {
    if (vals.empty()) return nullptr;
    ListNode* head = new ListNode(vals[0]);
    ListNode* curr = head;
    for (int i = 1; i < vals.size(); i++) {
        curr->next = new ListNode(vals[i]);
        curr = curr->next;
    }
    return head;
}

int main() {
    vector<int> vals = {18, 6, 10, 3};
    ListNode* head = createList(vals);
    
    Solution sol;
    ListNode* modifiedHead = sol.insertGreatestCommonDivisors(head);
    
    printList(modifiedHead);  
    return 0;
}