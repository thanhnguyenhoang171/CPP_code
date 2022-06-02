#include <iostream>
#include <iomanip>

using namespace std;
struct MaTran
{
    int r, c;
    int **s;
};
void nhap(MaTran &m)
{
    for (int i = 0; i < m.r; i++)
    {
        for (int j = 0; j < m.c; j++)
        {
            m.s[i][j] = rand() % 20 + 1;
        }
    }
}
void xuat(const MaTran m)
{
    for (int i = 0; i < m.r; i++)
    {
        for (int j = 0; j < m.c; j++)
        {
            cout << setw(4) << m.s[i][j];
        }
        cout << endl;
    }
}
bool sodoixung(int n)
{
    int tam, kq = 0, temp;
    temp = n;
    bool v;
    while (n>0)
    {
        tam = n % 10;
        kq = kq * 10 + tam;
        n = n / 10;
    }
    if (kq==temp)
        v = true;
    else
        v = false;
    return v;
}
int tong(MaTran m)
{
    int kq = 0;
    for (int i = 0; i < m.r; i++)
    {
        for (int j = 0; j < m.c; j++)
        {
            if (sodoixung(m.s[i][j]))
                kq += m.s[i][j];
        }
    }
    return kq;
}
int main()
{
    MaTran m;
    cout << "Nhap vao so dong: ";
    cin >> m.r;
    cout << "Nhap vao so cot: ";
    cin >> m.c;
    m.s = new int *[m.r];
    for (int j = 0; j < m.c; j++)
    {
        m.s[j] = new int[m.c];
    }
    nhap(m);
    xuat(m);
    cout << "Tong cac phan tu doi xung trong mang la: " << tong(m) << endl;
    for (int j = 0; j < m.c; j++)
    {
        delete[] m.s[j];
    }
    delete[] m.s;
    return 0;
}