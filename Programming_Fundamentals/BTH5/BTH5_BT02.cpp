#include<iostream>
using namespace std;

int main()
{
    int m, n, tong = 0;;
    cout <<"Ban can bao nhieu so :";
    cin >>m;
    for (int i = 1; i <= m; i++){
        cout <<"Nhap so thu "<<i<<": ";
        cin >> n;
        tong += n;
    }
    cout <<"Tong "<<m<<" so vua nhap la: "<< tong<<endl;
    system("pause");
    system("cls");
    return 0;
}