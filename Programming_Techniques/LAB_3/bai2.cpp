// Bài 2. Viết chương trình thực hiện các yêu cầu sau:
// a. Khai báo 1 mảng số nguyên tối đa 30 phần tử.
// b. Khởi tạo 1 mảng số nguyên với giá trị ngẫu nhiên (các giá trị nhỏ hơn 10).
// c. Khai báo biến con trỏ p trỏ đến mảng vừa khởi tạo.
// d. Dùng con trỏ và ký pháp độ dời để xuất các giá trị đang lưu trữ trong mảng.
// e. Dùng con trỏ và ký pháp chỉ số để xuất các giá trị đang lưu trữ trong mảng.

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
    int *a, m;
    do
    {
        cout << "Nhap vao kich thuoc cua mang: ";
        cin >> m;
        if (m <= 0 || m > 30)
        {
            cout << "Nhap sai roi! Hay nhap lai.\n";
        }
    } while (m <= 0 || m > 30);
    a = new int[m];
    for (int i = 0; i < m; i++)
    {
        *(a + i) = rand() % 10;
    }
    cout << "Xuat mang ky phap do doi: \n";
    for (int i = 0; i < m; i++)
    {
        cout << setw(5) << *(a + i);
    }
    cout << "\nXuat mang theo ky phap chi so: \n";
    for (int i = 0; i < m; i++)
    {
        cout << setw(5) << a[i];
    }
    delete[] a;
    a = NULL;
    cout << endl;
    system("pause");
    return 0;
}