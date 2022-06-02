#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, chuso, sotam,sdn= 0;
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
        sdn = sdn*10 + chuso;
        sotam = sotam / 10;
    }
    cout <<"So nghich dao cua "<<n<<" la: "<<sdn<<endl;
    system("pause");
    system("cls");
    return 0;
}
