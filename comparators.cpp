#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// Comparators  =====================================

bool comparatorFunction (int a,int b) { return (a<b); }


struct comp {
  bool operator() (int a,int b) { return (a<b); }
}compara;

// Comparator Templates  =====================================

template <typename T>
bool comparatorFunction(T a, T b) {
  return a<b;
}

template <typename T>
struct compTemplate {
  bool operator() (T a,T b) { return (a<b); }
};

int main () {
  vector<int> ivec {1,2,3,4,1};
  sort(ivec.begin(), ivec.end(), compTemplate<int>());
  sort(ivec.begin(), ivec.end(), comparatorFunction<int>);

  print1DVector<int>(ivec);
}