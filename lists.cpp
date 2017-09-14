#include <iostream>

#define NUM_ELEM 5

using namespace std;

typedef struct Node {
    struct Node *next;
    int val;
} *NodeT;

NodeT head = NULL;

void add_element(int val)
{
    NodeT newN = new Node;
    newN->next = NULL;
    newN->val = val;
    if (head == NULL)
        head = newN;
    else {
        newN->next = head;
        head = newN;
    }
}

void reverse()
{
    NodeT prev, cur, next;
    prev = head;
    cur = head->next;
    if (cur != NULL) {
        next = cur->next;
    }
    prev->next = NULL;

    while (cur) {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head = prev;
}

void printList()
{
    NodeT temp = head;
    int i;
    for (i = 0; i < NUM_ELEM; ++i) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    int i;
    for (i = 0; i < NUM_ELEM; ++i) {
        add_element(i*10);
    }

    printList();
    reverse();
    printList();
    return 1;
}