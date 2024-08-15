// Doubly Linkedlist

#include <bits/stdc++.h>

using namespace std;

class Node // We Can also use struct but it doesnt provide OOPS Concepts
{
public:
    int data;
    Node *next;
    Node *prev;

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }

public:
    Node(Node *prev1, int data1)
    {
        data = data1;
        prev = prev1;
        next = nullptr;
    }

public:
    Node(Node *prev1, int data1, Node *next1)
    {
        data = data1;
        prev = prev1;
        next = next1;
    }
};

Node *convertArr2DLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(mover, arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// Insertion and deletion in DLL

Node *deleteHeadOfDLL(Node *head)
{
    Node *temp = head;
    head = head->next;
    head->prev = nullptr;
    delete temp;

    return head;
}

Node *deleteTailOfDLL(Node *head)
{
    Node *temp = head;

    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }

    Node *dltNode = temp->next->next;
    dltNode->prev = nullptr;
    temp->next = nullptr;
    delete dltNode;

    return head;
}

int main()
{
    vector<int> arr = {2, 5, 8, 7, 4, 9, 1};

    Node *head = convertArr2DLL(arr);
    // print(head);

    // head = deleteHeadOfDLL(head);
    // print(head);

    head = deleteTailOfDLL(head);
    print(head);
}