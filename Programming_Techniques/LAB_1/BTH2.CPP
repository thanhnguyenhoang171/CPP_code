// Bài 2. Viết chương trình dùng câu lệnh while để nhập và xuất giá trị cho một mảng số nguyên
//         gồm 4 hàng và 3 cột.
//         Gợi ý: dựa trên tính chất câu lệnh while và for để xây dựng lại phần nhập và xuất mảng 2
//         chiều.
#include<iostream>
using namespace std;
int main()
{
    int A[4][3],i=0,j;
    while (i<4)
    {
        j=0;
        while (j<3)
        {
            cout <<"Nhap vao A["<<i<<"]["<<j<<"] = ";
            cin >>A[i][j];
            j++;
        }
        i++;
    }
    i=0;
    while (i<4)
    {
        j=0;
        while (j<3)
        {
            cout <<A[i][j]<<"\t";
            j++;
        }
        cout <<endl;
        i++;
    }
    system("pause");
    return 0;
}