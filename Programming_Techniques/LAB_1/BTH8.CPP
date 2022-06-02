// Bài 8. Xây dựng các hàm:
//     - Khởi tạo ngẫu nhiên giá trị cho 1 mảng số nguyên gồm r hàng và c cột (ma trận
//       vuông cấp n);
//     - Xuất giá trị lưu trữ trong 1 mảng số nguyên gồm r hàng và c cột.
//     - Viết hàm tính tổng, tích 2 ma trận vuông cấp n.
//     - Viết hàm main để kiểm tra các hàm đã xây dựng.
#include<iostream>
#include<cstdlib>
#include<iomanip>
const int N = 20;
using namespace std;
void tao(int A[][N], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = rand() % 20 + 1;
        }
    }
}
void xuat(int A[][N], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout <<setw(4)<<A[i][j];
        }
        cout << endl;
    }
}
void tong(int A[][N],int B[][N], int C[][N], int n)
{
    B[N][N] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
void tich(int A[][N], int B[][N], int D[][N], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            D[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                D[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
int main()
{
    int A[N][N], B[N][N], C[N][N], D[N][N], n, n1, n2;
    cout << "Nhap vao cap cua ma tran vuong A: ";
    cin >> n;
    tao(A, n);
    xuat(A, n);
    cout << "Nhap vao cap ma tran vuong cua ma tran 1: ";
    cin >> n1;
    tao(A, n1);
    cout << "Nhap vao cap ma tran vuong cua ma tran 2: ";
    cin >> n2;
    tao(B, n2);
    cout << "Ma tran 1: \n";
    xuat(A, n1);
    cout << "Ma tran 2: \n";
    xuat(B, n2);
    if (n1==n2)
    {
        cout << "Tong 2 ma tran la: \n";
        tong(A, B, C, n1);
        xuat(C, n1);
        cout << "Tich 2 ma tran la: \n";
        tich(A, B, D, n1);
        xuat(D, n1);
    }
    else 
    {
        cout << "2 ma tran tren khong cung cap.\n";
    }
    system("pause");
    return 0;
}

