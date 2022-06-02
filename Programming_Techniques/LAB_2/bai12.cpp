// Bài 12. Viết hàm đệ qui tìm giá trị nhỏ nhất của một mảng 1 chiều lưu trữ số
//     nguyên.Sau đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int mingt(int A[], int n)
{
    int min;
    if (n == 1)
        min = A[0];
    else
        min = mingt(A, n - 1);
    if (A[n - 1] < min)
        min = A[n - 1];
    return min;
}
int main()
{
    int M[50], a;
    cout << "Nhap vao chieu dai mang: ";
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        M[i] = rand() % 20 + 1;
    }
    cout << "Xuat mang: \n";
    for (int i = 0; i < a; i++)
    {
        cout << setw(5) << M[i];
    }
    cout << endl;
    cout << "Gia tri nho nhat trong mang la: " << mingt(M, a) << endl;
    system("pause");
    return 0;
}