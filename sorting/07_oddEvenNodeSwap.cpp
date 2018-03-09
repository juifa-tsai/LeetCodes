//// Odd even node swap in linked list : even node <-> odd node
//// Tags:  [Linked list]
//// Level: [Medium]

#include <iostream>
#include <vector>
#include <map>
#include "../dataStructure/linkedList.cpp"
using namespace std;

// 01 my code O(n)
ListNode* oddEvenList(ListNode* head) {
    if( head->next ){
        int even = head->val;
        int odd  = head->next->val;
        head->val = odd;
        head->next->val = even;
        if( head->next->next ) oddEvenList(head->next->next);
    }
    return head;
}

int main(){
    // Linked listed creation
    int a[8] = {1,2,3,4,5,6,7,8};
    int n = sizeof(a)/sizeof(a[0]);
    ListNode* head = createLinkedList(head, a, 0, n);
    printLinkedList(head);

    // Odd even swap
    ListNode* head_swap = oddEvenList(head);
    printLinkedList(head_swap);
}
