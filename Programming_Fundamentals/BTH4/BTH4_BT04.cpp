#include<iostream>
using namespace std;

int main()
{
    int n, chuso, sotam, dem = 0,schuso = 0;
    do{
        cout <<"Nhap so nguyen duong n: ";
        cin >>n;
        if (n <= 0){
            cout <<"Nhap sai! nhap lai\n ";
        }
    }while(n <= 0);
    sotam = n;
    while(sotam > 0){
        chuso = sotam % 10;
        schuso = schuso + chuso;
        dem ++;
        sotam = sotam / 10;
    }
    cout <<n<<" co "<<dem<<" chu so va tong cac chu so la: "<<schuso<<endl;
    system("pause");
    system("cls");
    return 0;
}
