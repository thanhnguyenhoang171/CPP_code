#include<iostream>
using namespace std;
void phtnn(int arr[], int n)
{
    int min = arr[0];
    cout <<"Nhap vao mang: \n";
    for (int i = 0; i < n; i++)
    {
        cin >>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            cout <<"Vi tri cau phan tu nho nhat: "<<i;
            break;
        }
    }
}
int main()
{
    int a[100], b;
    cout <<"Nhap vao chieu dai mang: ";
    cin >>b;
    phtnn(a, b);
    return 0;
}