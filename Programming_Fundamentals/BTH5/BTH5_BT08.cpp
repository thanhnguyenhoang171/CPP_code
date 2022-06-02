#include<iostream>
using namespace std;

int main()
{
    int n, Sl = 0;
    do 
    {
        cout <<"Nhap vao mot so nguyen: ";
        cin >>n;
        if (n <= 0){
            cout <<"Nhap sai roi! Nhap lai\n";
        }
    } while (n <= 0);
    for (int i = 1; i <= n; i++){
        if (i % 2 != 0){
            Sl = Sl + i;
        }
    }
    cout <<"Tong cac so le tu 1 den "<<n<<" la: "<<Sl<<endl;
    system("pause");
    system("cls");
    return 0;
}