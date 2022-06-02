#include<iostream>
using namespace std;
int main()
{
    double r,dt,cv;
    double pi = 3.141593;
    cout << "Nhap ban kinh r : ";
    cin >> r;
    dt = pi * r * r;
    cv = pi * 2 * r;
    cout << "Dien tich hinh tron la : " << dt << endl;
    cout << "Chu vi hinh tron la : " << cv << endl;
    system("pause");
    return 0;
}