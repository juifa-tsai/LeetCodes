//// Odd even value split in linked list : fixed order but odd value moves first, even value moves end;
//// Tags:  [Linked list]
//// Level: [Medium]

#include <iostream>
#include <vector>
#include <map>
#include "../dataStructure/linkedList.cpp"
using namespace std;

// 01 my code O(n^2)
ListNode* moveEven(ListNode* head) {
    if( head->next ){
        if( head->val % 2 == 0 ){
            int tmp = head->val;
            head->val = head->next->val;
            head->next->val = tmp;
        }
        head->next = moveEven(head->next);
    }
    return head;
}

ListNode* oddEvenList(ListNode* head) {
    int n_even = 0;
    ListNode* it = head;
    while( it ){ 
        if( it->val%2 == 0 ) n_even++;
        it = it->next; 
    }
    for( int i=0; i<n_even; i++ ){
        it = moveEven(head);
    }
    return it;
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
