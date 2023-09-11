#include "Collatz.h"
#include <iostream>
using namespace std;

// Work on Collatz.h first before proceeding
int main() {
  /*
  Write your code below to complete the assignment
  Check README.md for details
  Match formatting to the sample I/O provided
  Type command "./grade.sh" in the terminal to check your progress
  */
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;

    int t = collatz_total_stopping_time(num);
    cout << "Total stopping time of " << t << endl;
  }

  return 0;
}
