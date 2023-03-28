#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if (first == NULL) {
    return second;
    }
    if (second == NULL) {
        return first;
    }
    Node<int>* newhead=NULL;
    Node<int>* newtail=NULL;
    if (first->data > second->data) {
    newhead=second;
    newtail=second;
    second=second->next;
    } else {
        newhead=first;
        newtail=first;
        first=first->next;
    }
    while (first != NULL && second != NULL) {
      if (first->data > second->data) {
      newtail->next=second;
      newtail=newtail->next;
      second=second->next;
      } else {
      newtail->next=first;
      newtail=newtail->next;
      first=first->next;
      }
    }
    if (first != NULL) {
    newtail->next=first;
    }
    if (second != NULL) {
    newtail->next=second;
    }
    return newhead;
}

