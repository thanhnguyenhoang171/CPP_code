#include<iostream>
#define MAXSIZE 100
using namespace std;
int main()
{
    double values[MAXSIZE];
    int currentSize;
    cout <<"Nhap vao gia tri cua currentSize: ";
    cin >> currentSize;
    cout <<"Nhap vao gia tri\n";
    for (int i = 0; i < currentSize; i++)
    {
        cin >>values[i];
    }
    for (int i = 0; i < currentSize; i++)
    {
        cout <<values[i];
        if (i < currentSize - 1)
            cout <<", ";
        if (i == currentSize - 1)
            cout <<".";
    }
    cout <<endl;
    system("pause");
    return 0;
}