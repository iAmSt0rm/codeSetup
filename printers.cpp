#include<iostream>
#include<vector>
#include<string>

using namespace std;

template <typename T>
void print1DVector(vector<T> vec) {
  for (const auto &i : vec) {
    cout<<i<<" ";
  }

  cout<<endl;
  
}
template <typename T>
void print2DVector(vector<vector<T>> vec) {
  for (const auto &r : vec) {
    for (const auto &c : r) {
      cout<<c<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
}

void print1DVector(vector<int> vec) {
  for (const auto &i : vec) {
    cout<<i<<" ";
  }

  cout<<endl;
  
}
void print2DVector(vector<vector<int>> vec) {
  for (const auto &r : vec) {
    for (const auto &c : r) {
      cout<<c<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
}

