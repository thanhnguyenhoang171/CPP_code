#include<iostream>
#include<cmath>
using namespace std;
 bool SNT(int n)
    {
        int i = 2;
        bool snt = true;
        if (n < 2){
            snt = false;
        }
        else {
            while (i <= sqrt(double(n)) && snt){
                if (n%i==0)
                    snt =false;
                else 
                    i++;
            }
        }
        return snt;
    }
int main()
{
    int a, dem1 = 0, dem2 = 0;
    cout <<"Nhap vao so nguyen: ";
    cin >>a;
    if (SNT(a))
        cout <<a<<" la so nguyen to."<<endl;
    else
        cout <<a<<" khong la so nguyen to."<<endl;
    cout <<"In ra cac so nguyen to <= "<<a<<endl;
    for (int i = 2; i <= a; i++){
        if (SNT(i)){
            cout <<i<<" ";
            dem1 ++;
            if (dem1 % 20 ==0){
                cout <<endl;
            }
        }
    }
    cout <<endl;
    cout <<"In ra cac so khong phai la so nguyen to <= "<<a<<endl;
    for (int i = 1 ;i <= a; i++){
        if (!SNT(i)){
            cout <<i<<" ";
            dem2++;
            if (dem2 % 20 == 0){
                cout <<endl;
            }
        }
    }
    cout <<endl;
    system("pause");
    system("cls");
    return 0;
}