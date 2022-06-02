// Bài 15. Viết chương trình nhập vào 2 chuỗi s1 và s2. Yêu cầu người dùng nhập vị trí cần chèn
// (phải hợp lệ) để tiến hành chèn s2 vào s1 bắt đầu từ vị trí đã nhập. Xuất lại chuỗi kết quả sau
// khi chèn.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2;
    cout << "Nhap vao chuoi 1: ";
    getline(cin, s1);
    cout << "Nhap vao chuoi 2: ";
    getline(cin, s2);
    int x;
    do
    {
        cout << "Nhap vi tri can chen chuoi 2 vao chuoi 1: ";
        cin >> x;
        if (x > s1.length())
            cout << "Nhap sai roi! Hay nhap lai\n";
    } while (x > s1.length());
    s1.insert(x, s2);
    cout << s1 << endl;
    system("pause");
    return 0;
}