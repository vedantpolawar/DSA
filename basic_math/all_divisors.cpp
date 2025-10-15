#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     if(n%i==0){
//         cout<<i;
//     }
//   }
//   return 0;
// } time complexity of code is O(n);

int main(){
  int n;
  vector<int> ls;
  cin>>n;
  //6*6<=36
  //7*7<=36v false
  //complexity is O(sqrt(n))
  for(int i=1;i*i<=n;i++){//as sqrt is function so it increases time so we can use i*i;
    if (n%i==0){
      ls.push_back(i);
      if((n/i)!=i){
        ls.push_back(n/i);
      }
    }
  }
  //sorting time complexity is O(no of factors*log(n)) n is the number if factors
  sort(ls.begin(),ls.end());
  //loop complexiy is O(n)
  for(auto ls:ls)cout<<ls<<"\t";
  return 0;
}