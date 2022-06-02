// Bài 7. Viết 01 chương trình thực hiện các yêu cầu sau : 
//     a.Xây dựng các hàm : 
//         -Nhập vào 1 mảng số nguyên gồm r hàng và c cột;
//         - Xuất giá trị 1 mảng số nguyên gồm r hàng và c cột.
//     b.Xây dựng hàm trả về giá trị trung bình cộng của các phần tử trong 1 mảng số nguyên
//       gồm r hàng và c cột.
//     c.Xây dựng hàm nhận vào 1 mảng số nguyên gồm r hàng và c cột; giá trị số nguyên x.
//       Kiểm tra xem x có tồn tại trong mảng hay không và trả về kết quả tương ứng.
//     d.Xây dựng hàm nhận vào 1 mảng số nguyên gồm r hàng và c cột 
//       (giả sử các giá trị nhập không trùng nhau) 
//       và 2 giá trị số nguyên x và y(x và y phải đều tồn tại trong mảng).
//       Tiến hành hoán đổi 2 giá trị x và y này.Lưu ý : sử dụng lại hàm đã xây dựng ở
//       câu c.
//     e.Xây dựng hàm nhận vào 1 mảng số nguyên gồm r hàng và c cột; vị trí cột cần tính tích.
//       Sau đó trả về tích các giá trị số trong cột đã nhận vào.
//     f.Viết hàm main để kiểm tra các hàm đã xây dựng.
#include<iostream>
#include<cstdlib>
using namespace std;
const int N = 20;
// Câu A:
void nhap(int A[][N], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            A[i][j] = rand() % 20 + 1;
        }
    }
}
void xuat(int A[][N], int r, int c)
{
    cout << "Xuat mang A:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << A[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
}
// Câu B:
int tbc(int A[][N], int r, int c)
{
    int  tong = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            tong += A[i][j];
        }
    }
    return (tong / (r * c));
}
// Câu C:
bool kt(int A[][N], int r, int c, int x, int& vti, int& vtj)
{
    bool kq = false;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (A[i][j]==x)
            {
                kq = true;
                vti = i;
                vtj = j;
            }
        }
    }
    return kq;
}
// Câu D:
void doicho(int A[][N], int r, int c, int x, int y)
{
    int vtxi, vtxj, vtyi, vtyj, tam;
    if (kt(A,r,c,x,vtxi,vtxj)&&kt(A,r,c,y,vtyi,vtyj))
    {
        tam = A[vtxi][vtyj];
        A[vtxi][vtxj] = A[vtyi][vtyj];
        A[vtyi][vtyj] = tam;
    }
    else 
    {
        cout << "Khong doi cho\n";
    }
}
// Câu E:
int tich(int A[][N], int r, int cot)
{
    int t = 1;
    for (int i = 0; i < r; i++)
    {
        t *= A[r][cot];
    }
    return t;
}
// Câu F:
int main()
{
    int B[N][N], n, m, a, b, vi = 0, vj = 0, tcot;
    cout << "Nhap vao so hang va so cot cua mang:\n";
    cin >> n >> m;
    nhap(B, n, m);
    xuat(B, n, m);
    cout << "Gia tri trung binh cua mang la: " << tbc(B, n, m) << endl;
    cout << "Nhap vao gia tri cua phan tu can tim: ";
    cin >> a;
    if (kt(B,n,m,a,vi,vj))
    {
        cout << "Tim thay tai hang " << vi << " tai cot " << vj << endl;
    }
    else 
    {
        cout << a << " khong tim thay\n";
    }
    cout << "Nhap vao 2 gia tri x va y:\n";
    cin >> a >> b;
    doicho(B, n, m, a, b);
    xuat(B, n, m);
    cout << "Nhap vao so cot can tinh tich: ";
    cin >> tcot;
    cout << "Tich cot " << tcot << " la: " << tich(B, n, m) << endl;
    system("pause");
    return 0;
}

