#include<iostream>
using namespace std;
void TOH(int n,char a,char b, char c){
  if (n>0){
    TOH(n-1,a,b,c);
    cout<<"Move a disc from "<<a <<"->"<< c<<endl;
    TOH(n-1,b,a,c);
  }
}
int main(){
  TOH(3,'a','b','c');
return 0;
}