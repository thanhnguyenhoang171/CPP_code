// Bài 11. Viết hàm đệ qui tính tổng các giá trị của một mảng 1 chiều lưu trữ số
//     nguyên.Sau đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
#include<iostream>
using namespace std;
const int N = 20;
int tong(int A[], int n)
{
    if (n==1)
        return A[0];
    else
        return tong(A, n - 1) + A[n - 1];
}
int main()
{
    int a, M[N];
    cout << "Nhap vao chieu dai mang: ";
    cin >> a;
    cout << "Nhap vao mang: \n";
    for (int i = 0; i < a; i++)
    {
        cin >> M[i];
    }
    cout << "Tong cac gia tri cac phan tu cua mang la: " << tong(M, a) << endl;
    system("pause");
    return 0;
}