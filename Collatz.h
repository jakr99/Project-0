#ifndef COLLATZ_H
#define COLLATZ_H

void collatz_one_step(int &num) {
  if (num % 2 == 0) {
    num = num / 2;
  } else {
    num = (3 * num) + 1;
  }
}

int collatz_total_stopping_time(int num) {
  int t = 0;

  while (num != 1) {
    if (num % 2 == 0) {
      num = num / 2;
    } else {
      num = (3 * num) + 1;
    }
    t++;
  }

  return t;
}

#endif
