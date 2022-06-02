#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main() 
{
    double a,b,c,x1,x2,x,delta;
    cout <<"Nhap he so a: ";
    cin >>a;
    cout <<"Nhap he so b: ";
    cin >>b;
    cout <<"Nhap he so c: ";
    cin >>c;
    delta = pow(b,2)-4*a*c;
    if(delta > 0){
        cout <<"Phuong trinh co hai nghiem phan biet"<<endl;
        cout <<"x1 = "<<fixed<<setprecision(2)<<double(-b-sqrt(delta))/2*a<<endl;
        cout<<"x2 = "<<fixed<<setprecision(2)<<double(-b+sqrt(delta))/2*a<<endl;
    }
    else if (delta == 0){
        cout <<"Phuong trinh co mot nghiem duy nhat"<<endl;
        cout <<"x = "<<double(-b)/2*a<<endl;
    }
    else {
        cout <<"Phuong trinh vo nghiem"<<endl;
    }
    system("pause");
    return 0;
}