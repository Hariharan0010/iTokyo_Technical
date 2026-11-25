#include <iostream>
using namespace std;
int main(){
    int Upper_limit,count{};
    cout<<"Upper Limit = ";cin>>Upper_limit;
    if(Upper_limit>0&&Upper_limit<100){
        for(int i=1;i<=Upper_limit;i++){
            while(i<=Upper_limit){
                int q=i/10;
                int r=i%10;
                if(q==2&&r==2){
                    count+=2;
                break;
            }else if(q==2||r==2){
                    count+=1;
                break;
            } 
            break;
            }
        }
        cout<<"Digit 2 appearances: "<<count;
    }else{
        cout<<"I can only find the Digit 2 appearances for 2digit or 1digit numbers only.";
    }

}