/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
[]
template
###End banned keyword*/

#include <iostream>
using namespace std;

//###INSERT CODE HERE -

struct Node
{
    //khai bao thanh phan du lieu co kieu int
    int data;
    //khai bao con tro next co kieu Node
    Node* next;
};
typedef struct Node NODE;
struct list {
    //thanh phan dau danh sach
    NODE* pHead;
    //thanh phan cuoi danh sach
    NODE* pTail;
};
typedef struct list LIST;
void KhoiTao(LIST& ds) {
    //dat dia chi dau danh sach bang NULL
    ds.pHead = NULL;
    //dat dia chi cuoi danh sach bang NULL
    ds.pTail = NULL;
}
int KiemTraRong(LIST ds) {
    //neu phan tu dau danh sach NULL
    if (ds.pHead == NULL) {
        //tra ve 1 la co NULL
        return 1;
    }
    //truong hop nguoc lai tra ve khong null
    return 0;
}
NODE* TaoNode(int x) {
    //tao mot node p moi
    NODE* p;
    p = new NODE;
    //neu p==NULL thi khong du bo nho
    if (p == NULL) {
        printf("KHONG DU BO NHO");
        return NULL;
    }
    //gan thanh phan data = x
    p->data = x;
    //gan con tro next = NULL
    p->next = NULL;
    //tra ve node p da tao
    return p;
}

void Input(string x[], int& n)
{
	int i = 0;
    string temp;

	do
	{
        cin >> temp;
        if (temp != "0")
        {
            x[i++] = temp;
        }

        else
        {
            n = i;
            return;
        }
	} while (1);   
}

void swap(int& a, int& b)
{
    int t = a;
    a = b;
    b = t;
}


int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int left = low;
    int right = high - 1;
    while (true) {
        while (left <= right && arr[left] < pivot) left++;
        while (right >= left && arr[right] > pivot) right--;
        if (left >= right) break;
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    swap(arr[left], arr[high]);
    return left;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void Output(string x[], int clone[], int n)
{
        
}

void Copy(string x[], int n)
{
    string temp;
    for (int i = 3; i < n; i++)
    {
        string a, b;

        a = x[i];
        b = (x+1)[i];

    }
}

int main()
{
    
    return 0;
}