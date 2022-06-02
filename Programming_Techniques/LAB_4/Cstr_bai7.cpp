// Bài 7. Xây dựng hàm nhận vào 2 chuỗi ký tự s1 và s2. Tìm xem s2 có xuất hiện trong s1 hay
// không? Nếu có thì trả con trỏ về địa chỉ xuất hiện đầu tiên, nếu không trả về NULL.
// Viết chương trình cho nhập vào 2 chuỗi, gọi hàm vừa xây dựng ở trên, dựa trên giá trị trả về
// cho biết vị trí phần tử xuất hiện đầu tiên của s2 trong s1.
#include <iostream>
#include <cstring>
using namespace std;
int *KTS1S2(char *s1, char *s2, int n1, int n2)
{
    int *p = NULL;
    for (int i = 0; i <= n1 - n2; i++)
    {
        if (!strncmp(s2, s1+i, n2))
        {
            p = &i;
            return p;
        }
    }
    return p;
}
int main()
{
    char s1[50], s2[50], n1, n2;
    do
    {
        cout << "Nhap vao chuoi 1: ";
        cin >> s1;
        cout << "Nhap vao chuoi 2: ";
        cin >> s2;
        n1 = strlen(s1);
        n2 = strlen(s2);
        if (n1 < n2)
        {
            cout << "Nhap sai, vi chuoi 1 co do dai be hon chuoi 2. Nhap lai!\n";
        }
    } while (n1 < n2);
    cout << "Dia chi cua vi tri dau tien chuoi 2 xuat hien trong chuoi 1 la: "<<KTS1S2(s1,s2,n1,n2);
    cout << endl;
    system("pause");
    return 0;
}