#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;
int main()
{
    SetConsoleOutputCP(65001);
    int arr[100],n;
    cout <<"Nhập vào chiều dài mảng: ";
    cin >>n;
    cout <<"Nhập vào các phần tử mảng: ";
    for(int i = 0; i <= n - 1; i++){
        cin >>arr[i];
    }
    int tong=0;
    double tb=0;
    for(int i = 0; i <= n - 1; i++){
        tong +=arr[i];
        tb = double(tong)/n;
    }
    cout <<"Tổng các phần tử của mảng là: "<<tong<<endl;
    cout <<"Trung bình của các phần tử trong mảng là: "<<fixed<<setprecision(2)<<double(tb)<<endl;
    system("pause");
    return 0;
}