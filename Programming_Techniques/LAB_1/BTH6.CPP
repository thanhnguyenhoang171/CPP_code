// Bài 6. Viết chương trình cho nhập vào 2 ma trận(chứa các số nguyên).
//         Sau đó tính kết quả tổng và tích hai ma trận đó.
#include <iostream>
#include <cstdlib>
using namespace std;
const int N = 20;
int main()
{
    int A[N][N], B[N][N], C[N][N], D[N][N]={0}, r1, c1, r2, c2;
    cout << "Nhap vao so hang cua ma tran A: ";
    cin >> r1;
    cout << "Nhap vao so cot cua ma tran A: ";
    cin >> c1;
    cout << "Nhap vao so hang cua ma tran B: ";
    cin >> r2;
    cout << "Nhap vao so cot cua ma tran B: ";
    cin >> c2;
    if (r1 == r2 && c1 == c2)
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                A[i][j] = rand() % 20 + 1;
            }
        }
        cout << "Ma tran A: \n";
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << A[i][j] << "  ";
            }
            cout << endl;
        }
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                B[i][j] = rand() % 20 + 1;
            }
        }
        cout << "Ma tran B: \n";
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << B[i][j] << "  ";
            }
            cout << endl;
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
        }
        cout << "Tong 2 ma tran A va B la: \n";
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << C[i][j] << "  ";
            }
            cout << endl;
        }
    }
    else if (c1 == r2)
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                A[i][j] = rand() % 20 + 1;
            }
        }
        cout << "Ma tran A: \n";
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << A[i][j] << "  ";
            }
            cout << endl;
        }
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                B[i][j] = rand() % 20 + 1;
            }
        }
        cout << "Ma tran B: \n";
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << B[i][j] << "  ";
            }
            cout << endl;
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                for (int k = 0; k < c1; k++)
                {
                    D[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        cout << "Phep nhan 2 ma tran A va B la:\n";
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << D[i][j] << "  ";
            }
            cout << endl;
        }
        cout << "Hai ma tran khong co phep tinh cong.\n";
    }
    system("pause");
    return 0;
}