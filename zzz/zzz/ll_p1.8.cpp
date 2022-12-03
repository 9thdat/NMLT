#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node* pLeft;
	struct node* pRight;
};
typedef struct node NODE;
typedef NODE* TREE;

void KhoiTaoCay(TREE& t)
{
	t = NULL;
}

void ThemNodeVaoCay(TREE& t, int x)
{
	if (t == NULL)
	{
		NODE* p = new NODE;
		p->data = x;
		p->pLeft = NULL;
		p->pRight = NULL;
		t = p;
	}
	else
	{
		if (t->data > x)
		{
			ThemNodeVaoCay(t->pLeft, x);
		}
		else if (t->data < x)
		{
			ThemNodeVaoCay(t->pRight, x);
		}
	}
}

void Duyet_RNL(TREE t)
{
	if (t != NULL)
	{
		Duyet_RNL(t->pRight);
		cout << t->data << "  ";
		Duyet_RNL(t->pLeft);
	}
}

void FindDadNode(TNODE* root, TNODE* p)
{
	if (root != NULL)
	{
		if (root->pLeft != NULL)
			Timnutcha(root->pLeft, p);
		if (root->pLeft == p || root->pRight == p)
			cout << root->data;
		if (root->pRight != NULL)
			Timnutcha(root->pRight, p);
	}
}

TNODE* search(TNODE* root, int x)
{
	while (root != NULL)
	{
		if (root->data == x)
			return root;
		else if (x < root->data)
			root = root->pLeft;
		else
			root = root->pRight;
	}
}

void Input(TREE& t)
{
	while (true)
	{
		int x;
		cout << "Nhap vao so nguyen duong x: ";
		cin >> x;
		if (x < 1)
		{
			cout << "Ket thuc nhap du lieu cho cay...\n";
			break;
		}
		else
			ThemNodeVaoCay(t, x);
	}

}

void Output(TREE t)
{
	cout << "Xuat cay theo thu tu giam dan: ";
	Duyet_RNL(t);
}

int main()
{
	TREE t;
	KhoiTaoCay(t);
	cout << "Nhap du lieu cho cay...\n";
	Input(t);
	cout << "Nhap vao Node x can tim Node cha: ";
	int x;
	cin >> x;
	TREE* temp = search(t, x);
	FindDadNode(t, temp);
	Output(t);
	return 0;
}