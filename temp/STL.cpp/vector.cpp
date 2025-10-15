#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int>v;
  v.push_back(1);
  v.emplace_back(2);
  cout<<v[1];
  vector<pair<int,int>> vec;
  vec.push_back({1,2});
  vec.emplace_back(1,2);//faster, no need of pairing like what we have done in push_back

  vector<int> v3(5,100);//
  vector<int>v4(5);//creating vector of size 5
  vector<int>v1(5,20);//printing 20 5 times
  vector<int>v2(v1);//to copy v1 into v2;
// iterators
vector<int>::iterator it=v.begin();//can use v.end(),v.rend(),v.rbegin()
it++;
cout<<*(it)<<" ";//iterator points memory address in it so to print value within it just *
for(vector<int>::iterator it =v.begin();it !=v.end();it++){
  cout<<*(it)<<" ";
}
for(auto it=v.begin();it!=v.end();it++){
  cout<<*(it)<<" ";
}
//using for each
for(auto it:v){
  cout<<it<<" ";
}
// erase something within the vector
// let a vector be {10,20,12,30,35}
v.erase(v.begin()+1);//v.begin point add of 10. add of 10+1=20
//output {10,12,30}
v.erase(v.begin()+2,v.begin()+4);//[start,end)
//output{10,20,35}

// INSERT FUNCTION
vector<int>v(2,100);//{100,100};
v.insert(v.begin(),300);//{300,100,100}
v.insert(v.begin()+1,2,10);//{300,10,10,100,100}


//copying one vector in to other
vector<int> copy(2,50);//{50,50}
v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}

//some more method
// {10,20}
cout<<v.size();//2
v.pop_back();//{10}
//v1->{10,20}
//v2->{30,40}
v1.swap(v2);//v1->{30,40},v2->{10,20}
v.clear();//erase the entire vector
cout<<v.empty();//checks wheater vector is empty or not if empty then true else: false
  return 0;

}