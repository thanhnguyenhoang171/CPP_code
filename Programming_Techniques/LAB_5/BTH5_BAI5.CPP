#include <iostream>
#include <cstring>
using namespace std;
struct Sach
{
    char tensach[20];
    char tenauthor[20];
};
struct NTN
{
    int ngay, thang, nam;
};
void nhap(Sach *&book, NTN *&day, int &n)
{
    do
    {
        cout << "Nhap vao so luong sach: ";
        cin >> n;
        if (n > 50)
            cout << "Vuot qua so luong! Hay nhap lai\n";
    } while (n > 50);
    for (int i = 0; i < n; i++)
    {
        cout << "\nSach " << i + 1 << endl;
        cout << "Nhap vao ten sach: ";
        cin.ignore();
        cin.getline(book[i].tensach, 20);
        cout << "Nhap ten tac gia: ";
        cin.getline(book[i].tenauthor, 20);
        cout << "Nhap vao ngay xuat ban: ";
        cin >> day[i].ngay;
        cout << "Nhap vao thang xuat ban: ";
        cin >> day[i].thang;
        cout << "Nhap vao nam xuat ban: ";
        cin >> day[i].nam;
    }
}
void xuat(const Sach *book, NTN *day, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (string(book[i].tenauthor) == "Tran Dung")
        {
            cout << "Nhap vao ten sach: " << book[i].tensach << endl;
            cout << "Nhap ten tac gia: " << book[i].tenauthor << endl;
            cout << "Nhap vao ngay xuat ban: " << day[i].ngay << endl;
            cout << "Nhap vao thang xuat ban: " << day[i].thang << endl;
            cout << "Nhap vao nam xuat ban: " << day[i].nam << endl;
        }
    }
    
}
int main()
{
    Sach *b;
    NTN *d;
    int n;
    b = new Sach[n];
    d = new NTN[n];
    nhap(b, d, n);
    cout << "\nSach co ten tac gia la Tran Dung:\n";
    xuat(b, d, n);
    delete[] b;
    b = NULL;
    delete[] d;
    d = NULL;
    free(b);
    free(d);
    return 0;
}
