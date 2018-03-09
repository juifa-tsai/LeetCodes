//// Odd even node split : fixed order but odd nodes move to begin, even nodes move to end;
//// Tags:  [Linked list]
//// Level: [Medium]

#include <iostream>
#include <vector>
#include <map>
#include "../dataStructure/linkedList.cpp"
using namespace std;

// 01. time O(N), space O(1)
ListNode* oddEvenList(ListNode* head) 
{
    if(!head) return head;
    ListNode *odd=head, *evenhead=head->next, *even = evenhead;
    // split even and odd
    while(even && even->next)
    {
        odd  = odd->next = odd->next->next;
        even = even->next = even->next->next;
    }
    // pointer odd end to even head 
    odd->next = evenhead;
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
