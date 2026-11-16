#include<iostream>
using namespace std;
double triangleArea(double base,double height){
    return (0.5)*base*height;
}
int main()
{
    double a=7,b=3;
    double  ans = triangleArea(a,b);
    cout<<ans;
} // namespace name
