// Bài 3. Định nghĩa kiểu dữ liệu NhanVien gồm các thông tin sau:
// - Mã nhân viên kiểu string
// - Họ tên kiểu string
// - Năm vào làm kiểu int
// - Năm sinh kiểu int
// Viết các hàm:
// - Nhập vào đầy đủ thông tin của 1 nhân viên.
// - Xuất lại thông tin của nhân viên vừa nhập.
// - Tính tuổi và thâm niên làm việc của nhân viên này. Biết rằng:
// tuổi = năm hiện tại – năm sinh
// thâm niên = năm hiện tại – năm vào làm
// - Hàm main kiểm chứng chương trình.
#include <iostream>
#include <string>
using namespace std;
struct NhanVien
{
    string manhanvien;
    string hoten;
    int namvaolam;
    int namsinh;
};
void nhapthongtin(NhanVien &NV)
{
    cout << "Nhap ma nhan vien: ";
    getline(cin, NV.manhanvien);
    cout << "Nhap ho ten: ";
    getline(cin, NV.hoten);
    cout << "Nhap nam sinh: ";
    cin >> NV.namsinh;
    cout << "Nhap nam vao lam: ";
    cin >> NV.namvaolam;
}
void xuatthongtin(NhanVien NV)
{
    cout << "-------------------------------------------------------------\n";
    cout << "Ma nhan vien: " << NV.manhanvien << endl;
    cout << "Ho ten: " << NV.hoten << endl;
    cout << "Nam sinh: " << NV.namsinh << endl;
    cout << "Nam vao lam: " << NV.namvaolam << endl;
}
void tuoivathamnien(NhanVien NV)
{
    cout << "-------------------------------------------------------------\n";
    int kq = 2022 - NV.namsinh;
    cout << "Tuoi: " << kq << endl;
    int da = 2022 - NV.namvaolam;
    cout << "Tham nien: " << da << endl;
}
int main()
{
    NhanVien NV;
    nhapthongtin(NV);
    xuatthongtin(NV);
    tuoivathamnien(NV);
    return 0;
}