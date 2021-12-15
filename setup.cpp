#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


//template based setup=====================================
template <typename T>
vector<T> read1DVector() {
  vector<T> vec;
  T a;
  while(cin>>a) {
    vec.push_back(a);
  }

  return vec;
}

template <typename T>
vector<T> read1DVectorWithSize(int size) {
  vector<T> vec;
  T input;
  for (int i = 0; i < size; i++) {
    cin>>input;
    vec.push_back(input);
  }
  return vec;
}


template <typename T>
vector<vector<T>> read2DVectorWithSize(int row, int column) {
  vector<vector<T>> vec2d(row, vector<T>(column));
  T input;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cin>>input;
      vec2d[i][j] = input;
    }
  }
  return vec2d;
}

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

// ==================================================

// Normal setup =====================================

// template <typename T>
// vector<T> read1DVector() {
//   vector<T> vec;
//   T a;
//   while(cin>>a) {
//     vec.push_back(a);
//   }

//   return vec;
// }

vector<int> read1DVectorWithSize(int size) {
  vector<int> vec;
  int input;
  for (int i = 0; i < size; i++) {
    cin>>input;
    vec.push_back(input);
  }
  return vec;
}

vector<vector<int>> read2DVectorWithSize(int row, int column) {
  vector<vector<int>> vec2d(row, vector<int>(column));
  int input;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cin>>input;
      vec2d[i][j] = input;
    }
  }
  return vec2d;
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

// =====================================================

// String Splitter Function  =====================================

// prev_pos -> previous position
// curr_pos -> current position

vector<string> split(string s, string separator) {
  int separator_length = separator.size();
  vector<string> splitContainer;

  int prev_pos = 0, curr_pos = 0; 

  while((curr_pos = s.find(separator, curr_pos)) != string::npos) {
    string sub_string(s.substr(prev_pos, curr_pos - prev_pos));
    splitContainer.push_back(sub_string);
    prev_pos = ++curr_pos + separator_length - 1;
  }

  splitContainer.push_back(s.substr(prev_pos, curr_pos-prev_pos));

  return splitContainer;
}

// =====================================================

// Comparators  =====================================

bool comparatorFunction (int a,int b) { return (a<b); }


struct comp {
  bool operator() (int a,int b) { return (a<b); }
}compara;

// Comparators Template  =====================================

template <typename T>
bool comparatorFunction(T a, T b) {
  return a<b;
}

template <typename T>
struct compTemplate {
  bool operator() (T a,T b) { return (a<b); }
};


int main() {
  // Template Usage
  // print1DVector<string>(read1DVectorWithSize<string>(2));

  // // Normal Usage
  // print1DVector(read1DVectorWithSize(2));

  // //String Splitter
  // string s = "Hello Hello! I am a programmer.";
  // print1DVector<string>(split(s, " "));

  vector<int> ivec {1,2,3,4,1};
  sort(ivec.begin(), ivec.end(), compTemplate<int>());
  sort(ivec.begin(), ivec.end(), comparatorFunction<int>);

  print1DVector<int>(ivec);

  return 0;
}