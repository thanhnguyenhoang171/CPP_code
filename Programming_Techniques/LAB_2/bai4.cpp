// Bài 4. Viết hàm đệ qui tính giá trị của x^n ; với x, n là số nguyên. Sau đó xây dựng
// chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
#include<iostream>
#include<cmath>
using namespace std;
int mu(double x, int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        if (n>0)
            return mu(x, n - 1) * x;
        else
            return mu(x, n + 1) / (x);
    }
}
int main()
{
    int a, b;
    cout << "Nhap vao so x: ";
    cin >> a;
    cout << "Nhap vao so mu n: ";
    cin >> b;
    cout << a << "^" << b << " = " << mu(a, b) << endl;
    system("pause");
    return 0;
}