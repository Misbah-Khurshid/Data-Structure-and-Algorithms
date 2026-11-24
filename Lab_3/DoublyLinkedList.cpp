#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node* prev;
    Node* next;
};

int main()
{
    // Create five nodes dynamically
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* fourth = new Node;
    Node* fifth = new Node;

    // Take input from user
    cout << "Enter five values: ";

    cin >> head->data;
    cin >> second->data;
    cin >> third->data;
    cin >> fourth->data;
    cin >> fifth->data;

    // Connect first node
    head->prev = NULL;
    head->next = second;

    // Connect second node
    second->prev = head;
    second->next = third;

    // Connect third node
    third->prev = second;
    third->next = fourth;

    // Connect fourth node
    fourth->prev = third;
    fourth->next = fifth;

    // Connect fifth node
    fifth->prev = fourth;
    fifth->next = NULL;

    // Forward Traversal
    cout << "\nForward Traversal: ";
    Node* temp = head;

    int count = 0;

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
        count++;
    }

    cout << "NULL" << endl;

    // Backward Traversal
    cout << "\nBackward Traversal: ";
    temp = fifth;

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }

    cout << "NULL" << endl;

    // Display total nodes
    cout << "\nTotal Nodes: " << count << endl;

    // Delete nodes
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}