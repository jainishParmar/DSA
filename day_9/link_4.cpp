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

void delete_link()
{

    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    while (head != NULL)
    {
        head = head->next;
        cout << &temp << endl;
        delete (temp);
        temp = head;
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        inser_node(arr[i]);
    }
    printLL(head);
    cout << "deleting linked list" << endl;
    delete_link();

    printLL(head);

    return 0;
}
