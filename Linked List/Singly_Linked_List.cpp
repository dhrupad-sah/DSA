// #include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Creating a Linked list
struct Node
{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
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

// Traversing via Recursion
// void recursivePrint(Node *head){
//     if (head == NULL)
//     {
//         return;
//     }
//     cout << (head ->data) << " ";
//     recursivePrint(head->next);
// }

// Inserting at the head position
// Node *insertBegin(Node *head, int x){
//     Node *temp = new Node(x);
//     temp -> next = head;
//     return temp;
// }


// Insert at the End
Node *insertEnd(Node *head, int x){
    Node *temp = new Node(x);
    if (head == NULL)
    {
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;    // Returns head of the linked list every time.
}

// Delete Head of Linked List
// Node *deleteHead(Node *head){
//     if (head == NULL)
//     {
//         return NULL;
//     }else
//     {
//         Node * temp = head ->next;
//         delete head;
//         return temp;
//     }   
// }

// Delete Tail of Linked List
// Node *delTail(Node *head){
//     if (head == NULL)
//     {
//         return NULL;
//     }
//     if (head ->next == NULL)
//     {
//         delete head;
//         return NULL;
//     }
//     Node *curr = head;
//     while (curr -> next -> next != NULL)
//     {
//         curr = curr -> next;
//     }
//     delete (curr -> next);
//     curr -> next = NULL;
//     return head;
// }

// Insert at a given Position
// Node *insertPos(Node *head, int pos, int data){
//     Node *temp = new Node(data);
//     if (pos == 1)
//     {
//         temp ->next = head;
//         return temp;
//     }
//     Node *curr = head;
//     for (int i = 1; i <= pos-2 && curr != NULL; i++)
//     {
//         curr = curr -> next;
//     }
//     if (curr == NULL)
//     {
//         return head;
//     }
//     temp->next = curr->next;
//     curr ->next = temp;
//     return head;
// }

// Search iteratively in a Linked List
// int searchLL(Node *head, int x){
//     Node *curr = head;
//     int i = 1;
//     while (curr != NULL)
//     {
//         if (curr->data == x){
//             return i; 
//         }else
//         {
//             curr = curr -> next;
//             i++;
//         }
//     }
//     return -1;
// }

// Search recursively in a Linked List
// int searchLL(Node *head, int x){
//     if (head == NULL) return -1;
//     if (head -> data == x)
//     {
//         return 1;
//     }
//     else
//     {
//         int res = searchLL(head ->next, x);
//         if (res == -1) return -1;
//         else return (res+1);
//     }
// }


int main()
{
    cout<<"Hello World" << "\n";
    
    // Node *head = new Node(10);
    // Node *temp1 = new Node(20);
    // Node *temp2 = new Node(30);
    
    // head -> next = temp1;
    // temp1 -> next = temp2;

    Node *head = NULL;

    head = insertEnd(head, 30);
    head = insertEnd(head, 20);
    head = insertEnd(head, 40);
    head = insertEnd(head, 10);
    // head = deleteHead(head);
    // head = deleteHead(head);
    // head = delTail(head);
    // head = delTail(head);
    // head = insertPos(head, 8, 90);
    // cout << searchLL(head, 40) << endl;
    


    printList(head);
    // recursivePrint(head);
    return 0;
}
