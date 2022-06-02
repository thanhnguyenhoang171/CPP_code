#include<iostream>
using namespace std;

int main()
{
    long n, gt = 1;
    do 
    {
        cout <<"Nhap vao mot so nguyen: ";
        cin >>n;
        if (n < 0)
            cout <<"Loi phep tinh! Hay nhap lai\n";
    }
    while (n < 0);
    for (int i = 1; i <= n; i++){
        gt = gt * i;
    }
    cout <<n<<"! = "<<gt<<endl;
    system("pause");
    system("cls");
    return 0;
}