// Bài 10.Viết chương trình dùng cấp phát động để khởi tạo ngẫu nhiên giá trị của 2 mảng số
// nguyên theo dạng thức ma trận. Sau đó tính tổng và tích của 2 ma trận đó.
#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <cstdlib>
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
void tong2matran(int **c, int **a, int **b, int ra, int ca)
{
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < ca; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}
void tich2matran(int **d, int **a, int ra, int ca, int **b, int rb, int cb)
{
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            *(*(d + i) + j) = 0;
            for (int k = 0; k < ca; k++)
            {
                *(*(d + i) + j) += *(*(a + i) + k) * (*(*(b + k) + j));
            }
        }
    }
}
int main()
{
    SetConsoleOutputCP(65001);
    int **a, ra, ca, **b, rb, cb, **c, **d;
    cout << "Nhập vào số hàng và số cột của ma trận A:\n";
    cin >> ra >> ca;
    cout << "Nhập vào số hàng và số cột của ma trận B:\n";
    cin >> rb >> cb;
    a = new int *[ra];
    for (int i = 0; i < ra; i++)
        a[i] = new int[ca];
    nhap(a, ra, ca);
    b = new int *[rb];
    for (int i = 0; i < rb; i++)
        b[i] = new int[cb];
    nhap(b, rb, cb);
    cout << "Ma trận A:\n";
    xuat(a, ra, ca);
    cout << "Ma trận B:\n";
    xuat(b, rb, cb);
    c = new int *[ra];
    for (int i = 0; i < ra; i++)
        c[i] = new int[ca];
    d = new int *[ra];
    for (int i = 0; i < ra; i++)
        d[i] = new int[cb];
    if (ra==rb&&ca==cb)
    {
        cout << "Tổng 2 ma trận A và B là:\n";
        tong2matran(c, a, b, ra, ca);
        xuat(c, ra, ca);
    }
    else if (ca==rb)
    {
        cout << "Tích 2 ma trận A và B là:\n";
        tich2matran(d, a, ra, ca, b, rb, cb);
        xuat(d, ra, cb);
    }
    system("pause");
    return 0;
}