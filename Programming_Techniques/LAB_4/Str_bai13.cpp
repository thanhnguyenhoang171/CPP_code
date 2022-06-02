// Bài 13. Viết chương trình nhập vào 1 chuỗi, sau đó xóa hết toàn bộ các nguyên âm trong chuỗi
// này. Xuất lại chuỗi kết quả
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Nhap vao chuoi: ";
    getline(cin, s);
    cout << "Chuoi: " << s << endl;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i]=='a'||s[i]=='i'||s[i]=='u'||s[i]=='e'||s[i]=='o'||s[i]=='y')
        {
            s[i] = '\0';
        }
    }
    cout << s << endl;
    system("pause");
    return 0;
}