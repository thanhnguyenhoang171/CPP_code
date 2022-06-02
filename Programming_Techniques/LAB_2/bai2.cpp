// Bài 2. Viết hàm đệ qui tính giai thừa của một số nguyên không âm.Sau đó xây dựng
//     chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
#include<iostream>
using namespace std;
int gt(int n)
{
    if (n==0||n==1)
    {
        return 1;
    }
    else
    {
        return (gt(n - 1) * n);
    }
}
int main()
{
    int a;
    cout << "Nhap vao 1 so nguyen: ";
    cin >> a;
    cout << a << "! = " << gt(a) << endl;
    system("pause");
    return 0;
}