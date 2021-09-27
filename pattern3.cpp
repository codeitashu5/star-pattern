#include<bits/stdc++.h>
using namespace std;
//priting solid half piramind


void printSolidHalfPiramidSolid(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
   int n;
   cin>>n;
   printSolidHalfPiramidSolid(n);
}
