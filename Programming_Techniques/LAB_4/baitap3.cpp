// 3. Viết chương trình nhập vào 1 chuỗi tối đa 50 ký tự. Sau đó xuất
// từng từ của chuỗi vừa nhập dưới dạng trên từng dòng

#include<iostream>
#include<cstring>
using namespace std;
int  main()
{
    char S[51];
    int d;
    cout << "Nhap chuoi: ";
    cin.getline(S, 50);
    d = strlen(S);
    for (int i = 0; i < d; i++)
    {
        if (S[i]==' ')
            cout << endl;
        else
            cout << S[i];
    }
    system("pause");
    return 0;
}