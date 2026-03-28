#include <iostream>

class Character {
 public:
  std::string name;

  void eat() { std::cout << this->name << " is eating." << "\n"; }

  void drink() { std::cout << this->name << " is drinking." << "\n"; }
};

int main() {
  Character character1;
  Character character2;

  character1.name = "Takemichi";
  character2.name = "Hinata";

  character1.eat();
  character1.drink();

  character2.eat();
  character2.drink();

  return 0;
}