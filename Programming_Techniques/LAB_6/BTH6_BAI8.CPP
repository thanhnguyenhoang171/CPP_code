#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void ghi(string file, int a, int b, int c)
{
    ofstream ofile;
    ofile.open(file, ios::out);
    if (ofile.is_open())
    {
        ofile << a << '#' << b << '#' << c;
        ofile.close();
        cout << "Ghi file thanh cong!\n";
    }
    else
    {
        cout << "Khong the mo file de ghi\n";
    }
}
void doc(string file, int &a, int &b, int &c)
{
    ifstream ifile;
    ifile.open(file, ios::in);
    if (ifile.is_open())
    {
        ifile >> a;
        ifile.ignore(1);
        ifile >> b;
        ifile.ignore(1);
        ifile >> c;
        ifile.close();
    }
    else
    {
        cout << "Khong the mo file de doc du lieu\n";
    }
}
int main()
{
    int a, b, c;
    int a1, b1, c1;
    string filename;
    cout << "Nhap vao 3 so nguyen: \n";
    cin >> a >> b >> c;
    cout << "Nhap ten file: ";
    cin.ignore();
    getline(cin, filename);
    ghi(filename, a, b, c);
    doc(filename, a1, b1, c1);
    cout << a1 << '#' << b1 << '#' << c1 << endl;
    return 0;
}