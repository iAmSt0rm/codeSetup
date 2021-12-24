#include<iostream>
#include<vector>
#include<algorithm>
#include "printers.cpp"

using namespace std;

// Comparators  =====================================

bool comparatorFunction (int a,int b) { return (a<b); }


struct comp {
  bool operator() (int a,int b) { return (a<b); }
};

// Comparator Templates  =====================================

template <typename T>
bool comparatorFunctionTemplate(T a, T b) {
  return a<b;
}

template <typename T>
struct compTemplate {
  bool operator() (T a,T b) { return (a<b); }
};

int main () {
  vector<int> ivec {1,2,3,4,1};
  sort(ivec.begin(), ivec.end(), comp());
  sort(ivec.begin(), ivec.end(), comparatorFunction);

  // sort(ivec.begin(), ivec.end(), compTemplate<int>());
  // sort(ivec.begin(), ivec.end(), comparatorFunctionTemplate<int>);

  print1DVector<int>(ivec);
}