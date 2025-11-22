#include<iostream>
using namespace std;
int printsum1ton(int n){
    if(n==0){
        return 0;

    }
    return n + printsum1ton(n-1);
    
    
}
int main(){
    int n;
    cin>>n;
   cout<< printsum1ton(n);

}