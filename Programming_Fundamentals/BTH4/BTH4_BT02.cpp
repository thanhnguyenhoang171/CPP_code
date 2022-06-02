#include<iostream>
using namespace std;
int main()
{
    int n;
    int i=1, s=1;
    cout <<"Nhap vao so nguyen duong n lon hon 1: ";
    cin >>n;
    if(n <= 1){
    while (n <= 1){
        cout <<"Nhap sai, nhap lai n: ";
    cin >>n;
    }
    }
    while (i <= n){
            s = s * i;
            i = i + 2;
        }
    cout <<"Tich cac so le tu 1 den "<<n<<" la "<<s<<endl;
    system("pause");
    system("cls");
    return 0;
}