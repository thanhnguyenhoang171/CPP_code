#include<iostream>
using namespace std;

int main()
{
    int n, chuso, sdf = 0;
    do 
    {
        cout << "Nhap vao n: ";
        cin >> n;
        if (n <= 0)
        {
            cout << "Nhap sai roi! Hay nhap lai n\n";
        }
    }
    while (n <= 0);
    while (n > 0)
    {
        chuso = n % 10;
        sdf = sdf * 10 + chuso;
        n = n / 10;
    }
    cout << "Ket qua: ";
    while (sdf > 0)
    {
        chuso = sdf % 10;
        cout << chuso << " ";
        sdf = sdf / 10;

    }
    cout << endl;
    system("pause");
    system("csl");
    return 0;
} 