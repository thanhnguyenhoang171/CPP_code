// Bài 9. Cài đặt bài 8 dưới dạng hàm lấy họ, hàm lấy chữ lót, hàm lấy tên. Viết chương trình kiểm
// chứng hàm vừa xây dựng.
#include <iostream>
#include <cstring>
using namespace std;
void Ho(char *s, int n)
{
    char kq[50];
    int p = 0;
    while (!isspace(s[p]))
    {
        p++;
    }
    strncpy(kq, s, p);
    kq[p] = '\0';
    cout << kq << endl;
}
void Tenlot(char *s, int n)
{
    char kq[50];
    int p = 0;
    while (!isspace(s[p]))
    {
        p++;
    }
    int i = n - 1;
    int dem = 0;
    while (!isspace(s[i]))
    {
        i--;
        dem++;
    }
    strncpy(kq, s + p + 1, n - (p + 1) - (dem + 1));
    kq[n - (p + 1) - (dem + 1)] = '\0';
    cout << kq;
    cout << endl;
}
void Ten(char *s, int n)
{
    char kq[50];
    int i = n - 1;
    int dem = 0;
    while (!isspace(s[i]))
    {
        i--;
        dem++;
    }
    strncpy(kq, s + i + 1, dem);
    kq[dem] = '\0';
    cout << kq << endl;
}
int main()
{
    char s[50];
    char kq[50];
    int n;
    cout << "Nhap vao chuoi ho ten: ";
    cin.getline(s, 50);
    n = strlen(s);
    cout << "Ho: ";
    Ho(s, n);
    cout << "Ten lot: ";
    Tenlot(s, n);
    cout << "Ten: ";
    Ten(s, n);
    return 0;
}