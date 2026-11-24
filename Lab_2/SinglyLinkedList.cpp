#include <iostream>
using namespace std;

// Structure of Node
struct Node
{
int data;
Node* next;
};

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    Node* temp;
    int value;
    // Create five nodes
    for (int i = 1; i <= 5; i++)
    {
    Node* newNode = new Node;
    cout << "Enter value " << i << ": ";
    cin >> value;
    newNode->data = value;
    newNode->next = NULL;
    // First node
    if (head == NULL)
    {
    head = newNode;
    tail = newNode;
    }
    else
    {
    tail->next = newNode;
    tail = newNode;
    }
    }

    // Display linked list
    cout << "\nLinked List: ";

    temp = head;
    int count = 0;

    while (temp != NULL)
    {
    cout << temp->data << " -> ";
    count++;
    temp = temp->next;
    }

    cout << "NULL" << endl;

    // Display total nodes
    cout << "Total nodes: " << count << endl;

    // Delete all nodes
    temp = head;

    while (temp != NULL)
    {
    Node* nextNode = temp->next;
    delete temp;
    temp = nextNode;
    }
    head = NULL;
    return 0;
}