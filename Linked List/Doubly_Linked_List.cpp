#include <bits/stdc++.h>

using namespace std;

// Creating a Doubly Linked list
struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};


// Traversing a Linked list
void printList(Node *head){
    Node *curr = head;
    while (curr != NULL)
    {
        cout << (curr -> data) << " ";
        curr = curr -> next;
    }
    cout << "\n";
}


// Insert at the beginning of a linked list
// Node *insertBegin(Node *head, int data){
//     Node *temp = new Node(data);
//     temp ->next = head;
//     if (head != NULL){
//         head ->prev = temp;
//     }
//     return temp;
// }


// Insert at the end of a linked list
Node *insertEnd(Node *head, int data){
    Node *temp = new Node(data);
    if (head == NULL)
    {
        return temp;
    }
    Node *curr = head;
    while (curr ->next != NULL)
    {
        curr = curr ->next;
    }
    curr ->next = temp;
    temp ->prev = curr;
    return head;
}


// Reverse a DLL
// Node *reverseDLL(Node *head){
//     if (head ->next == NULL || head == NULL) return head;
//     Node *prev = NULL;
//     Node *curr = head;
//     while (curr != NULL)
//     {
//         prev = curr->prev;
//         curr ->prev = curr ->next;
//         curr->next = prev;
//         curr = curr ->prev;
//     }
//     return prev->prev;
// }


// Delete head of a DLL
// Node *deleteHead(Node *head){
//     if (head == NULL){
//         return NULL;
//     }
//     if (head ->next == NULL)
//     {
//         delete head;
//         return NULL;
//     }
//     else
//     {
//         Node *temp = head;
//         head = head ->next;
//         head ->prev = NULL;
//         delete temp;
//         return head;
//     }
// }


// Delete last node of a DLL
// Node *deleteLast(Node *head){
//     if (head == NULL){
//         return NULL;
//     }
//     if (head ->next == NULL)
//     {
//         delete head;
//         return NULL;
//     }else
//     {
//         Node *curr = head;
//         while (curr ->next != NULL)
//         {
//             curr = curr ->next;
//         }
//         curr ->prev ->next = NULL;
//         delete curr;
//         return head;
//     }
// }


int main()
{
    Node *head = new Node(50);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head -> next = temp1;
    temp1 -> prev = head;
    temp1 -> next = temp2;
    temp2 -> prev = temp1;

    // head = insertBegin(head, 5);
    head = insertEnd(head, 100);
    // head = reverseDLL(head);
    // head = deleteHead(head);
    // head = deleteLast(head);

    printList(head);

    return 0;
}
