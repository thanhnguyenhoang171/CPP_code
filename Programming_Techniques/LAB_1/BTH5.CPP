// Bài 5. Vi?t chuong trình cho nh?p vào m?t ma tr?n vuông c?p n (ch?a các s? nguyên). Sau dó
//         tính t?ng các giá tr? trên du?ng chéo chính và du?ng chéo ph? c?a ma tr?n v?a nh?p.
//         Ví d?: cho ma tr?n
//         Thì t?ng các giá tr? trên du?ng chéo chính là = 1 + 15 + 2 = 18, t?ng các giá tr? trên
//         du?ng chéo ph? là = 6 + 15 + 0 = 21.
//         G?i ý: các v? trí di?u chéo chính d?u là [0][0], [1][1], [2][2]. Tuong t? cho du?ng chéo
//         ph?
#include<iostream>
#include<cstdlib>
using namespace std;
const int N=20;
int  main()
{
    int A[N][N],tongc=0, tongp=0,n;
    cout <<"Nhap vao cap cua ma tran vuong: ";
    cin >>n;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            A[i][j]=rand()%20+1;
        }
    }
    cout <<"Xuat mang: \n";
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout <<A[i][j]<<"\t";
        }
        cout <<endl;
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i==j)
                tongc+=A[i][j];
        }
    }
    cout <<"Tong cac gia tri phan tu cua mang tren duong cheo chinh la: "<<tongc<<endl;
 	for (int i=0; i<n; i++)
 	{
 		for (int j=0; j<n; j++)
 		{
 			if (i==n-j-1)
 				tongp+=A[i][j];
		 }
	 }
	 cout <<"Tong cac gia tri phan tu cua mang tren duong cheo phu la: "<<tongp<<endl;
    system("pause");
    return 0;
}