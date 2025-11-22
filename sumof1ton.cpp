#include<iostream>
using namespace std;
void printsum1ton(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }

    printsum1ton(i-1,sum+i);

}
int main(){
    int n;
    cin>>n;
    printsum1ton(n,0);

}