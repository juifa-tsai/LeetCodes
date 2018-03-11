//// Add Two Numbers : high -> low
//// Tags:  [Linked list]
//// Level: [Medium]

#include <iostream>
#include <stack>
#include "../dataStructure/linkedList.cpp"
using namespace std;

// 01. my code : using stack to inverse list O(n)
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    // Initialize nodes, stacks
    ListNode *output = new ListNode(0);
    stack<int> s1, s2, ss;
    ListNode *p = l1, *q = l2, *curr=output;
    // Fill stacks for l1, l2
    while( p != NULL ){ s1.push(p->val); p=p->next; }
    while( q != NULL ){ s2.push(q->val); q=q->next; }
    // Fill stacks for digits
    int carry = 0;
    while( !s1.empty() || !s2.empty() ){
        int sum = carry;
        if( !s1.empty() ){ sum += s1.top(); s1.pop(); }
        if( !s2.empty() ){ sum += s2.top(); s2.pop(); }
        ss.push(sum%10);
        carry = sum/10;
    }
    if( carry > 0 ){
        ss.push(carry);
    }
    // Fill output list
    while( !ss.empty() ){
        curr = curr->next = new ListNode(ss.top());
        ss.pop();
    }
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

