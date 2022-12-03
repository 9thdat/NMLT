/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
[]
template
###End banned keyword*/

#include <iostream>
using namespace std;
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

//###INSERT CODE HERE -

node* CreateNode(int x)
{
    node* p = new node();
    if (p == NULL) return NULL;
    p->info = x;
    p->pNext = NULL;
    return p;
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
