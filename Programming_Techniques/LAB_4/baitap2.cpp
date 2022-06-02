// 2. Viết chương trình nhập vào 1 chuỗi tối đa 50 ký tự. Sau đó chuyển
// toàn bộ các ký tự đầu mỗi chữ đều in hoa, các ký tự không phải ký
// tự đầu sẽ chuyển sang in thường. Xuất lại chuỗi để kiểm chứng

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char S[51];
    int d;
    cout << "nhap chuoi: ";
    cin.get(S, 50);
    d = strlen(S);
    S[0] = toupper(S[0]);
    for (int i = 0; i < d; i++)
    {
        if (isspace(S[i])) //S[i]=' '
            S[i + 1] = toupper(S[i + 1]);
        else
            S[i + 1] = tolower(S[i+1]);
    }
    cout << "Chuoi ket qua: " << S << endl;
    system("pause");
    return 0;
}