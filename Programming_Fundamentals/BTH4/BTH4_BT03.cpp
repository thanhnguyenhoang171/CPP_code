#include<iostream>
using namespace std;

int main ()
{
    int n;
    int i=1, tongl=0, tongc=0;
    cout <<"Nhap vao so nguyen duong n lon hon 1: ";
    cin >>n;
    if(n <=1 ){
        while(n < 1){
        cout <<"Nhap sai, nhap lai n: ";
        cin >>n;
        }
    }
    else{
        while (i <= n){
            if (i % 2 == 0){
                tongc = tongc + i;
            }
            else{
                tongl = tongl + i;
            }
            i++;
        }
    }
    cout <<"Tong cac so le tu 1 den "<<n<<" la: "<<tongl<<endl;
    cout <<"Tong cac so chan tu 1 den "<<n<<" la: "<<tongc<<endl;
    system("pause");
    system("cls");
    return 0;
}