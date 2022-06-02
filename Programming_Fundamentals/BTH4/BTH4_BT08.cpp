#include<iostream>
using namespace std;

int main()
{
    int n, chuso, tam, dem = 0,sum= 0;
    do{
        cout <<"Nhap so nguyen duong n: ";
        cin >>n;
        if (n <= 0){
            cout <<"Nhap sai! nhap lai\n ";
        }
    }while(n <= 0);
    tam = n;
    while(tam > 0){
        chuso = tam % 10;
        dem ++;
        tam = tam / 10;
        if (chuso % 2 != 0)
        {
            sum = sum + chuso;
        }
    }
    cout <<"Tong cac chu so le cua "<<n<<" la: "<<sum<<endl;
    system("pause");
    system("cls");
    return 0;
}