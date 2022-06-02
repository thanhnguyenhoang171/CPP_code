#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //ax+b=0
    double a,b,x;
    cout <<"Nhap vao he so a va b: \n";
    cin >>a>>b;
    if (a=0&&b!=0)
    {
        cout <<"NO";
    }
    else if (a==0&&b==0)
    {
        cout <<"INF";
    }
    else
    {
        cout <<fixed<<Setprecision(2)<<double(-b)/a<<endl;
    }
    system("pause");
    return 0;
}
