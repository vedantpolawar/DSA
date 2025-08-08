#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
  unordered_set<int> st;
  //in unorderd set every element must be unique but always remember that it is stored in a random way
  //time complexity of unorderes_set is O(1) and worst case O(n)
  //lower_bound and upper_bound function  does not work rest all functions are same as set;
  //better complexity than set in most case except some when collison happens
  return 0;
}