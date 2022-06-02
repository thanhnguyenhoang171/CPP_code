#include<iostream>
using namespace std;

int main()
{
    int n, S = 0;
    cout <<"Nhap vao mot so nguyen: ";
    cin >>n;
    for (int i = 1; i <= n; i++)
    {
        S = S + i*i;
    }
    cout <<"S1 = "<<S<<endl;
    system("pause");
    return 0;
}