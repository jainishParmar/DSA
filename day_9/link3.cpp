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

Node *clone_link(Node *head1)
{
    Node *answer = NULL;
    Node *temp = head1;
    while (temp != NULL)
    {
        Node *t = new Node(temp->data);
        if (answer == NULL)
        {
            answer = t;
        }
        else
        {
            Node *temp1 = answer;
            while (temp1->next != nullptr)
            {
                temp1 = temp1->next;
            }
            temp1->next = t;
        }
    }
    return answer;
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
    cout << endl;
    cout << "clone" << endl;
    Node *answer = clone_link(head);
    printLL(answer);

    return 0;
}
