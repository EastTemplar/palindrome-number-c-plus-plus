#include <iostream>

int input = 1442;

bool isPalindrome(int x) {
  if (x < 0) {
    return false;
  }

  if (x != 0 && x % 10 == 0) {
    return false;
  }

  int reverse = 0;

  while (x > reverse) {
    reverse = reverse * 10 + x % 10;
    x /= 10;
  }

  return (x == reverse) || (x == reverse / 10);
}

int main() {
  bool result = isPalindrome(input);
  std::cout << "Result: " << result;
  return 0;
}
