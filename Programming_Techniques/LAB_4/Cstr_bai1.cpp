// Bài 1. Viết chương trình nhận vào 2 chuỗi ký tự (kể cả khoảng trắng). Sau đó thực hiện:
// a. So sánh xem chuỗi nào dài hơn?
// b. Chuyển từng chuỗi thành dạng in hoa ký tự đầu tiên mỗi từ. Xuất lại 2 chuỗi sau khi
// chuyển.
// c. Nối chuỗi thứ 2 vào chuỗi thứ nhất. Xuất lại kết quả nối

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

char hoa(char ch)
{
    if (islower(ch))
        ch = ch - 32;
    return ch;
}
char thuong(char ch)
{
    if (isupper(ch))
        ch = ch + 32;
    return ch;
}
int main()
{
    char S1[100], S2[100];
    cout << "Nhap vao chuoi S1: ";
    cin.getline(S1, 100);
    cout << "Nhap vao chuoi S2: ";
    cin.getline(S2, 100);
    if (strlen(S1) > strlen(S2))
    {
        cout << "Chuoi S1 dai hon chuoi S2." << endl;
    }
    else if (strlen(S1) == strlen(S2))
    {
        cout << "Chuoi S1 bang chuoi S2." << endl;
    }
    else
    {
        cout << "Chuoi S1 ngan hon chuoi S2." << endl;
    }
    S1[0] = hoa(S1[0]);
    for (int i = 0; i < strlen(S1) - 1; i++)
    {
        if (isspace(S1[i]))
            S1[i + 1] = hoa(S1[i + 1]);
        else
            S1[i + 1] = thuong(S1[i + 1]);
    }
    cout << "Ket qua chuoi S1: " << S1 << endl;
    S2[0] = hoa(S2[0]);
    for (int j = 0; j < strlen(S2) - 1; j++)
    {
        if (isspace(S2[j]))
            S2[j + 1] = hoa(S2[j + 1]);
        else
            S2[j + 1] = thuong(S2[j + 1]);
    }
    cout << "Ket qua chuoi S2: " << S2 << endl;
    strcat(S1, " ");
    strcat(S1, S2);
    cout << "Chuoi sau khi noi: " << S1 << endl;
    return 0;
}