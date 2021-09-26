#include<bits/stdc++.h>
using namespace std;


void hollowRectangel(int m,int n){

   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           if(i==0||i==m-1){
               cout<<"* ";
           }
           else{
               if(j==0||j==n-1)
                cout<<"* ";
                else
                 cout<<"  ";
           }
       }
       cout<<endl;

   }  
  

}

int main(){
    int m,n;
    cin>>m>>n;
    hollowRectangel(m,n);
    return 0;
}
