#include<iostream>
#include<cmath>
using namespace std;

int binhp (double a, int b)
{
    long bp = 0;
    bp = pow (a, b);
    return bp;
}
int main()
{
    double x;
    int y;
    do {
        cout <<"Nhap vao 2 so x va y: \n";
        cin >>x>>y;
        if (x != double(x) && y != int(y)){
            cout <<"Nhap sai roi! Hay nhap lai\n";
        }
    }
    while (x != double(x) && y != int(y));
    cout <<x<<"^"<<y<<" = "<<binhp(x, y)<<endl;
    system("pause");
    system("cls");
    return 0;
}