// Bài 3. Viết 01 chương trình thực hiện toàn bộ các công việc sau:
//     a. Cho phép người dùng nhập vào một mảng số nguyên gồm r hàng và c cột (tối đa 10
//     hàng và 15 cột, nếu nhập sai thì yêu cầu nhập lại cho đến khi đúng mới tiếp tục).
//     Gợi ý: dùng vòng lặp do…while để kiểm soát việc nhập giá trị hàng và cột có hợp lệ hay
//     không?
//     b. Thực hiện việc tính tổng các giá trị lưu trữ trong mảng.
//     c. Tìm giá trị nhỏ nhất, lớn nhất đang lưu trữ trong mảng.
//     Gợi ý: dùng 1 giá trị min để chứa giá trị nhỏ nhất trong mảng. Khởi tạo min là giá trị đầu
//     tiên trong mảng, rồi tiến hành so sánh min với các giá trị còn lại để tìm min. Tương tự cho
//     max.
//     d. Cho biết vị trí của giá trị nhỏ nhất hay lớn nhất ở hàng mấy? cột bao nhiêu (Giả sử
//     người dùng nhập không có giá trị nào trùng nhau).
//     Gợi ý: dựa trên giá trị đã tìm được ở câu c, lưu trữ vị trí ứng với giá trị nhỏ nhất hay lớn
//     nhất (có thể lồng ghép trong lúc tìm min hay max) bằng 2 biến hang va cot. Vì đề toán có giả sử không có giá trị trùng nhau trong mảng nên chắc chắn rằng trong mảng chỉ có 1 giá
//     trị nhỏ nhất hoặc lớn nhất, việc lưu trữ giá trị nhờ vào giá trị biến đếm ở 2 vòng lặp khi
//     duyệt mảng.
#include<iostream>
using namespace std;
int main()
{
    int A[10][15], r, c, tong=0, min=A[0][0];
    do 
    {
        cout <<"Nhap vao hang: ";
        cin >>r;
        cout <<"Nhap vao cot: ";
        cin >>c;
        if (r<=0||r>10||c<=0||c>15)
            cout <<"Nhap sai roi! Hay nhap lai.\n";
    } while (r<=0||r>10||c<=0||c>15);
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            cout <<"A["<<i<<"]["<<j<<"] = ";
            cin >>A[i][j];
        }
    }
    cout <<"Xuat mang: \n";
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            cout <<A[i][j]<<"\t";
        }
        cout <<endl;
    }
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            tong+=A[i][j];
        }
    }
    cout <<"Tong tat ca gia tri cua cac phan tu trong mang la: "<<tong<<endl;
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            if (min>A[i][j])
                min=A[i][j];
        }
    }
    int max=A[0][0];
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            if (max<A[i][j])
                max=A[i][j];
        }
    }
    cout <<"Gia tri lon nhat cua phan tu trong mang la: "<<max<<endl;
    cout <<"Gia tri nho nhat cua phan tu trong mang la: "<<min<<endl;
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            if (min==A[i][j])
                cout <<"Gia tri nho nhat tai vi tri A["<<i<<"]["<<j<<"] = "<<A[i][j]<<endl;
        }
    }
        for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            if (max==A[i][j])
                cout <<"Gia tri lon nhat tai vi tri A["<<i<<"]["<<j<<"] = "<<A[i][j]<<endl;
        }
    }
}