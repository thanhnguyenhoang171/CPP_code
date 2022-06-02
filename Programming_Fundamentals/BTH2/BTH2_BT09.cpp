#include<iostream>
using namespace std;
int main()
{
    int tss,tst,gdh;
    cout << "Nhap tong so sach : ";
    cin >>tss;
    cout << "Nhap tong so tien : ";
    cin >>tst;
    gdh = 0.075 * tst+ tst + 2000*tss;
    cout << "Tong gia tri don hang la : "<<gdh<<endl;
    system("pause");
    return 0;
}