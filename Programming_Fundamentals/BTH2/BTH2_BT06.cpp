#include<iostream>
using namespace std;
int main()
{
    int n,du;
    int a,b,c;
    cout <<"Nhap 1 so co 3 chu so : ";
    cin >>n;
    du = n % 10;
    n = n / 10;
    a = du;
    du = n % 10;
    n = n / 10;
    b = du;
    du = n % 10;
    n = n /10;
    c = du;
    cout <<"Tong 3 chu so la : "<<a + b + c<<endl;
    cout <<"So dao nguoc la : "<<a * 100 + b * 10 + c<<endl;
    system("pause");
    return 0;

}
