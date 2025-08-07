#include<iostream>
#include<set>
using namespace std;
int main(){
  set<int>st;
  st.insert(1);//{1}
  st.insert(2);//{1,2}
  st.emplace(4);//{1,2,4}
  st.insert(3);//{1,2,3,4} always stores unique values in a sorted manner
  //functionality of insert in vector 
  // can be used als, that only increases efficiency
  //begin(),end(),rbegin(),rend(),size(),
  //empty() and swap() are same as those of above
  //{1,2,3,4,5}
  auto it=st.find(3);
  //auto it=st.find(6);
 // so if when we use find and element is present then   auto it=st.find(3); will return an iterator that give add of 3 (points 3) if it is   //auto it=st.find(6) here 6 does not exist so it will point the last ember within the set;
  cout<<*(it);
  st.erase(5);// erases 5//takes logarithmic time
  int cnt =st.count(1);// it will return 0if doesnt exist and 1 if it exist as only one element can be their

  auto it=st.find(3);
  st.erase(it);//it takes constant time
  auto it1=st.find(2);
  auto it2=st.find(4);
  st.erase(it1,it2);//after erase {1,4,5} [first,last)
  //lower_bound() and upper_bound() function works in the same way as in vector it does
  // this is the syntax
  auto it =st.lower_bound(2);
  auto it =st.upper_bound(3);


}