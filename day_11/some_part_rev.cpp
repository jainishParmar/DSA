#include <iostream>
#include <string>
using namespace std;

// A Linked List Node
struct Node
{
    int data;
    Node *next;
};

// Utility function to print a linked list
void printList(string msg, Node *head)
{
    cout << msg;

    Node *ptr = head;
    while (ptr)
    {
        cout << ptr->data << " —> ";
        ptr = ptr->next;
    }

    cout << "null" << endl;
}

// Helper function to insert a new node at the beginning of the linked list
void push(Node **head, int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Iteratively reverse a linked list from position `m` to `n`
// Note that the head is passed by reference
void reverse(Node *&head, int m, int n)
{
    // base case
    if (m > n)
    {
        return;
    }

    Node *prev = NULL; // the previous pointer
    Node *curr = head; // the main pointer

    // 1. Skip the first `m` nodes
    for (int i = 1; curr != NULL && i < m; i++)
    {
        prev = curr;
        curr = curr->next;
    }

    // `prev` now points to (m-1)'th node
    // `curr` now points to m'th node

    Node *start = curr;
    Node *end = NULL;

    // 2. Traverse and reverse the sublist from position `m` to `n`
    for (int i = 1; curr != NULL && i <= n - m + 1; i++)
    {
        // Take note of the next node
        Node *next = curr->next;

        // move the current node onto the `end`
        curr->next = end;
        end = curr;

        // move to the next node
        curr = next;
    }

    /*
        `start` points to the m'th node
        `end` now points to the n'th node
        `curr` now points to the (n+1)'th node
    */

    // 3. Fix the pointers and return the head node

    if (start)
    {
        start->next = curr;
        if (prev != NULL)
        {
            prev->next = end;
        }
        // when m = 1, `prev` is nullptr
        else
        {
            // fix the head pointer to point to the new front
            head = end;
        }
    }
}

int main()
{
    int m = 2, n = 5;

    Node *head = NULL;
    for (int i = 7; i >= 1; i--)
    {
        push(&head, i);
    }

    printList("Original linked list: ", head);
    reverse(head, m, n);
    printList("Reversed linked list: ", head);

    return 0;
}