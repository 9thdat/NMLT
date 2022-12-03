/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
?
switch
[
###End banned keyword*/


#include <iostream>
using namespace std;

void getScore(int& courseScore)
{
    cout << "Enter course score (0<=score<=100): ";
    cin >> courseScore;
    printGrade(courseScore);
    cout << "Course score is " << courseScore;
}
void printGrade(int n)
{

    int d;
    char k = '0';
    d = n / 10;
    switch (d)
    {
    case 0: case 1: case 2: case 3: case 4: case 5: k = 'F'; break;
    case 6: k = 'D'; break;
    case 7: k = 'C'; break;
    case 8: k = 'B'; break;
    case 9: case 10: k = 'A'; break;
    }
    cout << endl << "Your grade for the course is " << k;
}
int main()
{
    int courseScore;
    getScore(courseScore);
    printGrade(courseScore);
    return 0;
}



