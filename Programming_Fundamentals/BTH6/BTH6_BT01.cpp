#include<iostream>
using namespace std;

double DTCN (double a, double b){
    return a*b;
}
double CVCN (double a, double b){
    return (a+b)*2;
}
int main(){
    double r, d;
    do {
        cout <<"Nhap chieu dai: ";
        cin >>d;
        cout <<"Nhap chieu rong: ";
        cin >>r;
        if (d < 0 || r < 0){
            cout <<"Nhap sai roi nhap lai\n";
        }
    }
    while (d < 0 || r < 0);
    cout <<"dien tich la: "<<DTCN(r, d)<<endl;
    cout <<"chu vi chu nhat la: "<<CVCN(r, d)<<endl;
    system("pause");
    system("cls");
    return 0;
}