#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

void printLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
    cout << endl;
}
Node *head = NULL;
void inser_node(int key)
{
    Node *temp = new Node(key);

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        Node *temp1 = head;
        while (temp1->next != nullptr)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}

Node *reverse_link(Node *temp)
{
    Node *curr = temp;
    Node *prev = NULL;
    while (curr)
    {
        Node *temp1 = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp1;
    }
    return prev;
}
Node *shuffleMerge(Node *a, Node *b)
{
    if (a == NULL)
    {
        return b;
    }

    if (b == NULL)
    {
        return a;
    }

    Node *recur = shuffleMerge(a->next, b->next);

    Node *result = a;
    a->next = b;
    b->next = recur;
    return result;
}
void reaaange(Node *head)
{
    if (head == NULL || head->next == NULL || head->next->next == NULL)
    {
        return;
    }
    Node *fast = head->next;
    Node *slow = head;

    while (fast != NULL && fast->next != NULL)
    {

        slow = slow->next;
        fast = fast->next->next;
    }

    Node *list1 = head;
    Node *list2 = slow->next;
    slow->next = NULL;
    list2 = reverse_link(list2);
    head = shuffleMerge(list1, list2);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        inser_node(arr[i]);
    }
    reaaange(head);
    printLL(head);

    return 0;
}
