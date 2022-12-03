/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
template
###End banned keyword*/
#include <iostream>
#include <string.h>
using namespace std;
//###INSERT CODE HERE -

struct Node
{
	string data;
	Node* pNext;
};

struct Stack
{
	Node* pHead;
	Node* pTail;
};

int Top(int stack[]) {
	return stack[top];
}

void Init(Stack& s)
{
	s.pHead = s.pTail = NULL;
}

Node* createNode(string x)
{
	Node* p = new Node;
	p->data = x;
	p->pNext = NULL;
	return p;
}

bool IsEmpty() {
	if (top == -1) {
		return true;
	}
	else {
		return false;
	}
}

void Push(Stack& s, string x)
{
	Node* p = createNode(x);
	if (s.pHead == NULL)
	{
		s.pHead = s.pTail = p;
	}
	else
	{
		p->pNext = s.pHead;
		s.pHead = p;
	}
}

string Pop(Stack& s)
{
	string x = s.pHead->data;
	Node* p = s.pHead;
	s.pHead = p->pNext;
	delete p;
	return x;
}

int main()
{
	int a;
	int b;
	cin >> a;
	cin >> b;

	while (1)
	{
		int n = a % 10;
		cout << n * b;
		a /= 10;
		if (a == 0) break;
	}
	return 0;
}