#include<iostream>
using namespace std;

int main()
{
    int n, min = INT16_MAX, max= INT16_MIN, tong = 0;
    cout<<"Nhap vao cac so nguyen: \n";
    while (cin >> n){
        if (n > max)
            max = n;
        if (n < min)
            min = n;
        tong +=n;
    }
    cout<<"So lon nhat la: "<<max<<endl;
    cout<<"So nho nhat la: "<<min<<endl;
    cout<<"Tong cua cac so vua nhap la: "<<tong<<endl;
    system("pause");
    return 0;
}