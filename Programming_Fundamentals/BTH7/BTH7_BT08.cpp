#include<iostream>
using namespace std;

int Fi(int n)
{
    int u = 0, v = 1, t, i = 3;
    while (i <= n)
    {
        t = u + v;
        u = v;
        v = t;
        i++;
    }
    return t;
}
int main()
{
    int a;
    do{
    cout <<"Nhap vao mot so nguyen: ";
    cin >>a;
    if ( a< 0)
        cout <<"Nhap sai roi! Hay nhap lai\n";
    }
    while (a< 0);
    cout <<"Chuoi so Fibonacci tu 0 den "<<a;
    cout <<"\n 0, 1";
    for (int i = 3; i <= a; i++)
    {
        cout <<", "<<Fi(i);
    }
    cout <<endl;
    cout <<"So Fibonacci thu "<<a<<" la: "<<Fi(a);
    cout <<endl;
    system("pause");
    return 0;

}
