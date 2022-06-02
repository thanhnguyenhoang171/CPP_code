#include <iostream>
using namespace std;
class PhanSo
{
private:
    int ts, ms;

public:
    int getts();
    int getms();
    void setts(int a);
    void setms(int b);
    void Xuat(PhanSo PS);
    PhanSo Tong(PhanSo PS1, PhanSo PS2);
    PhanSo Hieu(PhanSo PS1, PhanSo PS2);
    PhanSo Tich(PhanSo PS1, PhanSo PS2);
    PhanSo Chia(PhanSo PS1, PhanSo PS2);
    int UCLN(int a, int b);
    PhanSo ToiGian(PhanSo PS);
};
int PhanSo::getts()
{
    return ts;
};
int PhanSo::getms()
{
    return ms;
};
void PhanSo::setts(int a)
{
    ts = a;
}
void PhanSo::setms(int b)
{
    ms = b;
}
void PhanSo::Xuat(PhanSo PS)
{
    cout << PS.ts << "/" << PS.ms;
};
int PhanSo::UCLN(int a, int b)
{
    while (a != b)
    {
        if (b > a)
            b = b - a;
        else
            a = a - b;
    }
    return a;
};
PhanSo PhanSo::ToiGian(PhanSo PS)
{
    PhanSo kq;
    kq.setts(PS.ts / UCLN(PS.ts, PS.ms));
    kq.setms(PS.ms / UCLN(PS.ts, PS.ms));
    return kq;
};
PhanSo PhanSo::Tong(PhanSo PS1, PhanSo PS2)
{
    PhanSo kq;
    kq.setts(PS1.ts * PS2.ms + PS2.ts * PS1.ms);
    kq.setms(PS1.ms * PS2.ms);
    kq = ToiGian(kq);
    return kq;
};
PhanSo PhanSo::Hieu(PhanSo PS1, PhanSo PS2)
{
    PhanSo kq;
    kq.setts(PS1.ts * PS2.ms - PS2.ts * PS1.ms);
    kq.setms(PS1.ms * PS2.ms);
    kq = ToiGian(kq);
    return kq;
};
PhanSo PhanSo::Tich(PhanSo PS1, PhanSo PS2)
{
    PhanSo kq;
    kq.setts(PS1.ts * PS2.ts);
    kq.setms(PS1.ms * PS2.ms);
    kq = ToiGian(kq);
    return kq;
};
PhanSo PhanSo::Chia(PhanSo PS1, PhanSo PS2)
{
    PhanSo kq;
    kq.setts(PS1.ts * PS2.ms);
    kq.setms(PS1.ms * PS2.ts);
    kq = ToiGian(kq);
    return kq;
};
int main()
{
    PhanSo PS1, PS2, kqTong, kqHieu, kqTich, kqChia;
    int ts1, ms1, ts2, ms2;
    cout << "Nhap tu so va mau so cua phan so 1: \n";
    cin >> ts1 >> ms1;
    cout << "Nhap tu so va mau so cua phan so 2: \n";
    cin >> ts2 >> ms2;
    PS1.setts(ts1);
    PS1.setms(ms1);
    PS2.setts(ts2);
    PS2.setms(ms2);
    kqTong = kqTong.Tong(PS1, PS2);
    kqHieu = kqHieu.Hieu(PS1, PS2);
    kqTich = kqTich.Tich(PS1, PS2);
    kqChia = kqChia.Chia(PS1, PS2);
    cout << "Tong 2 phan so: ";
    PS1.Xuat(PS1);
    cout << "+";
    PS2.Xuat(PS2);
    cout << " = " << kqTong.getts() << "/" << kqTong.getms();
    cout << "\nHieu 2 phan so: ";
    PS1.Xuat(PS1);
    cout << "-";
    PS2.Xuat(PS2);
    cout << " = " << kqHieu.getts() << "/" << kqHieu.getms();
    cout << "\nTich 2 phan so: ";
    PS1.Xuat(PS1);
    cout << "*";
    PS2.Xuat(PS2);
    cout << " = " << kqTich.getts() << "/" << kqTich.getms();
    cout << "\nThuong 2 phan so: ";
    PS1.Xuat(PS1);
    cout << "/";
    PS2.Xuat(PS2);
    cout << " = " << kqChia.getts() << "/" << kqChia.getms();
    cout << endl;
    system("pause");
    return 0;
}