// Bài 1. Định nghĩa kiểu dữ liệu PhongBan gồm các thông tin: mã phòng ban kiểu string,
// tên phòng ban kiểu string. Sau đó viết chương trình cho phép nhập và xuất thông tin
// của 1 phòng ban cụ thể.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    struct PhongBan
    {
        string maphongban;
        string tenphongban;
    };
    PhongBan pb;
    cout << "Nhap vao ma phong ban: ";
    getline(cin, pb.maphongban);
    cout << "Nhap vao ten phong ban: ";
    getline(cin, pb.tenphongban);
    cout << "Thong tin cua phong ban la: \n";
    cout << "Ma phong ban: " << pb.maphongban << endl;
    cout << "Ten phong ban: " << pb.tenphongban << endl;
    system("pause");
    return 0;
}