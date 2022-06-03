#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double Heron(double a, double b, double c)
{
    double S, p;
    p = (a + b + c) / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));
    return S;
}
bool Kt(double a, double b, double c)
{
    if (a + b > c && a + c > b && b + c > a)
        return true;
    else
        return false;
}
double Cv(double a, double b, double c)
{
    double kq = a + b + c;
    return kq;
}
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (Kt(a, b, c))
    {
        cout << Cv(a, b, c) << " ";
        cout << fixed << setprecision(2) << Heron(a, b, c);
    }
    else
    {
        cout << "NO";
    }
    return 0;
}