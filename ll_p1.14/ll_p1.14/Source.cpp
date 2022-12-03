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

void Output(List l1, List l2)
{
    node* p = l1.pHead;
    node* q = l2.pHead;
    if (p == NULL) cout << "Danh sach l1 rong.";
    else
    {
        cout << "Danh sach l1 la: ";
        for (node* p1 = p; p1 != NULL; p1 = p1->pNext)
        {
            cout << p1->info << " ";
        }
    }
    cout << endl;

    if (q == NULL) cout << "Danh sach l2 rong.";
    else
    {
        cout << "Danh sach l2 la: ";
        for (node* p1 = q; p1 != NULL; p1 = p1->pNext)
        {
            cout << p1->info << " ";
        }
    }
    cout << endl;
    if (p == NULL || q == NULL)
        cout << "Khong tron duoc.";
    else
    {
        cout << "Danh sach l1 sau khi sap xep la: ";
        SortIncrease(l1);
        for (node* p1 = p; p1 != NULL; p1 = p1->pNext)
        {
            cout << p1->info << " ";
        }

        cout << "\nDanh sach l2 sau khi sap xep la: ";
        SortIncrease(l2);
        for (node* p1 = q; p1 != NULL; p1 = p1->pNext)
        {
            cout << p1->info << " ";
        }

        cout << "\nKet qua tron l1 voi l2 la: ";
        
        List l3;
        CreateList(l3);
        node* r = l3.pHead;
        for (node* p1 = p; p1 != NULL; p1 = p1->pNext)
        {
            int x = p1->info;
            node* pTemp = CreateNode(x);
            AddTail(l3, pTemp);
        }

        for (node* p1 = q; p1 != NULL; p1 = p1->pNext)
        {
            int x = p1->info;
            node* pTemp = CreateNode(x);
            AddTail(l3, pTemp);
        }

        SortIncrease(l3);

        node* p3 = l3.pHead;
        while (p3 != NULL)
        {
            cout << p3->info << " ";
            p3 = p3->pNext;
        }
    }

}


int main()
{
    List l1;
    List l2;
    CreateList(l1);
    CreateList(l2);
    Input(l1);
    Input(l2);
    Output(l1, l2);
    return 0;
}
