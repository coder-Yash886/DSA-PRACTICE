#include<iostream>
using namespace std;
void print1ton(int i,int n){
    if(n<i){
        return;
    }
    cout<<n<<endl;
    print1ton(i,n-1);

}
int main(){
    int n;
    cin>>n;
    print1ton(0,n);

}