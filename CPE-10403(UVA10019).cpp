#include<iostream>
using namespace std;
int main(){
   int N;cin>>N;
   while(N--){
      int m;cin>>m
      int b1=0,b2=0;
      for(int v=m;v;v/=2) b1+=v%2;
      for(;m;m/=10){
         for(int v=m%10;v;v/=2) b2+=v%=2;
      }
      cout<<b1<<" "<<b2<<endl;
   }
   return 0;
}
