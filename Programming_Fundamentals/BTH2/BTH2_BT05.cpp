#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    double p,heron;
    cout << "Nhap ba canh tam giac : ";
    cin >>a>>b>>c;
    p = (a + b +c)/2;
    heron = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Dien tich tam giac la : "<<heron<<endl;
    system("pause");
    return 0;

}
