#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n; 
    double S = 0;

    do{
    cout <<"Nhap vao mot so nguyen: \n";
    cin >>n;
        if (n == 0)
            cout << "Xay ra loi chia 0! Hay nhap lai\n";
    }
    while (n == 0);
    for (int i = 1; i <= n; i++)
    {
        S = S + 1.0/i;
    }
    cout <<"S2 = "<<fixed<<setprecision(2)<<S<<endl;
    system("pause");
    system("cls");
    return 0;
}