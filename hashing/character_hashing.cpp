#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cout<<"Enter The String : ";
  cin>>s;
  //precompute
  int hash[256]={0};
  for(int i=0;i<s.size();i++){
    hash[s[i]]+=1;
  }
  int q;
  cout<<"Enter HOw many elements you need to check : ";
  cin>>q;
  while (q--){
    char c;
    cout<<"Enter which character you nedd to check : ";
    cin>>c;
    //fetch
    cout<<hash[c]<<endl;
  }

  return 0;
}
//if we need to create a character hash for small alphabets
//int hash[27]={0};
//for(int i=0;i<s.size();i++){
//    hash[s[i]-'a']+=1;
//  }
//cout<<hash[c-'a]<<endl;
//similary for capital alphabets use 97 and if we want all asscii char then just use 256
