
#include <iostream>
using namespace std;

void inputArray(string array[], int& numberOfElements) {

	string temp;
	int index = 0;
	do
	{
		string temp;
		cin >> temp;
		if (!isdigit(temp[1]))
		{
			return;
		}
		else
		{
			array[index] = temp;
			index++;
		}
	} while (1);
	numberOfElements = index;
}

void outputArray(string array[], string clone[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (clone[count].substr(3, 7) == array[i])
		{
			cout << array[i] << endl;
			count++;
		}
	}
}

void partition(string array[], int left, int right, int& leftIndex, int& rightIndex) {
	leftIndex = left;
	rightIndex = right;
	string pivot = array[(left + right) / 2];

	while (leftIndex <= rightIndex) {
		while (array[leftIndex] < pivot) leftIndex++;
		while (array[rightIndex] > pivot) rightIndex--;

		if (leftIndex <= rightIndex) swap(array[leftIndex++], array[rightIndex--]);
	}
}

void quickSort(string array[], int left, int right) {
	if (left >= right) return;
	int leftIndex, rightIndex;

	partition(array, left, right, leftIndex, rightIndex);

	quickSort(array, left, rightIndex);
	quickSort(array, leftIndex, right);
}

void copyArray(string array[], string clone[], int n)
{
	for (int i = 0; i < n; i++)
	{
		clone[i] = array[i].substr(3, 7);
	}
}

int main() {
	int numberOfElements;
	string array[1000];
	string clone[1000];

	inputArray(array, numberOfElements);
	copyArray(array, clone, numberOfElements);
	quickSort(clone, 0, numberOfElements - 1);
	outputArray(array, clone, numberOfElements);
}