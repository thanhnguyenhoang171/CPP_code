// Bài 10. Viết chương trình nhập vào chuỗi ngày tháng năm theo định dạng: “thang-ngay-nam”.
// Sau đó trả về định dạng tương tự nhưng theo qui cách khung giờ quốc tế.
#include <iostream>
#include <cstring>
using namespace std;
char *InTh(int thang)
{
    char* t = NULL;
    switch (thang)
    {
    case 1:
        t = "January";
        break;
    case 2:
        t = "February";
        break;
    case 3:
        t = "March";
        break;
    case 4:
        t = "April";
        break;
    case 5:
        t = "May";
        break;
    case 6:
        t = "June";
        break;
    case 7:
        t = "July";
        break;
    case 8:
        t = "August";
        break;
    case 9:
        t = "September";
        break;
    case 10:
        t = "October";
        break;
    case 11:
        t = "November";
        break;
    case 12:
        t = "December";
        break;
    }
    return t;
}
int main()
{
    char s[9], D[3], M[3], Y[3];
    int d, m, y;
    do
    {
        cout << "Nhap vao ngay thang nam theo dang (mm/dd/yy): ";
        cin.getline(s, 9);
        strncpy(M, s, 2);
        M[2] = '\0';
        m = atoi(M);
        strncpy(D, s + 3, 2);
        D[2] = '\0';
        d = atoi(D);
        strncpy(Y, s + 6, 2);
        Y[2] = '\0';
        y = atoi(Y);
        if (m <= 0 || m > 12)
            cout << "Nhap sai roi! Hay nhap lai\n";
    } while (m <= 0 || m > 12);
    if (y<=22)
    {
        y += 2000;
    }
    else
    {
        y += 1900;
    }
    cout << InTh(m) << " " << d << ", " << y << endl;
    return 0;
}