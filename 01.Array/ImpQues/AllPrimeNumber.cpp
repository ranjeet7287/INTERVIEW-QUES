#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        bool isPrime=true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime==true && n!=1){
            cout<<i<<endl;
        }
    }
}