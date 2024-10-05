#include <iostream>
#define N 5

void prikaziPolje(int polje[], int n, const char separator = ',') {
  for (int i = 0; i < n - 1; i++) {
    std::cout << polje[i] << separator;
  }
  std::cout << polje[n-1] << std::endl;
}

void prikaziPolje(double polje[], int n, const char separator = ',') {
  for (int i = 0; i < n - 1; i++) {
    std::cout << polje[i] << separator;
  }
  std::cout << polje[n-1] << std::endl;
}

int main() {
  int polje[N] = {1, 2, 3, 4, 5};
  double poljeDecimalno[N] = {1.1, 2.2, 3.3, 4.4, 5.5};

  prikaziPolje(polje, N);
  prikaziPolje(poljeDecimalno, N);
  prikaziPolje(polje, N, '-');
  prikaziPolje(poljeDecimalno, N, '|');

  return 0;
}