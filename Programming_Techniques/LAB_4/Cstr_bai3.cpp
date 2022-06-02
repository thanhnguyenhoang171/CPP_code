// Bài 3. Viết chương trình xây dựng các hàm:
// a. Hàm nhận vào 1 chuỗi ký tự. Trả về kết quả là chuỗi đó sau khi loại bỏ hết khoảng trắng
// đầu và cuối chuỗi.
// b. Hàm đếm số khoảng trắng của 1 chuỗi.
// c. Hàm đếm xem 1 chuỗi có bao nhiêu ký tự chữ số hoặc chữ cái.
// d. Hàm đếm xem 1 chuỗi có bao nhiêu ký tự in hoa.
// e. Hàm đếm xem 1 chuỗi có bao nhiêu ký tự in thường.
// f. Hàm chuyển toàn bộ chuỗi sang in hoa.
// g. Hàm chuyển toàn bộ chuỗi sang in thường.
// h. Hàm chuyển chuỗi sang dạng in hoa ký tự đầu tiên mỗi từ.
// i. Hàm đếm xem 1 chuỗi có bao nhiêu từ.
// j. Hàm main kiểm chứng các hàm trên.

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

char *xoaspace(char *s, int &n)
{
    int i = 0;
    while (isspace(s[i]))
    {
        i++;
    }
    n = n - i;
    strncpy(s, s + i, n);
    s[n] = '\0';
    i = 0;
    while (isspace(*(s + n - 1 - i)))
    {
        i++;
    }
    n = n - i;
    strncpy(s, s, n);
    s[n] = '\0';
    return s;
}

int demspace(char *s, int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (isspace(s[i]))
            dem++;
    return dem;
}
int demsochu(char *s, int n)
{
    int kq = 0;
    for (int i = 0; i < n; i++)
    {
        if (isalnum(s[i]))
            kq++;
    }
    return kq;
}
int demupper(char *s, int n)
{
    int kq = 0;
    for (int i = 0; i < n; i++)
    {
        if (isupper(*(s + i)))
            kq++;
    }
    return kq;
}
int demlower(char *s, int n)
{
    int kq = 0;
    for (int i = 0; i < n; i++)
    {
        if (islower(*(s + i)))
            kq++;
    }
    return kq;
}
char *hoa(char *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (islower(*(s + i)))
            *(s + i) -= 32;
    }
    return s;
}
char *thuong(char *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (isupper(*(s + i)))
            *(s + i) += 32;
    }
    return s;
}
char *dauupper(char *s, int n)
{
    if (islower(*(s + 0)))
        *(s + 0) -= 32;
    for (int i = 0; i < n - 1; i++)
    {
        if (isspace(s[i]) && islower(s[i + 1]))
            s[i + 1] -= 32;
    }
    return s;
}
int demword(char *s, int n)
{
    int kq = 1;
    for (int i = 0; i < n; i++)
    {
        if (isspace(s[i]))
            kq++;
    }
    return kq;
}
int main()
{
    char s[100];
    cout << "Nhap chuoi: ";
    cin.getline(s, 100);
    int n = strlen(s);
    cout << "Chuoi S: " << s << endl;
    cout << "So khoang cach co trong chuoi S la: " << demspace(s, n) << endl;
    cout << "Chuoi sau khi xoa khoang cach dau cuoi la: " << xoaspace(s, n) << endl;
    cout << "So khoang cach co trong chuoi S sau khi xoa la: " << demspace(s, n) << endl;
    cout << "Trong chuoi co " << demsochu(s, n) << " ky tu la chu va so\n";
    cout << "Trong chuoi co " << demupper(s, n) << " ky tu la chu in hoa\n";
    cout << "Trong chuoi co " << demlower(s, n) << " ky tu la chu in thuong\n";
    cout << hoa(s, n) << endl;
    cout << thuong(s, n) << endl;
    cout << dauupper(s, n) << endl;
    cout << "Trong chuoi co " << demword(s, n) << " tu" << endl;
    system("pause");
    return 0;
}