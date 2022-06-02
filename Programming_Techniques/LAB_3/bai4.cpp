// Bài 4. Viết chương trình dùng cấp phát động, cho phép:
// - Nhập vào 1 mảng 1 chiều lưu trữ số nguyên tối đa 30 phần tử.
// - Dùng con trỏ và ký pháp độ dời để xuất ra các phần tử nào là số lẻ trong mảng.
// - Trả về địa chỉ của giá trị phần tử lớn nhất trong mảng (giả sử các giá trị trong mảng không
// trùng nhau).
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int *A, n, *vt;
    do
    {
        cout << "Nhap vao kich thuoc mang A: ";
        cin >> n;
        if (n < 1 || n > 30)
            cout << "Nhap sai roi! Hay nhap lai\n";
    } while (n < 1 || n > 30);
    A = new int[n];
    cout << "Mang A:\n";
    for (int i = 0; i < n; i++)
    {
        *(A + i) = rand() % 20;
        cout << "  " << *(A + i);
    }
    cout << "\n Xuat mang le trong A: \n";
    for (int i = 0; i < n; i++)
    {
        if (*(A + i) % 2 != 0)
        {
            cout << "  " << *(A + i);
        }
    }
    cout << endl;
    vt = A;
    for (int i = 0; i < n; i++)
    {
        if (*vt < *(A + i))
            vt = A + i;
    }
    delete[] A;
    A = NULL;
    cout << "Dia chi cua phan tu lon nhat co gia tri " << *vt << " tai vi tri: " << &vt << endl;
    system("pause");
    return 0;
}