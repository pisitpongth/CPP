#include <iostream>
using namespace std;

int main() {
  int score;

  cout << "Enter your score: ";
  cin >> score;

  if (score >= 80) {
    cout << "You got grade A!";
  } else if (score >= 70) {
    cout << "You got grade B!";
  } else if (score >= 60) {
    cout << "You got grade C!";
  } else if (score >= 50) {
    cout << "You got grade D!";
  } else {
    cout << "You failed!";
  }

  return 0;
}