// Bài 10. Viết chương trình gán các giá trị số nguyên từ 1 đến n^2 cho các phần tử của ma
//     trận vuông có kích thước n x n(2 <= n <= 10) được nhập từ bàn phím theo dạng xoắn
//     ốc.Ví dụ n = 4 :
//      1  2  3 4 
//     12 13 14 5
//     11 16 15 6
//     10  9  8 7
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, A[10][10], r, c, val = 1, minr, maxr, minc, maxc;
    do {
        cout << "Nhap vao so dong va so cot: ";
        cin >> r >> c;
        if (r<2||r>10||c<2||c>10)
            cout << "Nhap sai roi hay nhap lai di dbrr.\n";
    } while (r < 2 || r > 10 || c < 2 || c > 10);
    minr = 0;
    maxr = r - 1;
    minc = 0;
    maxc = c - 1;
    while (val <= r * c)
    {
        // qua phai
        for (int j = minc; j <= maxc; j++)
        {
            A[minr][j] = val++;
        }
        minr++;
        // xuong duoi
        for (int i = minr; i <= maxr; i++)
        {
            A[i][maxc] = val++;
        }
        maxc--;
        // qua trai
        for (int j = maxc; j >= minc; j--)
        {
            A[maxr][j] = val++;
        }
        maxr--;
        // di len
        for (int i = maxr; i >= minr; i--)
        {
            A[i][minc] = val++;
        }
        minc++;
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << setw(5) << A[i][j];
        }
        cout << endl;
    }
    system("pause");
    return 0;
}