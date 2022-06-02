// Bài 1. Viết 01 chương trình thực hiện toàn bộ các công việc sau:
//     a. Khai báo một mảng số nguyên gồm 3 hàng và 4 cột.
//     b. Khởi tạo giá trị của mảng vừa nhập lần lượt như sau:
//     8 4 -1 5
//     2 2 6 9
//     11 2 5 4
//     c. Xuất lại toàn bộ mảng đang lưu trữ để kiểm chứng.
#include<iostream>
using namespace std;
int main()
{
    int A[3][4]={{8,4,-1,5},{2,2,6,9},{11,2,5,4}};
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<4; j++)
        {
            cout <<A[i][j]<<"\t";
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}