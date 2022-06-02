// Bài 5. Dùng con trỏ viết hàm xuất n giá trị của dãy số Fibonacci (n do người dùng nhập, là số
// nguyên > 1). Sau đó viết chương trình kiểm chứng lại hàm vừa xây dựng.
#include <iostream>
using namespace std;
void Fibo(int n)
{
    int *p;
    p = new int[n];
    *p = 0;
    *(p + 1) = 1;
    cout << *p << "  " << *(p + 1);
    for (int i = 2; i < n; i++)
    {
        *(p + i) = *(p + i - 2) + *(p + i - 1);
        cout << "  " << *(p + i);
    }
    delete[] p;
    p = NULL;
}
int main()
{
    int n;
    cout << "Nhap vao mot so nguyen: ";
    cin >> n;
    cout << "Day Fibonacci tu 0 "
         << " den " << n << " la:\n";
    Fibo(n);
    cout << endl;
    system("pause");
    return 0;
}