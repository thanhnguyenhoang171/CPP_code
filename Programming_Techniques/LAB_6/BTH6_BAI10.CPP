#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct SinhVien
{
    string MaSV, Hoten;
    int Namsinh;
};
int main()
{
    SinhVien *SV;
    int n, InNamsinh;
    string Ma, InMa, InHoten;
    do
    {
        cout << "Nhap so sinh vien: ";
        cin >> n;
        if (n < 1 || n > 10)
            cout << "Nhap sai, nhap lai\n";
    } while (n < 1 || n > 10);
    SV = new SinhVien[n];
    ofstream ofile;
    ofile.open("D:/CHANH Data Resource/KTLT/BTTH/TEXT/BT10.txt", ios::out);
    if (ofile.is_open())
    {
        for (int i = 0; i < n; i++)
        {
            cout << "\nNhap sinh vien thu " << i + 1<<":" << endl;
            cout << "\nMa so: ";
            cin >> SV[i].MaSV;
            cin.ignore();
            cout << "\nHo ten: ";
            getline(cin, SV[i].Hoten);
            cout << "\nNam sinh: ";
            cin >> SV[i].Namsinh;
            cin.ignore();
            ofile << SV[i].MaSV<<endl;
            ofile << SV[i].Hoten<<endl;
            ofile << SV[i].Namsinh<<endl;
        }
        ofile.close();
        cout << "Nhap danh sach thanh cong\n";
    }
    else 
    {
        cout << "Nhap danh sach khong thanh cong\n";
    }
    cout << "Nhap ma sinh vien de tim: ";
    cin >> Ma;
    bool fag;
    ifstream ifile;
    ifile.open("D:/CHANH Data Resource/KTLT/BTTH/TEXT/BT10.txt", ios::in);
    if (ifile.is_open())
    {
        while (!ifile.eof())
        {
            ifile >> InMa;
            ifile.ignore();
            getline(ifile, InHoten);
            ifile >> InNamsinh;
            ifile.ignore();
            if (InMa==Ma)
            {
                cout << InMa << endl;
                cout <<InHoten<<endl;
                cout << InNamsinh << endl;
                fag = false;
                break;
            }
            if (fag) 
            {
                cout << "Khong tim thay ma sinh vien: " << Ma << endl;
            }
        }
        ifile.close();
    }
    else
    {
        cout << "Mo file khong thanh cong\n";
    }
    delete[] SV;
    SV = NULL;
    return 0;
}   