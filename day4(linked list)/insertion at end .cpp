#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class Solution {
public:
    Node* insertAtEnd(Node* head, int val) {

        Node* nn = new Node(val);

        if (head == NULL) {
            return nn;
        }

        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = nn;

        return head;
    }
};

void printList(Node* head) {

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    cout << "Original Linked List:" << endl;
    printList(head);

    Solution obj;

    head = obj.insertAtEnd(head, 40);

    cout << "After Inserting 40:" << endl;
    printList(head);

    return 0;
}
