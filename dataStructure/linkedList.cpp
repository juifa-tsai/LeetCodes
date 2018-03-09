// Definition for singly-linked list.
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;


struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};

ListNode *createLinkedList(ListNode* head, int val[], int i, int i_end){
    if( i < i_end ){
        head = new ListNode(val[i]);
        head->next  = createLinkedList( head->next, val, ++i, i_end );
    }
    return head;
}

void printLinkedList(ListNode* head){
    if( head->next ){ 
        cout<<head->val<<"->";
        printLinkedList(head->next);
    }else{
        cout<<head->val<<endl;
    }
    return;
}

#endif