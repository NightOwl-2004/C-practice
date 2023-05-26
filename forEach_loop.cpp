#include <iostream>
using namespace std;

int main() {
  int num[8] = {10, 20, 30, 40, 50,60,70,80};
  //! ForEach loop in C++
  for (int i : num) {
   cout << i << endl;
  }
  return 0;
}