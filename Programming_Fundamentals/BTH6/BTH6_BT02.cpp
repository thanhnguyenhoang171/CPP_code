#include<iostream>
using namespace std;

int soln2(int a, int b)
{
    int max;
    if (a >= b)
        max = a;
    else
        max = b;
    return max;
}
int soln3 (int a, int b, int c)
{
    int max;
    max = soln2(a, b);
    max = soln2(max, c);
    return max;
}
int main()
{
    int a, b, c;
    cout <<"Nhap 3 so nguyen: \n";
    cin >>a>>b>>c;
    cout <<"So lon nhat 2 so "<<a<<","<<b<<" la: "<<soln2(a,b)<<endl;
    cout <<"So lon nhat 3 so "<<a<<","<<b<<","<<c<<" la: "<<soln3(a,b,c)<<endl;
    system("pause");
    system("cls");
    return 0;
}