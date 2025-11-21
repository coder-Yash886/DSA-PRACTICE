#include<iostream>
using namespace std;
void print1ton(int i,int n){
    if(i<1){
        return;
    }
    
    print1ton(i-1,n);
    cout<<i<<endl;

}
int main(){
    int n;
    cin>>n;
    print1ton(n,n);

}