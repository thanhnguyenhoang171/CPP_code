// Bài 3. Viết hàm đệ qui tính giá trị Fibonacci của một số nguyên không âm.Sau đó xây
//     dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng
#include <iostream>
using namespace std;
int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fib(n - 2) + fib(n - 1);
}
int main()
{
    int a;
    cout << "Nhap vao 1 so nguyen: ";
    cin >> a;
    cout << "So Fib thu " << a << " la: " << fib(a) << endl;
    cout << "Day so Fib: \n";
    for (int i = 0; i <= a; i++)
    {
            cout << fib(i) << "  ";
    }
    cout << endl;
}