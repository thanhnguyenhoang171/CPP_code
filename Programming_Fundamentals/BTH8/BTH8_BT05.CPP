#include<iostream>
#include<string>
using namespace std;
int main()
{
    int arr[100],n,xoa;
    cout <<"Nhap chieu dai mang: ";
    cin >>n;
    cout <<"Nhap vao mang: \n";
    for (int i = 1; i<= n ; i++)
    {
        cin >>arr[i];
    }
    cout <<"Mang truoc khi xoa la: ";
    for (int i = 1; i<= n; i++)
    {
        cout <<arr[i];
    }
    cout <<endl;
    cout <<"Nhap vao vi tri muon xoa: ";
    cin >>xoa;
    cout <<"Mang sau khi xoa tai vi tri "<<xoa<<" la: ";
    for (int i = 1; i <= n; i++){
        if (i == xoa)
            continue;
        cout <<arr[i];
    }
    cout <<endl;
    system("pause");
    return 0;
}