/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
[
]
template

###End banned keyword*/

#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//###INSERT CODE HERE -

struct Node {
    int data;
    Node* next;
};

struct List
{
    Node* head = NULL;
    Node* tail = NULL;
};

Node* CreateNode(int x)
{
    Node* p = new Node();
    if (p == NULL)
        return NULL;
    p->data = x;
    p->next = NULL;
    return p;
}

void AddHead(List& l, Node* p) {
    if (l.head == NULL) {
        l.head = p;
        l.tail = p;
    }
    else {
        p->next = l.head;
        l.head = p;
    }
}

void Input(List& l)
{
    int x;
    while (1)
    {
        cin >> x;
        if (x == 0)
            break;
        else
        {
            Node* p = CreateNode(x);
            AddHead(l, p);
        }
    }

}

int CountNumber(List& l, Node* p) {
    int count = 1;
    Node* q = p;
    while (q->next != NULL) {
        if (q->next->data == p->data) {
            count++;
            Node* t = q->next;
            q->next = t->next;
            q = t->next;
            delete t;
        }
        else {
            q = q->next;
        }
    }
    return count;
}
void Output(List l)
{
    Node* p = l.head;
    int max = 0;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
    p = l.head;
    Node* prev = l.head;
    Node* begin = p;
    while (p != NULL) {
        int freq = CountNumber(l, p);
        if (freq > max) {
            max = freq;
            begin = p;
            prev = p;
            p = p->next;
        }
        else if (freq < max) {
            p = p->next;
            Node* t = prev->next;
            prev->next = t->next;
            delete t;
        }
        else {
            prev = p;
            p = p->next;
        }
    }
    while (begin != nullptr) {
        cout << begin->data << ": " << max << endl;
        begin = begin->next;
    }
}

int main()
{
    List l;
    Input(l);
    if (l.head == NULL) cout << "Danh sach rong.";
    else Output(l);
    return 0;
}