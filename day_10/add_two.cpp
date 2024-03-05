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
Node *addTwoNumbers(Node *l1, Node *l2)
{
    Node *dummy = new Node(-1);
    Node *temp = dummy;
    int result;
    int carry = 0;
    while (l1 && l2)
    {
        result = l1->data + l2->data + carry;

        carry = result / 10;

        Node *fake = new Node(result % 10);
        temp->next = fake;
        temp = fake;
        l1 = l1->next;
        l2 = l2->next;
    }
    while (l1)
    {
        result = l1->data + carry;

        carry = result / 10;

        Node *fake = new Node(result % 10);
        temp->next = fake;
        temp = fake;
        l1 = l1->next;
    }
    while (l2)
    {
        result = l2->data + carry;

        carry = result / 10;

        Node *fake = new Node(result % 10);
        temp->next = fake;
        temp = fake;
        l2 = l2->next;
    }
    if (carry)
    {
        Node *fake = new Node(carry);
        temp->next = fake;
        temp = fake;
    }

    return dummy->next;
}

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
Node *head1 = NULL;
Node *head2 = NULL;
void inser_node(int key)
{
    Node *temp = new Node(key);

    if (head1 == NULL)
    {
        head1 = temp;
    }
    else
    {
        Node *temp1 = head1;
        while (temp1->next != nullptr)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}
void inser_node2(int key)
{
    Node *temp = new Node(key);

    if (head2 == NULL)
    {
        head2 = temp;
    }
    else
    {
        Node *temp1 = head2;
        while (temp1->next != nullptr)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
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

    vector<int> arr1 = {1, 2, 3, 4, 5};
    int n1 = arr1.size();
    for (int i = 0; i < n1; i++)
    {
        inser_node2(arr1[i]);
    }
    printLL(head1);
    printLL(head2);

    Node *result = addTwoNumbers(head1, head2);
    printLL(result);

    return 0;
}
