
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Node {
    int data;
    Node* next;
};

struct List
{
    Node* head;
    Node* tail;
};

void CreateList(List& l)
{
    l.head = NULL;
    l.tail = NULL;
}

Node* CreateNode(int x)
{
    Node* p = new Node();
    if (p == NULL) return NULL;
    p->data = x;
    p->next = NULL;
    return p;
}
void AddTail(List& l, Node* p)
{
    if (l.head == NULL)
    {
        l.head = p;
        l.tail = p;
    }
    else
    {
        l.tail->next = p;
        l.tail = p;
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
            AddTail(l, p);
        }
    }

}

void XoaTrung(List& l)
{
    
    

    for (Node* p = l.head ; p != NULL; p = p->next)
        for (Node* q = p->next; q != NULL; q = q->next )
    {
        int x = p->data;
        if (x == (q->data))
            (q->data) = 0;
    }

    for (Node* q = l.head; q != NULL; q = q->next)
    {
        if (q->data != 0)
            cout << q->data << " ";
    }
}

void DaoNguocDS(List& l) {
    Node* current = l.head;
    Node* prev = NULL;
    Node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    l.head = prev;
}

void Output(List l)
{
    DaoNguocDS(l);
    Node* p = l.head;
    if (p == NULL) cout << "Danh sach rong.";
    else
    {
        for (Node* p = l.head; p != NULL; p = p->next)
            cout << p->data << " ";
        cout << endl;

        XoaTrung(l);
    }
}

int main()
{
    List l;
    CreateList(l);
    Input(l);
    Output(l);
    return 0;
}