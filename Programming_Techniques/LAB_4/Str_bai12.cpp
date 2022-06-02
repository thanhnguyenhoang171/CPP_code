// Bài 12. Xây dựng hàm nhận vào 1 chuỗi, trả về kết quả đảo ngược của chuỗi đó. Viết chương
// trình kiểm chứng hàm vừa xây dựng.
#include <iostream>
#include <cstring>
using namespace std;
void daonguoc(string s)
{
    int n = s.length() - 1;
    for (int i = n; i >= 0; i--)
    {
        cout << s[i];
    }
    cout << endl;
}
int main()
{
    string s;
    cout << "Nhap vao chuoi: ";
    getline(cin, s);
    cout << "Chuoi: " << s << endl;
    daonguoc(s);
    system("pause");
    return 0;
}