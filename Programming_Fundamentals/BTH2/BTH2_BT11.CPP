#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x;
    double rad;
    const double PI = 3.141592653589793238463;
    cout <<"Nhap vao goc x : ";
    cin >>x;
    rad = x*PI/180;
    cout <<"cos cua x la : "<<cos(rad)<<endl;
    cout <<"sin cua x la : "<<sin(rad)<<endl;
    cout <<"tan cua x la : "<<tan(rad)<<endl;
    system("pause");
    return 0;
}
