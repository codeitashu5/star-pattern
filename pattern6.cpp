#include<bits/stdc++.h>
using namespace std;
//priting solid  piramind

void printHollowPiramid(int m){
    int n = m*2-1;
    int d1 = m;
    int d2 = m;
    while(d1!=0){
        
        for(int j=1;j<=n;j++){
             if(j>=d1&&j<=d2){

                 if(d1==1||d1==m){
                     cout<<"* ";
                 }
                 else{
                     if(j==d1 || j==d2){
                         cout<<"* ";
                     }
                     else{
                         cout<<"  ";
                     }
                 }      
             }
             else
             cout<<"  ";
        }
        d1--;
        d2++;
        cout<<endl;
    } 
}


int main(){
   int m;
   cin>>m;
   printHollowPiramid(m);
}
