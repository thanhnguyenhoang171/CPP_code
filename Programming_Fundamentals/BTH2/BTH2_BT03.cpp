#include<iostream>
#include<string>
using namespace std;
int main()
{
    string ten;
    int snlv,tc,tl;
    cout << "Nhap ten: ";
    cin >> ten;
    cout << "Nhap so ngay lam viec: ";
    cin >> snlv;
    cout << "Nhap tien cong 1 ngay: ";
    cin >> tc;
    tl = snlv * tc;
    cout << ten <<endl;
    cout << "Tien luong nhan duoc la: "<<tl<<endl;
    system("pause");
    return 0;
    }