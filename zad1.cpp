#include <iostream>

int main() {
  int a, b, c, d;

  std::cout << "Unesi prvi broj: ";
  std::cin >> a;

  std::cout << "Unesi drugi broj: ";
  std::cin >> b;

  c = a + b;
  d = a / b;

  std::cout << "Zbroj je: " << c << std::endl;
  std::cout << "Kvocijent je: " << d << std::endl;
}