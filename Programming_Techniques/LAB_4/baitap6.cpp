// 6. Viết chương trình nhập vào một chuỗi dạng ngày-tháng-năm? Sau đó
// tính xem đó là ngày thứ bao nhiêu trong năm (Tính từ ngày 01 tháng 01).

#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char S[11], D[3], M[3], Y[5];
    int d, m, y, T2;
    cout << "Nhap vao ngay thang nam dang (dd-mm-yyyy): ";
    cin.getline(S, 11);
    strncpy(D, S, 2);
    D[2] = '\0';
    strncpy(M, S + 3, 2);
    M[2] = '\0';
    strncpy(Y, S + 6, 4);
    Y[4] = '\0';
    d = atoi(D);
    m = atoi(M);
    y = atoi(Y);
    cout << y << endl;
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
        T2 = 29;
    else
        T2 = 28;
    switch (m)
    {
    case 1:
        cout << "La ngay thu " << d << " trong nam " << y << endl;
        break;
    case 2:
        cout << "La ngay thu " << 31 + d << " trong nam " << y << endl;
        break;
    case 3:
        cout << "La ngay thu " << 31 + T2 + d << " trong nam " << y << endl;
        break;
    case 4:
        cout << "La ngay thu " << 31 + T2 + 31 + d << " trong nam " << y << endl;
        break;
    case 5:
        cout << "La ngay thu " << 31 + T2 + 31 + 30 + d << " trong nam " << y << endl;
        break;
    case 6:
        cout << "La ngay thu " << 31 + T2 + 31 + 30 + 31 + d << " trong nam " << y << endl;
        break;
    case 7:
        cout << "La ngay thu " << 31 + T2 + 31 + 30 + 31 + 30 + d << " trong nam " << y << endl;
        break;
    case 8:
        cout << "La ngay thu " << 31 + T2 + 31 + 30 + 31 + 30 + 31 + d << " trong nam " << y << endl;
        break;
    case 9:
        cout << "La ngay thu " << 31 + T2 + 31 + 30 + 31 + 30 + 31 + 31 + d << " trong nam " << y << endl;
        break;
    case 10:
        cout << "La ngay thu " << 31 + T2 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d << " trong nam " << y << endl;
        break;
    case 11:
        cout << "La ngay thu " << 31 + T2 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d << " trong nam " << y << endl;
        break;
    case 12:
        cout <<"La ngay thu "<<31 + T2 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 +30+d<<" trong nam "<<y<<endl;
        break;
    }
        system("pause");
        return 0;
}