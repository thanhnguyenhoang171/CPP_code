// Bài 14. Viết chương trình nhập vào 1 chuỗi ký tự và 1 từ. Sau đó đếm số lần xuất hiện của từ
// trong chuỗi vừa nhập.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Nhap vao mot chuoi: ";
    cin >> s;
    int n = s.length();
    char x;
    int dem = 0;
    cout << "Nhap vao 1 ky tu: ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == x)
        {
            dem++;
        }
    }
    cout << "So lan xuat hien cua ky tu " << x << " trong chuoi " << s << " la: " << dem << endl;
    system("pause");
    return 0;
}