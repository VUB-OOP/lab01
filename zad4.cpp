#include <iostream>

void brojevi(int n = 5) {
  for (int i = 0; i <= n; ++i) {
    for (int j = 0; j < i; ++j) {
      std::cout << j + 1;
    }
    for (int k = i; k < n; ++k) {
      std::cout << '*';
    }
    std::cout << std::endl;
  }
}

int main() {
  int n = -1;

  while (n < 1 || n > 10) {
    std::cout << "Unesite prirodan broj do 10: ";
    std::cin >> n;
  }

  brojevi();
  brojevi(n);

  return 0;
}