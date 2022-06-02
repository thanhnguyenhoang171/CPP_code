#include<iostream>
using namespace std;

void SDN (int &a)
{
    int chuso = 0, nguoc = 0, temp;
    temp = a;
    do{
        chuso = a % 10;
        nguoc = nguoc * 10 + chuso;
        a = a / 10;
    }while (a > 0);
    if (temp == nguoc){
        cout <<" la so doi xung";
    }
    else{
        cout <<" khong la so doi xung";
    }
}
int main()
{
    int n;
    cout <<"Nhap vao mot so nguyen: ";
    cin >>n;
    cout <<"So "<<n;
    SDN(n);
    cout <<endl;
    system("pause");
    system("cls");
    return 0;
}