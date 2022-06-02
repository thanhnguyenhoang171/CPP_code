#include<iostream>
using namespace std;
int tongn(int n);
int giaithuan(int n);
int main()
{
    int n;
    do 
    {
        cout <<"Nhap so nguyen: ";
        cin >>n;
        if (n <0)
            cout <<"Nhap sai hay nahp lai\n";
    }
    while (n < 0);
    cout <<"Tong tu 1 den "<<n<<"la: "<<tongn(n)<<endl;
    cout <<n<<"! = "<<giaithuan(n)<<endl;
    system ("pause");
    return 0;
}
int tongn(int n)
{
    int s=0;
    for (int i=1; i<=n;i++)
        s+=i;
    return s;
}
int giaithuan(int n)
{
    int gt=1;
    for (int j =1; j<=n; j++)
        gt *=j;
    return gt;
}