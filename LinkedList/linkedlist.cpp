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

int linkedListLength(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

int checkIfElementIsPresent(Node *head, int target)
{
    Node *temp = head;
    int cnt = 0;

    while (temp)
    {
        if (temp->data == target)
            return cnt + 1;
        else
        {
            cnt++;
            temp = temp->next;
        }
    }

    return 0;
}

int main()
{
    vector<int> arr = {2, 5, 8, 7, 4, 9, 1};

    // Node *y = new Node(arr[0]);
    // cout << "This is Memory address" << endl;
    // cout << y << endl;
    // cout << "This is that data stored at this address" << endl;
    // cout << y->data;

    Node *head = convertArr2LL(arr);
    Node *temp = head;

    int lengthOfLL = linkedListLength(head);

    cout << "Length of LL is " << lengthOfLL << endl;

    int target = 5;
    int location = checkIfElementIsPresent(head, target);

    cout << "Element is present in LL at " << location << endl;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
