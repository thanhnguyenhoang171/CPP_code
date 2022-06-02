#include<iostream>
using namespace std;

int main ()  
{
    int n, i = 2;
    do 
    {
        cout <<  "Nhap vao so nguyen n\n";
        cin >> n;
        if (n <= 0)  
            cout << "Nhap sai roi! Nhap lai n\n";
    }
    while (n <= 0);
    cout << "So " << n << " co cac thua so nguyen to: ";
    do 
    {
        if (n % i == 0)
        {
            cout << i;
            n = n /i;
            if (n > 1){
                cout << ", ";
            }
        }
        else
            i++;
    }
    while (n > 0);
    cout << endl;
    system("pause");
    system("csl");
    return 0;
}