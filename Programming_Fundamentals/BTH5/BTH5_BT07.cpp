#include<iostream>
using namespace std;

int main()
{
    int h;
    do {
        cout <<"Nhap vao chieu cao h: ";
        cin >>h;
        if (h <= 0){
            cout <<"Nhap sai roi! Nhap lai chieu cao\n";
        }
    }
    while (h <= 0);
    for (int i = 1; i <= h; i++){
        cout <<"\n";
        for (int j = 1; j <= h; j++){
            if (j <= i){
                cout <<"*";
            }
        }
    }
    cout <<endl;
    system("pause");
    system("cls");
    return 0;
}