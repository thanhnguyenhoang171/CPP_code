#include <iostream>
#include <string>
using namespace std;
struct SinhVien
{
    string ms;
    string hoten;
    string diachi;
    int namsinh;
    double toan;
    double van;
    double anh;
};
void nhap(SinhVien &sv)
{
    cout << "Nhap ma sinh vien: ";
    cin.ignore();
    getline(cin, sv.ms);
    cout << "Nhap ho ten: ";
    getline(cin, sv.hoten);
    cout << "Nhap dia chi: ";
    getline(cin, sv.diachi);
    cout << "Nhap nam sinh: ";
    cin >> sv.namsinh;
    cout << "Nhap diem toan: ";
    cin >> sv.toan;
    cout << "Nhap diem van: ";
    cin >> sv.van;
    cout << "Nhap diem ngoai ngu: ";
    cin >> sv.anh;
}
double dtb(SinhVien sv)
{
    double kq;
    kq = ((sv.toan + sv.van) * 2 + sv.anh) / 5;
    return kq;
}
void xeploai(SinhVien sv)
{
    if (dtb(sv) >= 8)
        cout << "Xep loai: Gioi\n";
    else if (dtb(sv) < 8 && dtb(sv) >= 6.5)
        cout << "Xep loai: Kha\n";
    else if (dtb(sv)<6.5&&dtb(sv) >=5)
        cout << "Xep loai: TB\n";
    else if (dtb(sv)<5)
        cout << "Xep loai: Duoi TB\n";
}
void xuat(const SinhVien sv)
{
    cout << "\n------------------------------------------------------\n";
    cout << "Ma sinh vien: " << sv.ms << endl;
    cout << "Ho ten: " << sv.hoten << endl;
    cout << "Dia chi: " << sv.diachi << endl;
    cout << "Nam sinh: " << sv.namsinh << endl;
    cout << "Diem toan: " << sv.toan << endl;
    cout << "Diem van: " << sv.van << endl;
    cout << "Diem ngoai ngu: " << sv.anh << endl;
    cout << "Diem trung binh mon:" << dtb(sv) << endl;
    xeploai(sv);
    cout << "------------------------------------------------------\n";
}
int main()
{
    SinhVien sv[45];
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Nhap sinh vien thu " << i << endl;
        nhap(sv[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        xuat(sv[i]);
    }
    int x;
    cout << "Nhap so thu tu sinh vien can tim: ";
    cin >> x;
    cout << "\n=====================================================\n";
    for (int i = 1; i <= n; i++)
    {
        if (x == i)
            xuat(sv[i]);
    }
    cout << "\n=====================================================\n";
    return 0;
}