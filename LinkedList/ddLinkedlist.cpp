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

    Node *dltNode = temp->next;
    dltNode->prev = nullptr;
    temp->next = nullptr;
    delete dltNode;

    return head;
}

Node *deleteEleAtKthPoss(Node *head, int k)
{
    Node *temp = head;
    int cnt = 1;
    if (cnt == k)
    {
        return deleteHeadOfDLL(head);
    }

    while (temp)
    {
        temp = temp->next;
        cnt++;
        if (cnt == k)
        {
            Node *connNode = temp->prev;
            connNode->next = temp->next;
            temp->prev = nullptr;
            temp->next = nullptr;
            delete temp;

            return head;
            break;
        }
    }

    return head;
}

Node *deleteValFromDLL(Node *head, int val)
{
    Node *temp = head;
    if (temp->data == val)
    {
        return deleteHeadOfDLL(head);
    }

    while (temp)
    {
        temp = temp->next;
        if (temp->data == val)
        {
            Node *prevNode = temp->prev;
            prevNode->next = temp->next;
            temp->prev = nullptr;
            temp->next = nullptr;
            delete temp;

            return head;
            break;
        }
    }

    return head;
}

int main()
{
    vector<int> arr = {2, 5, 8, 7, 4, 9, 1}; // 7

    Node *head = convertArr2DLL(arr);
    // print(head);

    // head = deleteHeadOfDLL(head);
    // print(head);

    // head = deleteTailOfDLL(head);
    // print(head);

    // head = deleteEleAtKthPoss(head, 7);
    // print(head);

    head = deleteValFromDLL(head, 10);
    print(head);
}