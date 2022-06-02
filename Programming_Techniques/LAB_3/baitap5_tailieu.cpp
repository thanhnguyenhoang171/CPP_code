// 5. Viết chương trình dùng cấp phát động để xây dựng hàm
// nhập, xuất 1 mảng số nguyên gồm m hàng và n cột, hàm trả về
// vị trí lưu trữ của giá trị đầu tiên trong mảng là số nguyên tố. Viết
// chương trình kiểm tra các hàm trên.

#include<iostream>
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
            *(*(a + i) + j) = rand() % 20 + 1;
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
    if (n<2)
        return false;
    else
        for (int i = 0; i < double(sqrt(n)); i++)
        {
            if (n%i==0)
                return false;
        }
    return true;
}
int *timNT(int **a, int r, int c)
{
    int *kq = NULL;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (KTNT(a[i][j]))
            {
                kq = &a[i][j];
                break;
            }
        }
    }
    return kq;
}
int main()
{
    int **a, r, c;
    cout << "Nhap vao so hang va so cot cua mang:\n";
    cin >> r >> c;
    a = new int *[r];
    for (int i = 0; i < r; i++)
    {
        a[i] = new int[c];
    }
    nhap(a, r, c);
    cout << "Xuat mang:\n";
    xuat(a, r, c);
    if (timNT(a,r,c) == NULL)
        cout << "So nguyen to " << *timNT(a, r, c) << " tai dia chi: " << timNT(a, r, c) << endl;
    else
        cout << "Khong tim thay\n";
    for (int i = 0; i < r; i++)
    {
        delete[] a[i];
    }
    delete []a;
    a = NULL;
    system("pause");
    return 0;
}