//// Odd even linked list : fixed order but odd first, even end;
//// Tags:  [Linked list]
//// Level: [Medium]

#include <iostream>
#include <vector>
#include <map>
#include "../dataStructure/linkedList.cpp"
using namespace std;

int main(){

    int a[7] = {3,9,20,3,4,15,7};
    int n = sizeof(a)/sizeof(a[0]);
    ListNode* head = createLinkedList(head, a, 0, n);
    printLinkedList(head);
}