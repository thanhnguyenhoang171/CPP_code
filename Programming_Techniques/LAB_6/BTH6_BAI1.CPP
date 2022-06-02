#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ghifile;
    ghifile.open("D:/CHANH Data Resource/KTLT/BTTH/TEXT/BT1.txt", ios::out);
    int a, b, tong = 0;
    cout << "Nhap vao a va b:\n";
    cin >> a >> b;
    tong = a + b;
    if (ghifile.is_open())
    {
        ghifile <<tong << endl;
        ghifile.close();
        cout << "Ghi file thanh cong!\n";
    }
    else
        cout << "Khong mo duoc file de ghi du lieu\n";
    return 0;
}
