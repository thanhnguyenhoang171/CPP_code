// Bài 7. Viết hàm đệ qui tính tổng các chữ số chẵn/lẻ của một số nguyên không âm. Sau
// đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng
#include <iostream>
using namespace std;
int tongc(int n)
{
    int k = (n % 10) % 2;
    if (n < 10)
    {
        if (n % 2 == 0)
            return n;
        else
            return 0;
    }
    else
    {
        if (k == 0)
        {
            return tongc(n / 10) + n % 10;
        }
        else
        {
            return tongc(n / 10);
        }
    }
}
int tongl(int n)
{
    if (n < 10)
    {
        if (n % 2 == 0)
            return 0;
        else
            return n;
    }
    else
    {
        int r = (n % 10) % 2;
        if (r!=0)
        {
            return tongl(n / 10) + n % 10;
        }
        else
        {
            return tongl(n/10);
        }
    }
}
int main()
{
    int a;
    cout << "Nhap vao 1 so nguyen: ";
    cin >> a;
    cout << "Tong cac chu so chan cua so " << a << " la: " << tongc(a) << endl;
    cout << "Tong cac chu so le cua so " << a << " la: " << tongl(a) << endl;
    system("pause");
    return 0;
}