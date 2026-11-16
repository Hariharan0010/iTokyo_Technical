#include<iostream>
using namespace std;
int sum(int a, int b );
int main(){
    int day1,day2;
    cout<<"Number of books borrowed on day1: ";cin>>day1;
    cout<<"Number of books borrowed on day2: ";cin>>day2;
    cout<<"Total No. of books borrowed on that both days:"<<sum(day1,day2);
}
int sum(int a, int b){
    int sum=a+b;
    return sum;
}