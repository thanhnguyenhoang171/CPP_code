#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   double alpha[50];
   for (int i = 0 ; i < 26; i++)
   {
       alpha[i]=i*i;
   }
   for (int i = 26; i <= 50; i++)
   {
       alpha[i]=i*i*i;
   }
   for (int i = 0; i < 50; i++)
   {
        if (i % 10 == 0)
            cout <<endl;
        cout <<setw(9)<<alpha[i];
        if (i < 49)
            cout <<", ";
        if (i == 49)
            cout <<".";
   }
   cout <<endl;
   system("pause");
   return 0;
}
