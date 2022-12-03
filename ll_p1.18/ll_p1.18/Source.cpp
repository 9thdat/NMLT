#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//###INSERT CODE HERE -

struct node {
    int info;
    node* pNext;
};

struct List {
    node* pHead;
    node* pTail;
};

void CreateList(List& l) {
    l.pHead = NULL;
    l.pTail = NULL;
}

void AddTail(List& l, node* p)
{
    if (l.pHead == NULL)
    {
        l.pHead = p;
        l.pTail = p;
    }
    else
    {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}

node* CreateNode(int x)
{
    node* p = new node();
    if (p == NULL) return NULL;
    p->info = x;
    p->pNext = NULL;
    return p;
}

bool soNguyenTo(int soA)
{
    if (soA < 2) 
    {
        return false;
    }
    else if (soA > 2)
    {
        if (soA % 2 == 0) 
        {
            return false;
        }
        for (int i = 3; i < sqrt((float)soA); i += 2)
        {
            if (soA % i == 0)
            {
                return false;
            }
        }
    }
    return true;
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
            node* p = CreateNode(x);
            AddTail(l, p);
        }
    }

}

void Output(List l)
{
    int count = 0;
    for (node* p = l.pHead; p != NULL; p = p->pNext)
    {
        int x = p->info;
        if (soNguyenTo(x) == 1 && count % 2 != 0)
            cout << p->info << " ";
        count++;
    }

}

int main()
{
    List l1;
    CreateList(l1);
    Input(l1);
    Output(l1);
    return 0;
}