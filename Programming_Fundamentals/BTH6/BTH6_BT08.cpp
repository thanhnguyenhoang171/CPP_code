#include<iostream>
using namespace std;
int CVHV(int a)
{
    return (4*a);
}
int DTHV(int a)
{
    return (a*a);
}
void HV(int a)
{
    for (int i = 1; i <= a; i++){
        cout <<endl;
        for (int j =1 ; j <= a; j++){
            if (i == 1 || j == 1 || i == a || j == a){
                cout <<"*";
            }
            else {
                cout <<" ";
            }
        }
    }
}
int main()
{
    int n;
    cout <<"Nhap vao canh hinh vuong: ";
    cin >>n;
    cout <<"Chu vi hinh vuong la: "<<CVHV(n)<<endl;
    cout <<"Dien tich hinh vuong la: "<<DTHV(n)<<endl;
    cout <<"Hinh vuong: \n";
    HV(n);
    cout <<endl;
    system("pause");
    system("cls");
    return 0;
}