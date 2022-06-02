// Bài 6. Dùng con trỏ viết hàm đảo ngược 1 mảng 1 chiều lưu trữ số nguyên.Sau đó viết chương
// trình kiểm chứng lại hàm vừa xây dựng.
#include <iostream>
#include <cstdlib>
using namespace std;
void daonguoc(int *a, int n)
{
    int *p, *q, temp;
    p = a;
    q = a + n - 1;
    while (p < q)
    {
        temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;
    }
}
int main()
{
    int *a, n;
    cout << "Nhap vao kich thuoc mang: ";
    cin >> n;
    a = new int[n];
    cout << "Mang A:\n";
    for (int i = 0; i < n; i++)
    {
        *(a + i) = rand() % 20;
        cout << "  " << *(a + i);
    }
    cout << "\nMang dao cua A la:\n";
        daonguoc(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << "  " << *(a + i);
    }
    cout << endl;
    delete[] a;
    a = NULL;
    system("pause");
    return 0;
}