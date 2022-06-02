#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n1, n2, dem = 0;
    do 
    {
        cout <<"Nhap vao 2 so nguyen: ";
        cin >>n1>>n2;
        if (n1 >= n2 || n2 <= 0 || n1 <= 0){
            cout <<"Nhap sai roi! Hay nhap lai\n";
        }
    }
    while (n1 >= n2 || n2 <= 0 || n1 <= 0);
    for (int i = n1; i <= n2; i++){
        if (i >=2){
            int k = 2;
            bool NT = true;
             while (k <= sqrt(double(i)) && NT){
                 if (i%k == 0) {
                     NT=false;
                 }
                 else {
                     k++;
                 }
                 }
            if (NT){
                dem ++;
            }  
             
        }
    }
    cout <<"Tu "<<n1<<" den "<<n2<<" co "<<dem<<" so nguyen to."<<endl;
    system("pause");
    system("cls");
    return 0;
}