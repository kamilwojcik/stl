#include "arithmeticAverage.hpp"
#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
  vector<double> v1{1, 2, 3, 4};
  vector<double> v2{1, 2, 3, 4};
  vector<double> v3{7, 4, 3};
  vector<double> v4{17, 6, 2};
  cout << "ArithmeticAverage(v1,v2): " << ArithmeticAverage(v1, v2) << endl;
  cout << "Distance(v3,v4): " << Distance(v3, v4) << endl;
  return 0;
}