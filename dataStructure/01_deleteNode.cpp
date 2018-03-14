//// Delete node
//// Tags:  [Linked list]
//// Level: [Easy]

#include <iostream>
#include <vector>
#include "../dataStructure/linkedList.cpp"
using namespace std;

int main(){
    int a1[3] = {2,4,3};
    ListNode* l1 = createLinkedList(l1, a1, 0, sizeof(a1)/sizeof(a1[0]));
    ListNode* it = l1;
    int i=1, delNode=1;
 
    while( i<=delNode ){
        if( i == delNode ) deleteNode(it);
        else it = it->next;
        i++;
    }
    printLinkedList(l1);
}