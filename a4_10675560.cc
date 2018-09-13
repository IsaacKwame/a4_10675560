#include <iostream>

using namespace std;
int GCD(int x, int y);
int main()
{
    int x,y;
    cout << "Enter two numbers : "<<endl;
    cin  >> x >> y;
    cout << "G.C.D of "<< x << " and "<< y << " is: "<<GCD(x,y)<<endl;
    return 0;
}
int GCD(int x, int y)
{
    if(y!=0)
        return GCD(y, x%y);
    else
        return x;
}
