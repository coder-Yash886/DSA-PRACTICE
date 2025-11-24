#include<iostream>
#include<algorithm>
using namespace std;
int fibonaci(int n){
    if(n<=1) return n;
int last = fibonaci(n-1);
int slast = fibonaci(n-2);   // Time complexity nearly about (2^n)
return last + slast;
}
int main(){
    int n;
    cin>>n;
    cout<<fibonaci(n);
   

}