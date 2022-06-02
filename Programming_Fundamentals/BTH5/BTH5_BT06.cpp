#include<iostream>
using namespace std;

int main()
{
    double d, r;
    cout <<"Nhap vao chieu dai d: ";
    cin >>d;
    cout <<"Nhap vao chieu rong r: ";
    cin >>r;
    for (int i = 1; i <= d; i++){
        cout <<"\n";
        for (int j = 1; j <= r; j++){
            cout <<"*";
        }
    }
    cout <<endl;
    system("pause");
    return 0;
}