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
void SortIncrease(List& l);

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

void nhap(List& l)
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

void xuat(List l)
{
    node* p = l.pHead;
    for (; p != NULL; p = p->pNext)
        cout << p->info << " ";
}

void SortIncrease(List& l)
{
    for (node* pTmp = l.pHead; pTmp != NULL; pTmp = pTmp->pNext)
    {
        for (node* pTmp2 = pTmp->pNext; pTmp2 != NULL; pTmp2 = pTmp2->pNext)
        {
            if (pTmp->info > pTmp2->info)
            {
                int tmp = pTmp->info;
                pTmp->info = pTmp2->info;
                pTmp2->info = tmp;
            }
        }
    }
}

int main()
{
    List l;
    CreateList(l);
    nhap(l);
    if (l.pHead == NULL) cout << "Danh sach rong.";
    else {
        cout << "Danh sach vua nhap la: ";
        xuat(l);
        SortIncrease(l);
        cout << endl << "Danh sach sau khi sap xep la: ";
        xuat(l);
    }
    return 0;
}