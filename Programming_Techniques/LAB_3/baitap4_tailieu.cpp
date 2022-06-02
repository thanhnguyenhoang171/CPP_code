// 4. Viết chương trình dùng cấp phát động xây dựng hàm nhập và
// xuất 1 mảng số nguyên tối đa 15 phần tử. Sau đó xây dựng hàm
// kiểm tra xem mảng vừa nhập có phải là mảng đối xứng hay
// không? Viết chương trình kiểm tra các hàm trên.

#include<iostream>
#include<iomanip>
using namespace std;
bool doixung(int *a, int n)
{
    int l = 0, k = n - 1;
    while (l<k)
    {
        if (a[l]!=a[k])
            return false;
        l++;
        k--;
    }
    return true;
}
void nhap(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void xuat(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(4) << a[i];
    }
    cout << endl;
}
int main()
{
    int *a, n;
    do
    {
        cout << "Nhap so phan tu cua mang: ";
        cin >> n;
        if (n <= 0 || n > 15)
            cout << "Nhap sai roi! Hay nhap lai\n";
    } while (n <= 0 || n > 15);
    a = new int[n];
    cout << "Nhap gia tri vao mang: \n";
    nhap(a, n);
    xuat(a, n);
    if (doixung(a,n))
        cout << "Mang doi xung\n";
    else
        cout << "Mang khong doi xung\n";
    delete[] a;
    a = 0;
    system("pause");
    return 0;
}