// Insertion and deletion in LinkedList

#include <bits/stdc++.h>

using namespace std;

class Node // We Can also use struct but it doesnt provide OOPS Concepts
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
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

Node *deleteHeadOfLL(Node *head)
{
    Node *temp = head;
    head = temp->next;
    delete temp;
    return head;
}

Node *deleteTailOfLL(Node *head)
{
    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete (temp->next);
    temp->next = nullptr;

    return head;
}

Node *deleteKthIndxEle(Node *head, int k)
{
    Node *temp = head;
    int cnt = 1;
    if (k == 1)
    {
        head = temp->next;
        delete temp;
        return head;
    }

    Node *prev = NULL;

    while (temp)
    {
        cnt++;
        prev = temp;
        temp = temp->next;
        if (cnt == k)
        {
            prev->next = temp->next;
            delete temp;
            return head;
            break;
        }
    }

    return head;
}

Node *deleteKEle(Node *head, int val)
{
    Node *temp = head;
    if (head->data == val)
    {
        head = temp->next;
        delete temp;
        return head;
    }

    Node *prev = NULL;

    while (temp)
    {
        prev = temp;
        temp = temp->next;
        if (temp->data == val)
        {
            prev->next = temp->next;
            delete temp;
            return head;
            break;
        }
    }

    return head;
}

Node *insertNewHead(Node *head, int x)
{
    Node *temp = new Node(x, head);
    head = temp;
    return head;
}

Node *insertNewTail(Node *head, int x)
{
    Node *temp = head;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    Node *newNode = new Node(x);

    temp->next = newNode;

    return head;
}

Node *insertAtKthPosition(Node *head, int val, int pos)
{
    Node *temp = head;
    int cnt = 1;
    if (pos == 1)
        return insertNewHead(head, val);

    Node *prev = NULL;
    while (temp)
    {
        cnt++;
        prev = temp;
        temp = temp->next;
        if (cnt == pos)
        {
            Node *newNode = new Node(val, temp);
            prev->next = newNode;
            return head;
            break;
        }
    }

    return head;
}

int main()
{
    vector<int> arr = {2, 5, 8, 7, 4, 9, 1};

    Node *head = convertArr2LL(arr);
    // cout << "Old Head " << head->data << endl;
    // print(head);

    // Node *newHead = deleteHeadOfLL(head);
    // cout << "New Head " << newHead->data << endl;
    // print(newHead);

    // head = deleteTailOfLL(head);
    // print(head);

    // head = deleteKthIndxEle(head, 10);
    // print(head);

    // head = deleteKEle(head, 7);
    // print(head);

    // head = insertNewHead(head, 10);
    // print(head);

    // head = insertAtKthPosition(head, 10, 3);
    // print(head);

    head = insertNewTail(head, 51);
    print(head);
}
