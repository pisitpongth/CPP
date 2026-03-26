#include <iostream>

int main() {
  int x;
  std::cout << "Enter a number: ";
  std::cin >> x;

  int y = 10;
  int sum = x + y;

  std::cout << "The result of " << x << " + " << y << " = " << sum << std::endl;

  return 0;
}