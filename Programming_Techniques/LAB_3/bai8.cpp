// Bài 8. Viết chương trình dùng cấp phát động, cho phép:
// - Khai báo mảng 2 chiều là một ma trận vuông cấp h (h >0)
// - Lưu trữ giá trị của một tam giác Pascal với chiều cao h.
// - Xuất lại tam giác Pascal ra màn hình.
// Gợi ý: tam giác Pascal xem lại ở BTTH Lab1.
#include <iostream>
#include <iomanip>
using namespace std;
void tgp(int **a, int h)
{
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                *(*(a + i) + j) = 1;
            else
                *(*(a + i) + j) = *(*(a + i - 1) + j - 1) + *(*(a + i - 1) + j);
            cout << setw(4) << *(*(a + i) + j);
        }
        cout << endl;
    }
}
int main()
{
    int **a, h;
    cout << "Nhap vao chieu cao cua tam giac Pascal: ";
    cin >> h;
    a = new int *[h];
    for (int i = 0; i < h; i++)
        a[i] = new int[h];
    tgp(a, h);
    for (int i = 0; i < h; i++)
        delete[] a[i];
    delete[] a;
    a = NULL;
    system("pause");
    return 0;
}