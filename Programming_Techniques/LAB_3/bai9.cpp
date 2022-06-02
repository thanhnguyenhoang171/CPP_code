// Bài 9. Viết chương trình dùng cấp phát động của con trỏ để viết hàm nhập, xuất 1 mảng số
// nguyên r hàng và c cột. Sau đó viết hàm dùng con trỏ để tính tổng các phần tử nào là số
// nguyên tố.
#include <iostream>
#include <Windows.h>
#include<iomanip>
#include<cstdlib>
#include<cmath>
using namespace std;
void nhap(int **a, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            *(*(a + i) + j) = rand() % 20;
        }
    }
}
void xuat(int **a, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << setw(4) << *(*(a + i) + j);
        }
        cout << endl;
    }
}
bool KTNT(int n)
{
    int i = 2;
    if (n<2)
        return false;
    else 
    {
        while (i<=double(sqrt(n)))
        {
            if (n%2==0)
                return false;
            i++;
        }
    }
    return true;
}
int tongnt(int **a, int r, int c) 
{
    int kq = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(KTNT(*(*(a+i)+j)))
                kq += *(*(a + i) + j);
        }
    }
    return kq;
}
int main()
{
    SetConsoleOutputCP(65001);
    int **a, r, c;
    cout << "Nhập vào số hàng của ma trận: ";
    cin >> r;
    cout << "Nhập vào số cột của ma trận: ";
    cin >> c;
    a = new int *[r];
    for (int i = 0; i < r; i++)
        a[i] = new int[c];
    nhap(a, r, c);
    cout << "Mảng A la:\n";
    xuat(a, r, c);
    cout << "Tổng các giá trị phần tử là số nguyên tố trong mảng là: " << tongnt(a, r, c) << endl;
    for (int i = 0; i < r; i++)
        delete[] a[i];
    delete[] a;
    a = NULL;
    system("pause");
    return 0;
}