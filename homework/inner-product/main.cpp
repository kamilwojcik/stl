#include <cmath>
#include <iostream>
#include "arithmeticAverage.hpp"

using namespace std;

int main(void) {
    vector<int> v1{1, 2, 3, 4};
    vector<int> v2{1, 2, 3, 4};
    vector<int> v3{7, 4, 3};
    vector<int> v4{17, 6, 2};
    cout << "ArithmeticAverage(v1,v2): " << ArithmeticAverage(v1, v2) << endl;
    cout << "Distance(v3,v4): " << Distance(v3, v4) << endl;
    return 0;
}
