#include<iostream>
using namespace std;

void hinhvuong(int a)
{
    for (int i = 1; i <= a; i ++){
        cout <<endl;
        for (int j = 1; j <= a; j++){
            cout <<"*";
        }
    }
}
int main()
{
    int n;
    cout <<"Nhap vao canh hinh vuong: ";
    cin >>n;
    hinhvuong(n);
    cout <<endl;
    system("pause");
    system("cls");
    return 0;
}