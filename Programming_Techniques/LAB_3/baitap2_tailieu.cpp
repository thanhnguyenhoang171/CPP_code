// 2. Viết chương trình dùng cấp phát động cho nhập vào mảng 1
// chiều gồm các số nguyên (tối đa 20 phần tử). Sau đó tiến hành
// đảo ngược mảng vừa nhập. Xuất lại mảng cho người dùng kiểm
// tra.

#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{
    int *a, m, l=0, k, temp;
    do 
    {
        cout << "Nhap vao so luong phan tu cua mang: ";
        cin >> m;
        if (m <= 0 || m > 20)
            cout << "Nhap sai roi! Hay nhap lai\n";
    } while (m <= 0 || m > 20);
    a = new int[m];
    k=m-1;
    cout << "Xuat mang:\n";
    for (int i = 0; i < m; i++)
    {
        *(a + i) = rand() % 20;
        cout << setw(4) << *(a + i);
    }
    while (l<k)
    {
        temp = *(a + l);
        *(a + l) = *(a + k);
        *(a + k) = temp;
        l++;
        k--;
    }
    cout << "\nMang sau khi dao nguoc la: \n";
    for (int i = 0; i < m; i++)
    {
        cout << setw(4) << *(a + i);
    }
    delete[] a;
    a = NULL;
    cout << endl;
    system("pause");
    return 0;
}