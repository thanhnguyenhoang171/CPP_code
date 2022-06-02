// Bài 1. Xây dựng các hàm đệ qui tính các biểu thức như sau :
//  a.𝑆1 = 1 + 2 + 3 + ⋯ + 𝑛(n là số nguyên dương)
//  b.𝑆2 = 1^2 + 2^2 + 3^2 + ⋯ + 𝑛^2(n là số nguyên dương)
//  c.𝑆3 = 1 + 1 /3 + 1 /5 + ⋯ + 1 /2𝑛-1(n là số nguyên dương và là số lẻ)
//   d.𝑆4 = 1 !+2 !+3 !+ ⋯ + 𝑛 !(n là số nguyên dương)
// Viết chương trình để mô phỏng và kiểm tra các hàm vừa xây dựng ở trên.
#include <iostream>
#include<iomanip>
using namespace std;
int S1(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return S1(n - 1) + n;
    }
}
int S2(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (S2(n - 1) + n * n);
    }
}
double S3(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (S3(n - 1) + 1.0 / (2 * n - 1));
    }
}
int gt(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return gt(n - 1) * n;
    }
}
int S4(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return l(S4(n - 1) + gt(n));
    }
}
int main()
{
    int a;
    cout << "Nhap vao mot so nguyen: ";
    cin >> a;
    cout << "S1 = " << S1(a) << endl;
    cout << "S2 = " << S2(a) << endl;
    cout << "S3 = " << fixed << setprecision(2) <<S3(a) << endl;
    cout << "S4 = " << S4(a) << endl;
    system("pause");
    return 0;
}