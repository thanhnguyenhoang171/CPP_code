#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ofile;
    ifstream ifile;
    ofile.open("D:/CHANH Data Resource/KTLT/BTTH/TEXT/BT3.txt", ios::out);
    ifile.open("D:/CHANH Data Resource/KTLT/BTTH/TEXT/BT3.txt");

    int a, b, c;
    double tbc = 0;
    cout << "Nhap vao 3 so nguyen: \n";
    cin >> a >> b >> c;
    if (ofile.is_open())
    {
        ofile << a << '#' << b << '#' << c << endl;
        ofile.close();
        cout << "Ghi file thanh cong!" << endl;
    }
    else
    {
        cout << "Khong mo duoc file de ghi du lieu" << endl;
    }
    if (ifile.is_open())
    {
        ifile >> a;
        ifile.ignore(1);
        ifile >> b;
        ifile.ignore(1);
        ifile >> c;
        tbc = (a + b + c) / 3;
        cout << "Gia tri trung binh cong = " << tbc << endl;
        ifile.close();
    }
    else
    {
        cout << "Khong mo duoc file de ghi du lieu" << endl;
    }
    return 0;
}