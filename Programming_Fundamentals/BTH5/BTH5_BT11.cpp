#include<iostream>
using namespace std;

int main()
{
    int n;
    do 
    {
        cout <<"Nhap vao chieu dai canh hinh vuong: ";
        cin >>n;
        if (n <= 0){
            cout <<"Nhap sai roi! Hay nhap lai\n";
        }
    }
    while (n <= 0);
    for (int i = 1; i <= n; i++)
    {
        cout <<endl;
        for (int j = 1; j <= n; j++){
            cout <<"*";
        }
    }
    cout <<endl;
   for (int i = 1; i <= n; i++)
    {
        cout <<endl;
        for (int j = 1; j <= n; j++){
            if (i == 1 || i == n || j == 1 ||j ==n){
                cout <<"*";
            }
            else {
                cout <<" ";
            }
        }
    }
    return 0;
}