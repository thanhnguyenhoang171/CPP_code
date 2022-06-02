// Bài 9. Viết chương trình gán các giá trị số nguyên từ 1 đến n2 cho các phần tử của ma trận
//     vuông có kích thước n x n(2 <= n <= 10) được nhập từ bàn phím theo dạng zigzag cột.Ví
//     dụ n = 4 :
//                             1 8 9 16 
//                             2 7 10 15 
//                             3 6 11 14 
//                             4 5 12 13
#include<iostream>
#include<iomanip>
const int N = 10;
using namespace std;
int main()
{
    int n, gt=1, A[N][N], j=0;
    do 
    {
        cout << "Nhap vao n: ";
        cin >> n;
        if (n<2||n>10)
            cout << "Nhap sai roi! Hay nhap lai.\n";
    } while (n < 2 || n > 10);
    while (gt<=n*n)
    {
        // xuong
        for (int i = 0; i < n; i++)
        {
            A[i][j] = gt++;
        }
        // len
        j++;
        for (int i = n - 1; i >= 0; i--)
        {
            A[i][j] = gt++;
        }
        j++;
    }
    cout << "Xuat mang: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(3) << A[i][j];
        }
        cout << endl;
    }
    system("pause");
    return 0;
}