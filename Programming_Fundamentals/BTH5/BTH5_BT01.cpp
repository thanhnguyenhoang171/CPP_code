#include<iostream>
using namespace std;

int main()
{
    int n, tong = 0;
    do 
    {
    cout <<"Nhap vao mot so nguyen:\n";
    cin >>n;
    if (n <= 0){
        cout <<"Nhap sai roi! Hay nhap lai\n";
    }
    }
    while (n <= 0);
    for (int i = 1; i <= n; i++)
    {
        tong += i;
    }
    cout <<"Tong tu 1 den "<<n<<" la: "<<tong<<endl;
    system("pause");
    system("cls");
    return 0;
}