#include <iostream>

int main() {

  int a = 10;
  a += 1;
  std::cout << a << '\n';
  a -= 1;
  std::cout << a << '\n';
  a *= 2;
  std::cout << a << '\n';
  a /= 2;
  std::cout << a << '\n';

  return 0;
}

/* 
11
10
20
10
*/