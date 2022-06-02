// Bài 4. Xây dựng hàm nhận vào 1 chuỗi ký tự (không khoảng trắng), kiểm tra xem chuỗi đó có
// phải là chuỗi palindrome hay không? Viết chương trình kiểm chứng hàm vừa xây dựng.
// Ví dụ: chuỗi “Anna”, “hih” là chuỗi palindrome.
#include <iostream>
#include <cstring>
using namespace std;
void chuoi(char s[])
{
    cin >> s;
}
void xuat(char s[])
{
    cout << s;
}
bool pali(char s[])
{
    int n = strlen(s);
    bool kq = true;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            kq = false;
            break;
        }
    }
    return kq;
}
int main()
{
    char s[50];
    cout << "Nhap vao mot chuoi ky tu: ";
    chuoi(s);
    cout << "Chuoi vua nhap la: ";
    xuat(s);
    cout << endl;
    cout << "Chuoi\"";
    xuat(s);
    cout << "\" ";
    if (pali(s))
    {
        cout << "la chuoi doi xung\n";
    }
    else
    {
        cout << "la chuoi khong doi xung\n";
    }
    system("pause");
    return 0;
}