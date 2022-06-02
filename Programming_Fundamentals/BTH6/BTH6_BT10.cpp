#include<iostream>
using namespace std;

void SHThien (int a)
{
    int sum = 0;
    for (int i = 1; i < a; i++){
        if ( a % i == 0){
            sum = sum + i;
        }
    }
    if ( sum == a){
        cout <<" la so hoan thien"<<endl;
    }
    else {
        cout <<" khong la so hoan thien"<<endl;
        }
}
int main()
{
    int n;
    do {
        cout <<"Nhap vao mot so nguyen: ";
        cin >>n;
        if (n < 0)
            cout <<"Nhap sai roi! Hay nhap lai\n";
    }
    while (n < 0);
    cout <<"So  "<<n;
    SHThien(n);
    system("pause");
    system("cls");
    return 0;
}