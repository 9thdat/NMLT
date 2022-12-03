#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

int NodeDelete(List& l, int y)
{
    int count = 0;

    for (Node* p = l.head; p != NULL; p = p->next)
    {
        if (p->data == y)
        {
            p->data = 0;
            count++;
        }
    }
    
    if (count == 0)  
            return count; 
    else 
    for (Node* q = l.head; q != NULL; q = q->next)
        if (q->data != 0)
            return 1;
   return -1;
}

void Output(List l, int y)
{
    Node* p = l.head;
    if (p == NULL) cout << "Danh sach rong.";
    else
    {   
        int z = NodeDelete(l, y);
        if ( z == -1) cout << "Danh sach rong.";
        
        else
            if (z == 0)
            {
                cout << "Khong tim thay " << y << " trong danh sach: \n";
                for (; p != NULL; p = p->next)
                {
                    cout << p->data << " ";
                }
            }
            
        else 
            for (; p != NULL; p = p->next)
            {
                if (p->data != 0)
                cout << p->data << " ";
            }
    }
}

int main()
{   
    List l;
    CreateList(l);
    Input(l);
    int y;
    cin >> y;
    Output(l, y);
    return 0;
}