// Viết chương trình dùng string để cho phép nhập vào một
// chuỗi ký tự và 1 từ. Sau đó tìm số lần xuất hiện của từ
// trong chuỗi đó

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string S;
    char x;
    int dem = 0;
    cout << "Nhap vao mot chuoi: ";
    getline(cin, S);
    cout << "Xuat chuoi: \n";
    cout << S << endl;
    cout << "Nhap vao 1 tu can tim kiem trong chuoi: ";
    cin >> x;
    for (int i = 1; i <= S.size(); i++)
    {
      
        if (x==char(S.at(i)))
        {
            dem++;
        }
    }
    if (dem!=0)
        cout << "So lan xuat hien cua tu " << x << " trong chuoi la: " << dem << endl;
    else
        cout << "Khong tim thay tu " << x << " trong chuoi\n";
    system("pause");
    return 0;
}