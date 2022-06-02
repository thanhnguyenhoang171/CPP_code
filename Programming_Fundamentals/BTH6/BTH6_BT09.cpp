#include<iostream>
using namespace std;

int Ssonguyen(int a)
{
    int chuso = 0, s = 0;
    while (a > 0){
        chuso = a % 10;
        s = s + chuso;
        a = a / 10;
    }
    return s;
}       
int main()
{
    int n;
    do {
        cout <<"Nhap vao mot so nguyen duong: ";
        cin >>n;
        if (n < 0)
            cout <<"Nhap sai roi! Hay nhap lai\n";
    }
    while (n < 0);
    cout <<"Tong cac chu so cua "<<n<<" la: "<<Ssonguyen(n)<<endl;
    system("pause");
    system("cls");
    return 0;
}                                    