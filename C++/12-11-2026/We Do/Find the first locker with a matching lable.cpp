#include <iostream>
using namespace std;
int main(){
    int code,arr[5]={14,27,31,27,42};
    bool flag=false;
    cout<<"Please tell me the Code: ";
    cin>>code;
    for(int i =0;i<5;i++){
        if(code==arr[i]){
            cout<<"The locker is found at: "<< i<<endl;
            flag=true;
            break;
        }
    }
    if(!flag){
        cout<<"Not Found";
    }
}