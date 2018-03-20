//// Reverse Linked list
//// Tags:  [Linked list]
//// Level: [Easy]

#include <iostream>
#include "../dataStructure/linkedList.cpp"
using namespace std;

// 01. iterate O(N)
    ListNode* reverseList(ListNode* head) {
        ListNode* new_head = new ListNode(0);
        new_head -> next = head;
        ListNode* pre = new_head;
        ListNode* cur = head; 
        while (cur && cur -> next) {
            ListNode* temp = pre -> next;
            pre -> next = cur -> next;
            cur -> next = cur -> next -> next; 
            pre -> next -> next = temp;
        }
        return new_head -> next;
    }

int main(){
    // Linked listed creation
    int a[8] = {1,2,3,4,5,6,7,8};
    int n = sizeof(a)/sizeof(a[0]);
    ListNode* head = createLinkedList(head, a, 0, n);
    printLinkedList(head);

    // Odd even swap
    ListNode* head_swap = reverseList(head);
    printLinkedList(head_swap);
}
