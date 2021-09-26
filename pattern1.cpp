#include<bits/stdc++.h>
using namespace std;


void sloidRectangel(int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
   
     int n,m;
     cin>>m>>n;
     sloidRectangel(m,n);
     return 0;
}
