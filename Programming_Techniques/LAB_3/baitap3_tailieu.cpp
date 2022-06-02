// 3. Viết chương trình dùng cấp phát động để nhập, xuất 1 mảng số
// nguyên gồm m hàng và n cột. Đếm xem mảng đang lưu trữ có bao
// nhiêu số là số nguyên tố?

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;
bool KTNT(int n)
{
    if (n < 2)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= double(sqrt(n)); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int **a, m, n, demNT = 0;
    cout << "Nhap vao so hang va so dong cua mang:\n";
    cin >> m >> n;
    a = new int *[m];
    for (int i = 0; i < m; i++)
    {
        a[i] = new int[n];
    }
    cout << "Xuat mang:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(a + i) + j) = rand() % 20;
            cout << setw(4) << *(*(a + i) + j);
            if (KTNT(*(*(a + i) + j)))
            {
                demNT++;
            }
        }
        cout << endl;
    }
    cout << "So so nguyen to trong mang : " << demNT << endl;
    for (int i = 0; i < m; i++)
    {
        delete[] a[i];
    }
    delete[] a;
    a = 0;
    system("pause");
    return 0;
}