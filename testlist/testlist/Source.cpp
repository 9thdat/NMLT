
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


node* CreateNode(int x)
{
    node* p = new node();
    if (p == NULL) return NULL;
    p->info = x;
    p-> pNext = NULL;
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

int CheckTangGiam(List l)
{
    int count = 0;
    for (node* p = l.pHead; p != NULL; p = p->pNext)
        count++;

    int ct = 1;
    int cg = 1;
    int cb = 1;

    for (node* p = l.pHead; (p->pNext) != NULL; p = p->pNext)
    {
        if (p->info >= (p->pNext)->info)
            ct++;
        if
            (p->info <= (p->pNext)->info)
            cg++;      
        if (p->info == (p->pNext)->info)
            cb++;
    }
    if (cb == count) return 0;
    else if (ct == count) return 1;
    else if (cg == count ) return -1;
    return 0;
}

void Output(List l)
{
    node* p = l.pHead;
    if (p == NULL) cout << "Danh sach rong.";
    else
    {
        cout << "Danh sach vua nhap la: ";
        for (node* p = l.pHead; p != NULL; p = p->pNext)
            cout << p->info << " ";
        cout << endl;

        if (CheckTangGiam(l) == -1)
            cout << "Danh sach tang.";
        else if (CheckTangGiam(l) == 1) cout << "Danh sach giam.";
        else cout << "Danh sach khong tang cung khong giam.";
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