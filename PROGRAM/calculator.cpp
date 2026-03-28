#include <iostream>

int main() {
  char op;
  double num1, num2, result;

  std::cout << "\n" << "********** CALCULATOR **********" << "\n";

  std::cout << "Enter first number: ";
  std::cin >> num1;

  std::cout << "Enter second number: ";
  std::cin >> num2;

  std::cout << "Enter an operator: ";
  std::cin >> op;

  switch (op) {
    case '+':
      result = num1 + num2;
      std::cout << "--------------------------------" << "\n";
      std::cout << "The Result of " << num1 << " + " << num2 << " = " << result
                << "\n";
      break;
    case '-':
      result = num1 - num2;
      std::cout << "--------------------------------" << "\n";
      std::cout << "The Result of " << num1 << " - " << num2 << " = " << result
                << "\n";
      break;
    case 'x':
      result = num1 * num2;
      std::cout << "--------------------------------" << "\n";
      std::cout << "The Result of " << num1 << " x " << num2 << " = " << result
                << "\n";
      break;
    case '/':
      if (num2 == 0) {
        std::cout << "--------------------------------" << "\n";
        std::cout << "Error: Cannot divide by zero!" << "\n";
      } else {
        result = num1 / num2;
        std::cout << "--------------------------------" << "\n";
        std::cout << "The Result of " << num1 << " / " << num2 << " = "
                  << result << "\n";
      }
      break;
    default:
      std::cout << "--------------------------------" << "\n";
      std::cout << "That wasn't a valid operator" << "\n";
      break;
  }
  std::cout << "********************************" << "\n";

  return 0;
}