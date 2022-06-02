// Bài 6. Xây dựng hàm nhận vào 1 chuỗi ký tự có dạng: “ngay-thang-nam” với mỗi giá trị
// ngày, tháng là 2 ký tự, năm là 4 ký tự (Ví dụ: “06-01-2007”). Sau đó trả về xem ngày đó là
// ngày thứ mấy trong năm.
// Viết chương trình kiểm chứng hàm vừa xây dựng.
#include <iostream>
#include <cstring>
using namespace std;

void ngaythu(char s[])
{
    char D[3], M[3], Y[5];
    int d, m, y, T2;
    strncpy(D, s, 2);
    D[2] = '\0';
    d = atoi(D);
    strncpy(M, s + 3, 2);
    M[3] = '\0';
    m = atoi(M);
    strncpy(Y, s + 6, 4);
    Y[4] = '\0';
    y = atoi(Y);
    if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
    {
        T2 = 29;
    }
    else
    {
        T2 = 28;
    }
    switch (m)
    {
    case 1:
        cout << "La ngay thu " << d << " trong nam " << y << endl;
        break;
    case 2:
        cout << "La ngay thu " << d + 31 << " trong nam " << y << endl;
        break;
    case 3:
        cout << "La ngay thu " << d + 31 + T2 << " trong nam " << y << endl;
        break;
    case 4:
        cout << "La ngay thu " << 31 + 31 + T2 + d << " trong nam " << y << endl;
        break;
    case 5:
        cout << "La ngay thu " << 31 + 31 + T2 + 30 + d << " trong nam " << y << endl;
        break;
    case 6:
        cout << "La ngay thu " << 31 + 31 + T2 + 30 + 31 + d << " trong nam " << y << endl;
        break;
    case 7:
        cout << "La ngay thu " << 31 + 31 + T2 + 30 + 31 + 30 + d << " trong nam " << y << endl;
        break;
    case 8:
        cout << "La ngay thu " << 31 + 31 + 31 + T2 + 30 + 31 + 30 + d << " trong nam " << y << endl;
        break;
    case 9:
        cout << "La ngay thu " << 31 + 31 + 31 + 31 + T2 + 30 + 31 + 30 + d << " trong nam " << y << endl;
        break;
    case 10:
        cout << "La ngay thu " << 31 + 31 + 31 + 31 + T2 + 30 + 31 + 30 + d + 30 << " trong nam " << y << endl;
        break;
    case 11:
        cout << "La ngay thu " << 31 + 31 + 31 + 31 + T2 + 30 + 31 + 30 + d + 30 + 31 << " trong nam " << y << endl;
        break;
    case 12:
        cout << "La ngay thu " << 31 + 31 + 31 + 31 + T2 + 30 + 31 + 30 + d + 30 + 31 + 30 << " trong nam " << y << endl;
        break;
    }
}
int main()
{
    char s[11];
    cout << "Nhap vao (ngay-thang-nam): ";
    cin.getline(s, 11);
    ngaythu(s);
    system("pause");
    return 0;
}