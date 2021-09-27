#include<bits/stdc++.h>
using namespace std;
//priting solid half piramind


void printSolidHalfPiramidHollow(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==1||i==n)
            cout<<"* ";
            else{
                if(j==1||j==i)
                 cout<<"* ";
                else
                 cout<<"  ";
            }
        }
        cout<<endl;
    }
}

int main(){
   int n;
   cin>>n;
   printSolidHalfPiramidHollow(n);
}
