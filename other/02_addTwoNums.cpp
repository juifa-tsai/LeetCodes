//// Add Two Numbers : low->high
//// Tags:  [Linked list]
//// Level: [Medium]

#include <iostream>
#include "../dataStructure/linkedList.cpp"
using namespace std;

/*
// 01. my code : O(max(n,m)), store carry in next node
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *output = new ListNode(0);
    ListNode *i1 = l1, *i2 = l2, *p = output;
    while( i1 != NULL || i2 !=NULL ){
        int v1 = i1 != NULL ? i1->val : 0;
        int v2 = i2 != NULL ? i2->val : 0;
        // Add value 1, 2 and carry
        p->val = v1 + v2 + p->val; 
        if( p->val >= 10 ){ 
            // Fill carry to next node;
            p->next = new ListNode(int(p->val/10));
            p->val = p->val%10; 
        }
        if( i1 != NULL ) i1 = i1->next;
        if( i2 != NULL ) i2 = i2->next;
        // Initial next node when non-empty l1, l2 
        if( p->next == NULL && (i1 != NULL || i2 !=NULL)) p->next=new ListNode(0);
        p = p->next;
    }
    return output;
}
*/

// 02. O(max(n,m)) : Store carry out of loop & make first node empty
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *output = new ListNode(0); 
    ListNode *p = l1, *q = l2, *curr = output;
    int carry=0;
    while( p != NULL || q !=NULL ){
        int x = (p != NULL) ? p->val : 0;
        int y = (q != NULL) ? q->val : 0;
        // Add value 1, 2 and carry
        int sum = x + y + carry; 
        carry = sum/10;
        curr = curr->next = new ListNode(sum % 10);
        if( p != NULL ) p = p->next;
        if( q != NULL ) q = q->next;
    }
    // Create new node for last carry
    if( carry > 0){
        curr->next = new ListNode(carry);
    }
    // return next node, since first is empty
    return output->next;
}

int main(){
    // Linked listed creation
    int a1[3] = {2,4,3};
    int a2[3] = {5,6,4};
    ListNode* l1 = createLinkedList(l1, a1, 0, sizeof(a1)/sizeof(a1[0]));
    ListNode* l2 = createLinkedList(l2, a2, 0, sizeof(a2)/sizeof(a2[0]));
    printLinkedList(l1);
    printLinkedList(l2);

    ListNode* output = addTwoNumbers(l1, l2);
    printLinkedList(output);

    ListNode* p = l1;
    while( p->next != NULL ) p = p->next;
    p->next = new ListNode(555);
    printLinkedList(l1);
}

