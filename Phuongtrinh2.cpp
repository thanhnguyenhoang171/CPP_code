#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,x1,x2,x,delta;
    cout <<"Phuong trinh bac hai ax^2 + bx + c = 0\n";
    cout <<"Nhap vao he so a: ";
    cin >>a;
    cout <<"Nhap vao he so b: ";
    cin >>b;
    cout <<"Nhap vao he so c: ";
    cin >>c;
    delta = pow(b,2)-4*a*c;
    if (delta < 0)
    {
        cout <<"Phuong trinh vo nghiem";
    }
    else if (delta > 0)
    {
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        cout <<"Phuong trinh co 2 nghiem phan biet la: "<<fixed<<setprecision(2)<<"x1 = "<<x1<<" va x2 = "<<x2;
    }
    else if (delta == 0)
    {
        x=-b/2*a;
        cout <<"Phuong trinh co nghiem kep la: "<<"x = "<<x;
    }
    cout <<endl;
    system("pause");
    return 0;
}