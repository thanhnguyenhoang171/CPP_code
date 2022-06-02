#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int UCLN(int m, int n)
{
    int r;
    while (n>0)
    {
        r=m%n;
        m = n;
        n=r;

    }
    return m;
}
int main()
{
    int TS, MS, a, b;
    do 
    {
        cout <<"Nhap tu so va mau so: ";
        cin >>TS>>MS;
        if (MS==0)
            cout <<"Nhap sai roi! Nhap lai\n";
    }while (MS==0);
    
    cout <<"Phan so chua toi gian: "<<TS<<"/"<<MS<<endl;
    a = abs(TS);
    b = abs(MS);
    TS = TS/UCLN(a, b);
    MS = MS/UCLN(a, b);
    cout <<"Phan so da toi gian: "<<TS<<"/"<<MS;
    cout <<endl;
    cout <<"Uoc chung lon nhat cua "<<a<<" va "<<b<<" la: "<<UCLN(a, b)<<endl;
    system("pause");
    return 0;
}