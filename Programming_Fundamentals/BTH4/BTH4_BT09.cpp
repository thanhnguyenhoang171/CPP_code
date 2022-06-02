#include<iostream>
using namespace std;

int main()
{
    int n1, n2, i, demU = 0;
    do 
    {
        cout << "Nhap 2 so nguyen duong n1 va n2: \n";
        cin >> n1 >> n2;
        if (n1 >= n2 || n1 <= 0 || n2 <= 0)
        {
            cout << "Nhap sai roi! Nhap sai roi nhap lai\n";
        }
    } while (n1 >= n2 || n1 <= 0 || n2 <= 0);
    i = n1;
    while (i <= n2)
    {
        if (10 % i == 0){
            demU ++;
        }
        i++;
    }
    cout << " Co "<< demU << " la uoc cua 10 trong pham vi tu " << n1 << " den " << n2 << endl;
    system ("pause");
    system ("csl");
    return 0;
}