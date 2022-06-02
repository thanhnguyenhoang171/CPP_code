#include<iostream>
using namespace std;

void NNhuan(int a)
{
    if (a % 4 == 0 && a % 100 != 0){
        cout <<" la nam nhuan";
    }
    else {
        cout <<" la nam khong nhuan";
    }
}
int main()
{
    int n;
    cout <<"Nhap vao mot nam: ";
    cin >>n;
    cout <<"Nam "<<n;
    NNhuan(n);
    cout <<endl;
    system("pause");
    system("cls");
    return 0;
}