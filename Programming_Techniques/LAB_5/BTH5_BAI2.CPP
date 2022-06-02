// Bài 2. Định nghĩa kiểu dữ liệu PhanSo gồm tử số và mẫu số (số nguyên). Sau đó viết
// chương trình dùng kiểu mới định nghĩa này để xây dựng các hàm tính tổng, hiệu, tích,
// thương của 2 phân số.
// Lưu ý: phân số chỉ có nghĩa khi mẫu số khác 0
#include <iostream>
using namespace std;
struct PhanSo
{
    int TS;
    int MS;
};
void Nhap(PhanSo &PS)
{
    cin >> PS.TS;
    do
    {
        cin >> PS.MS;
        if (PS.MS == 0)
            cout << "Nhap sai roi! Hay nhap lai\n";
    } while (PS.MS == 0);
}
void Xuat(PhanSo PS)
{
    cout << PS.TS << "/" << PS.MS;
}
int UCLN(int a, int b)
{
    if (b == 0)
        return a;
    if (a % b == 0)
        return b;
    return UCLN(b, a % b);
}
void ToiGian(PhanSo &PS)
{
    int d = UCLN(PS.TS, PS.MS);
    PS.TS = PS.TS / d;
    PS.MS = PS.MS / d;
}
PhanSo CongPS(PhanSo P1, PhanSo P2)
{
    PhanSo S;
    S.TS = (P1.TS * P2.MS + P2.TS * P1.MS);
    S.MS = P1.MS * P2.MS;
    ToiGian(S);
    return S;
}
PhanSo TruPS(PhanSo P1, PhanSo P2)
{
    PhanSo T;
    T.TS = (P1.TS * P2.MS - P2.TS * P1.MS);
    T.MS = P1.MS * P2.MS;
    ToiGian(T);
    return T;
}
PhanSo NhanPS(PhanSo P1, PhanSo P2)
{
    PhanSo P;
    P.TS = P1.TS * P2.TS;
    P.MS = P1.MS * P2.MS;
    ToiGian(P);
    return P;
}
PhanSo ThuongPS(PhanSo P1, PhanSo P2)
{
    PhanSo D;
    D.TS = P1.TS * P2.MS;
    D.MS = P1.MS * P2.TS;
    ToiGian(D);
    return D;
}
int main()
{
    PhanSo a, b, c, d, e, f;
    cout << "Nhap vao phan so thu nhat: \n";
    Nhap(a);
    cout << "Nhap vao phan so thu hai: \n";
    Nhap(b);
    c = CongPS(a, b);
    cout << "Tong hai phan so: ";
    Xuat(a);
    cout << " + ";
    Xuat(b);
    cout << " = ";
    Xuat(c);
    cout << endl;
    d = TruPS(a, b);
    cout << "Hieu hai phan so: ";
    Xuat(a);
    cout << " - ";
    Xuat(b);
    cout << " = ";
    Xuat(d);
    cout << endl;
    e = NhanPS(a, b);
    cout << "Tich hai phan so: ";
    Xuat(a);
    cout << " * ";
    Xuat(b);
    cout << " = ";
    Xuat(e);
    cout << endl;
    f = ThuongPS(a, b);
    cout << "Thuong hai phan so: ";
    Xuat(a);
    cout << " / ";
    Xuat(b);
    cout << " = ";
    Xuat(f);
    cout << endl;
    return 0;
}
