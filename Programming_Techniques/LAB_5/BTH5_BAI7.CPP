#include <iostream>
#include <cstring>
#include <string>
using namespace std;
struct SanPham
{
    char masp[10];
    string tensp;
    double dongia;
    int slkho;
};
void nhap(SanPham *&sp, int n)
{
    cout << "Nhap thong tin san pham\n";
    for (int i = 0; i < n; i++)
    {
        cout << "San pham thu " << i + 1 << endl;
        cout << "Nhap vao ma san pham: ";
        cin.ignore();
        cin.getline((*(sp + i)).masp, 10);
        cout << "Nhap vao ten san pham: ";
        getline(cin, (*(sp + i)).tensp);
        cout << "Nhap vao don gia: ";
        cin >> (*(sp + i)).dongia;
        cout << "Nhap vao so luong ton kho: ";
        cin >> (*(sp + i)).slkho;
    }
}
void xuat(SanPham *sp, int n)
{
    cout << "---------------------------------------------\n";
    cout << "Thong tin san pham";
    cout << "\n---------------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "San pham " << i + 1 << endl;
        cout << "Ma san pham: " << (*(sp + i)).masp << endl;
        cout << "Ten san pham: " << (*(sp + i)).tensp << endl;
        cout << "Nhap vao don gia: " << (*(sp + i)).dongia << endl;
        cout << "Nhap vao so luong ton kho: " << (*(sp + i)).slkho << endl;
        cout << "---------------------------------------------\n";
    }
}
void suathongtin(SanPham* &sp, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (x == (i + 1))
        {
            cout << "San pham thu " << i + 1 << endl;
            cout << "Nhap vao ma san pham: ";
            cin.ignore();
            cin.getline((*(sp + i)).masp, 10);
            cout << "Nhap vao ten san pham: ";
            getline(cin, (*(sp + i)).tensp);
            cout << "Nhap vao don gia: ";
            cin >> (*(sp + i)).dongia;
            cout << "Nhap vao so luong ton kho: ";
            cin >> (*(sp + i)).slkho;
        }
    }
}
void xoathongtin(SanPham *sp, int &n, int r)
{
    for (int i = 0; i < n; i++)
    {
        if (r == i + 1)
        {
            for (int j = i + 1; j < n; j++)
            {
                (*(sp+i)) = (*(sp+j));
            }
            n--;
        }
    }
}
void sapxep(SanPham *sp, int n)
{
    cout << "Sap xep theo so luong ton kho tang dan\n";
    SanPham tam;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sp[i].slkho > sp[j].slkho)
            {
                tam = sp[i];
                sp[i] = sp[j];
                sp[j] = tam;
            }
        }
    }
}
int main()
{
    SanPham *sp;
    int n,x,r;
    cout << "Nhap vao so luong san pham: ";
    cin >> n;
    sp = new SanPham[n];
    nhap(sp, n);
    xuat(sp, n);
    cout << "Nhap vao thu tu san pham can sua: ";
    cin >> x;
    suathongtin(sp, n, x);
    xuat(sp, n);
    cout << "Nhap vao thu tu san pham can xoa: ";
    cin >> r;
    xoathongtin(sp, n, r);
    xuat(sp, n);
    sapxep(sp, n);
    xuat(sp, n);
    delete[] sp;
    sp = NULL;
    return 0;
}