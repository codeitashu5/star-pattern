#include<bits/stdc++.h>
using namespace std;

void printSolidHalfPiramidOfNos(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){

           if(i==1||i==n){
               cout<<j<<" ";
           }
           else{
              if(j==1||j==i)
               cout<<j<<" ";
              else
               cout<<"  ";
           }

            
        }
        cout<<endl;
    }
}

int main(){
    //printing half piramid with no
    int n;
    cin>>n;
    printSolidHalfPiramidOfNos(n);
    return 0;
}