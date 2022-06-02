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
int main()
{
    SanPham *sp;
    int n;
    cout << "Nhap vao so luong san pham: ";
    cin >> n;
    sp = new SanPham[n];
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
    cout << "-----------------------------------------\n";
    cout << "Thong tin san pham";
    cout << "\n-----------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "San pham " << i + 1 << endl;
        cout << "Ma san pham: " << (*(sp + i)).masp << endl;
        cout << "Ten san pham: " << (*(sp + i)).tensp << endl;
        cout << "Nhap vao don gia: " << (*(sp + i)).dongia << endl;
        cout << "Nhap vao so luong ton kho: " << (*(sp + i)).slkho << endl;
        cout << "------------------------------------------\n";
    }
    int x;
    cout << "Nhap thu tu san pham can sua thong tin\n";
    cin >> x;
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
    cout << "-----------------------------------------\n";
    cout << "Thong tin san pham";
    cout << "\n-----------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "San pham " << i + 1 << endl;
        cout << "Ma san pham: " << (*(sp + i)).masp << endl;
        cout << "Ten san pham: " << (*(sp + i)).tensp << endl;
        cout << "Nhap vao don gia: " << (*(sp + i)).dongia << endl;
        cout << "Nhap vao so luong ton kho: " << (*(sp + i)).slkho << endl;
        cout << "------------------------------------------\n";
    }
    int r;
    cout << "Nhap vao so thu tu san pham can xoa: \n";
    cout << "------------------------------------------\n";
    cin >> r;
    for (int i = 0; i < n-1; i++)
    {
        if (r == i + 1)
        {
            for (int j = i+1; j < n;j++)
            {
                sp[i] = sp[j];
            }
            n--;
        }
        cout << "San pham " << i + 1 << endl;
        cout << "Ma san pham: " << (*(sp + i)).masp << endl;
        cout << "Ten san pham: " << (*(sp + i)).tensp << endl;
        cout << "Nhap vao don gia: " << (*(sp + i)).dongia << endl;
        cout << "Nhap vao so luong ton kho: " << (*(sp + i)).slkho << endl;
        cout << "------------------------------------------\n";
    }
    cout << "Sap xep theo so luong ton kho tang dan\n";
    SanPham tam;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sp[i].slkho>sp[j].slkho)
            {
                tam = sp[i];
                sp[i] = sp[j];
                sp[j] = tam;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << "San pham " << i + 1 << endl;
        cout << "Ma san pham: " << (*(sp + i)).masp << endl;
        cout << "Ten san pham: " << (*(sp + i)).tensp << endl;
        cout << "Nhap vao don gia: " << (*(sp + i)).dongia << endl;
        cout << "Nhap vao so luong ton kho: " << (*(sp + i)).slkho << endl;
        cout << "------------------------------------------\n";
    }
    delete[] sp;
    sp = NULL;
    free(sp);
    return 0;
}