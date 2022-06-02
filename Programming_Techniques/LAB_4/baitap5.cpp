// 5. Viết chương trình nhập vào số điện thoại, sau đó tách mã vùng, số tổng
// đài, số nội bộ. Biết rằng:
// - Mã vùng: chứa số 0 đầu tiên, có thể dài 2 đến 4 ký tự.
// - Số tổng đài: nếu ở thành phố Hà Nội hay TPHCM thì số tổng đài bao
// gồm 8 ký tự. Nếu ở tỉnh có 7 chữ số.
// - Số nội bộ: 3 ký tự cuối.

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char S[16], S1[5], S2[9], S3[4];
    int dai;
    cout << "Nhap so dien thoai: ";
    cin.getline(S, 16);
    dai = strlen(S);
    if (strncmp(S, "024", 3 )==0 || strncmp(S, "028", 3)==0)
    {
        strncpy(S3, S + (dai - 3), 3);
        S3[3] = '\0';
        strncpy(S2, S + (dai - 11), 8);
        S2[8] = '\0';
        strncpy(S1, S, 3);
        S1[dai-11] = '\0';
    }
    else
    {
        strncpy(S3, S + (dai - 3), 3);
        S3[3] = '\0';
        strncpy(S2, S + (dai - 10), 7);
        S2[7] = '\0';
        strncpy(S1, S, 3);
        S1[dai - 10] = '\0';
    }
    cout << "Ma vung: " << S1 << endl;
    cout << "Tong dai: " << S2 << endl;
    cout << "So dien thoai: " << S3 << endl;
    system("pause");
    return 0;
}