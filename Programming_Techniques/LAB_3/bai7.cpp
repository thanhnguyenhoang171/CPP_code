// Bài 7. Dùng con trỏ viết hàm tìm kiếm 1 số nguyên có tồn tại trong mảng 1 chiều lưu trữ số
// nguyên hay không? Nếu có thì trả về vị trí đầu tiên xuất hiện số nguyên đó. Nếu không thì
// trả con trỏ về NULL. Sau đó viết chương trình kiểm chứng lại hàm vừa xây dựng.
#include <iostream>
#include <cstdlib>
using namespace std;
int *timkiem(int *a, int n, int x)
{
    int *p;
    p = NULL;
    for (int i = 0; i < n; i++)
    {
        if (x == *(a + i))
        {
            p = &i;
            return p;
        }
    }
    return p;
}
int main()
{
    int *a, n, x;
    cout << "Nhap vao kich thuoc cua mang: ";
    cin >> n;
    a = new int[n];
    cout << "Mang A:\n";
    for (int i = 0; i < n; i++)
    {
        *(a + i) = rand() % 10;
        cout << "  " << *(a + i);
    }
    cout << endl;
    cout << "Nhap vao gia tri phan tu tim kiem: ";
    cin >> x;
    if (timkiem(a, n, x) != NULL)
        cout << "Vi tri dau tien xuat hien cua so " << x << " la: " << *timkiem(a, n, x) << endl;
    else
        cout << "Khong tim thay gia tri " << x << " trong mang\n";
    delete[] a;
    a = NULL;
    system("pause");
    return 0;
}