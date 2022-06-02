#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    char dau;
    int  a,b;
    cout <<"Nhap 2 so nguyen: "<<endl;
    cin >>a>>b;
    cout <<"Nhap 1 phep toan: "<<endl;
    cin >>dau;
    switch (dau)
    {
        case '+' :
            cout <<a<<" + "<<b<<" = "<<a + b<<endl;;
            break;
        case '-':
            cout <<a<<" - "<<b<<" = "<<a - b<<endl;;
            break;
        case '*':
            cout <<a<<" * "<<b<<" = "<<a * b<<endl;;
            break;
        case '/':
            if (b == 0){
            cout <<"Loi chia 0"<<endl;;
            }
            else {
            cout <<a<<" / "<<b<<" = "<<fixed<<setprecision(2)<<double(a) / b<<endl;;
            }
            break;
        default:
        cout <<"Nhap sai phep toan"<<endl;;
        break;
    }
    system("pause");
    return 0;
}