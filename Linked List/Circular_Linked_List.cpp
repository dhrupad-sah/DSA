#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node (int d){
        data = d;
        next = NULL;
    }
};


// CLL Traversal
Node *traversal(Node *head){
    if (head == NULL) return 0;
    // Using for loop
    // cout << head ->data << " ";
    // for (Node *i = head ->next; i != head; i = i->next)
    // {
    //     cout << i ->data << " ";
    // }

    // Using do-while loop
    Node *i = head;
    do
    {
        cout << i ->data << " ";
        i = i->next;
    } while (i != head);
}


// CLL insertion at the head
// Node *insertBegin(Node *head, int data){
    // Naive Solution O(n)
    // Node *temp = new Node(data);
    // if (head == NULL)
    // {
    //     temp ->next = temp;
    // }else
    // {
    //     Node *curr = head;
    //     while (curr ->next != head)
    //     {
    //         curr = curr ->next;
    //     }
    //     curr ->next = temp;
    //     temp ->next = head;
    // }
    // return temp;
    // Efficient Solution
    // Node *temp = new Node(data);
    // if (head == NULL)
    // {
    //     temp ->next = temp;
    //     return temp;
    // }else
    // {
    //     temp ->next = head ->next;
    //     head ->next = temp;
    //     int t = head ->data;
    //     head ->data = temp ->data;
    //     temp ->data = t;
    //     return head;
    // }
// }


// CLL insertion at the end
Node *insertEnd(Node *head, int data){
    // Naive SOlution O(n)
    // Node *temp = new Node(data);
    // if (head == NULL){
    //     temp ->next = temp;
    //     return temp;
    // }
    // else{
    //     Node *curr = head;
    //     while (curr ->next != head)
    //     {
    //         curr = curr ->next;
    //     }
    //     curr ->next = temp;
    //     temp ->next = head;
    //     return head;
    // }
    // Efficient Solution O(1)
    Node *temp = new Node(data);
    if (head == NULL){
        temp ->next = temp;
        return temp;
    }else{
        temp ->next = head ->next;
        head ->next = temp;
        int t = head->data;
        head ->data = temp ->data;
        temp ->data = t;
        return temp;
    }
}


// Delete head of CLL
Node *deleteHead(Node *head){
    // Naive Solution O(n)
    // if (head == NULL) return 0;
    // if (head ->next == NULL)
    // {
    //     delete head;
    //     return 0;
    // }
    // else{
    //     Node *curr = head;
    //     while (curr ->next != head)
    //     {
    //         curr = curr ->next;
    //     }
    //     curr ->next = head ->next;
    //     delete head;
    //     return curr ->next;
    // }
    // Efficient Solution O(1)
    if (head == NULL) return 0;
    if (head ->next == NULL)
    {
        delete head;
        return 0;
    }
    head ->data = head ->next ->data;
    Node *temp = head ->next;
    head ->next = head ->next ->next;
    delete temp;
    return head;
}


// Delete Kth node of a CLL
// Node *deleteKthEle(Node *head, int k){
//     if (head == NULL) return head;
//     if (k == 1)
//     {
//         return deleteHead(head);
//     }else
//     {
//         Node *curr = head;
//         for (int i = 0; i < k-2; i++)
//         {
//             curr = curr ->next;
//         }
//         Node *temp = curr ->next;
//         curr ->next = curr ->next ->next;
//         delete temp;
//         return head;
//     }    
// }


// Sorted insert in a DLL
// Node *sortedInsert(Node *head, int x){
//     Node *temp = new Node(x);
//     if (head == NULL) {
//         return temp;
//     }
//     if (x < head->data)
//     {
//         temp ->next = head;
//         return temp;
//     }
//     Node *curr = head;
//     while (curr ->next != NULL && curr ->next ->data < x)
//     {
//         curr = curr ->next;
//     }
//     temp ->next = curr ->next;
//     curr ->next = temp;
//     return head;
// }

int main(){
    Node *head = new Node(10);
    head ->next = new Node(15);
    head ->next ->next = new Node(20);
    head ->next ->next ->next = new Node(25);
    head ->next ->next ->next ->next = head;

    // head = insertBegin(head, 5);
    head = insertEnd(head, 30);
    // head = deleteHead(head);
    // head = deleteKthEle(head, 1);
    // head = sortedInsert(head, 12);

    traversal(head);

    return 0;
}