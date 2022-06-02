#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    double S = 0.0;
    do 
    {
        cout <<"Nhap vao mot so nguyen: ";
        cin >>n;
        if (n <= 0.5)
            cout <<"Nhap sai roi! Hay nhap lai\n";
    }
    while (n <= 0.5);
    for (int i = 1; i <= n; i++){
        S = S + 1.0/(2*n-1);
    }
    cout <<"S3 = "<<fixed<<setprecision(2)<<S<<endl;
    system("pause");
    system("cls");
    return 0;
}