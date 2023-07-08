#include <iostream>

int main() {
  std::string name;

  std::cout << "What\"s your name" << '\n';
  std::cin >> name;
  std::cout << "You\'re " << name << '\n';

  return 0;
}