#include <iostream>
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
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        while (head != nullptr) {
            ans = (ans << 1) | head->val;
            head = head->next;
        }
        return ans;
    }
};

ListNode* insertBinaryDigits(int arr[], int size) {
    if (size == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < size; i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int binaryDigits[] = {1, 0, 1}; 
    int size = sizeof(binaryDigits) / sizeof(binaryDigits[0]);

    ListNode* head = insertBinaryDigits(binaryDigits, size);

    cout << "Linked List: ";
    printList(head);

    Solution sol;
    int result = sol.getDecimalValue(head);

    cout << "Decimal Value: " << result << endl;

    return 0;
}
