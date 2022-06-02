#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d;
    double kc;
    cout << "Nhap diem thu nhat : "<<endl;;
    cin >>a>>b;
    cout << "Nhap diem thu hai : "<<endl;;
    cin >>c>>d;
    kc = sqrt(pow((a - b),2) + pow((c - d),2));
    cout << "Khoang cach giua hai diem la : " <<kc<<endl;
    system("pause");
    return 0;
}
