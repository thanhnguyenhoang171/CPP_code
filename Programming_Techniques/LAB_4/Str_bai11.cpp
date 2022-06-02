// Bài 11. Viết chương trình cho phép nhập vào họ, chữ lót, tên (ở 3 biến chuỗi khác nhau). Sau đó
// trả về kết quả họ tên đầy đủ (nối cả 3 chuỗi lại với nhau).
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ten, chulot, ho, hoten;
    cout << "Nhap ho: ";
    cin >> ho;
    cout << "Nhap ten lot: ";
    cin >> chulot;
    cout << "Nhap ten: ";
    cin >> ten;
    hoten = ho + " " + chulot + " " + ten;
    cout << hoten << endl;
    return 0;
}