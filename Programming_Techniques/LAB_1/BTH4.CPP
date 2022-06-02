// Bài 4. Viết 01 chương trình thực hiện toàn bộ các công việc sau:
//     a. Cho phép người dùng nhập vào một mảng số nguyên gồm r hàng và c cột (tối đa 5
//     hàng và 6 cột, nếu nhập sai thì yêu cầu nhập lại cho đến khi đúng mới tiếp tục).
//     Gợi ý: dùng vòng lặp do…while để kiểm soát việc nhập giá trị hàng và cột có hợp lệ hay
//     không?
//     b. Cho người dùng nhập vào một vị trí cột/hàng cần tính tổng. Hãy tiến hành tính tổng
//     các giá trị lưu trữ trong cột/hàng mà người dùng yêu cầu. Lưu ý: vị trí cột hay hàng
//     phải hợp lệ.
//     Gợi ý: vị trí cột hay hàng hợp lệ là vị trí từ 0 đến số lượng phần tử tối đa trên cột hay hàng
//     – 1 (hoặc từ 1 đến số lượng phần tử tối đa trên cột hay hàng).
//     c. Cho người dùng nhập vào một giá trị x bất kỳ. Hãy tìm xem x có tồn tại trong mảng
//     hay không? Nếu có thì tồn tại bao nhiêu lần? Tại các vị trí nào?
//     Gợi ý: cho người dùng nhập giá trị x cần tìm. Duyệt toàn bộ mảng xem có giá trị nào bằng
//     x hay không? Dùng biến dem để lưu lại số lần tìm được. Việc lưu trữ giá trị nên dựa trên
//     số lần biến dem để xuất vị trí dòng và cột.
#include<iostream>
using namespace std;
int main()
{
    int A[5][6],r,c, tongh=0, tongc=0,hang,cot,x,dem=0;
    do
    {
        cout <<"Nhap vao so hang: ";
        cin >>r;
        cout <<"Nhap vao so cot: ";
        cin >>c;
        if (r<=0||r>5||c<=0||c>6)
            cout <<"Nhap sai roi! Hay nhap lai.\n";
    } while (r<=0||r>5||c<=0||c>6);
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            cout <<"A["<<i<<"]["<<j<<"] = ";
            cin >>A[i][j];
        }
    }
    cout <<"Mang gom cac phan tu: \n";
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            cout <<A[i][j]<<"\t";
        }
        cout <<endl;
    }
    do 
    {
        cout <<"Nhap vao hang can tinh tong: ";
        cin >>hang;
        cout <<"Nhap vao cot can tinh tong: ";
        cin >>cot;
        if (hang<=0||hang>r-1||cot<=0||cot>c-1)
            cout <<"Nhap sai roi! Hay nhap lai.\n";
    } while (hang<=0||hang>r-1||cot<=0||cot>c-1);
    for (int j=0; j<c; j++)
    {
        tongh+=A[hang][j];
    }
    cout <<"Tong hang "<<hang<<" la: "<<tongh<<endl;
    for (int i=0; i<r; i++)
    {
        tongc+=A[i][cot];
    }
    cout <<"Tong cot "<<cot<<" la: "<<tongc<<endl;
    cout <<"Nhap vao gia tri phan tu can tim: \n";
    cin >>x;
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            if (x==A[i][j])
                dem++;
        }
    }
    if (dem!=0){
        cout <<"Gia tri "<<x<<" can tim trong mang xuat hien "<<dem<<" lan trong mang.\n";
        cout <<"Tai cac vi tri: \n";
        for (int i=0; i<r;  i++)
        {
            for (int j=0; j<c; j++)
            {
                if (x==A[i][j])
                {
                    cout <<"A["<<i<<"]["<<j<<"]";
                    cout <<"\t";
                }
            }
        }
        cout <<endl;
    }
    else {
        cout <<"Gia tri can tim khong co trong mang.\n";
    }
    system("pause");
    return 0;
}
