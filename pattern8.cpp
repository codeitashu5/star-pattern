#include<bits/stdc++.h>
using namespace std;
//priting solid  piramind

void printSolidPiramid(int m){
    int n = m*2-1;
    int d1 = 1;
    int d2 = n;
    while(d1<=d2){
        char a = 'p';
        for(int j=1;j<=n;j++){
             if(j>=d1&&j<=d2){
                 if(a=='p'){
                   cout<<"* ";
                   a = 'n';
                 }
                 else{
                     cout<<"  ";
                     a = 'p';
                 }     
             }
             else
             cout<<"  ";
        }
        d1++;
        d2--;
        cout<<endl;
    } 
}



int main(){
   int m;
   cin>>m;
   printSolidPiramid(m);
}
