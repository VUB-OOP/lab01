#include <iostream>
#define N 5

void prikaziPolje(int polje[], int n) {
  for (int i = 0; i < n - 1; i++) {
    std::cout << polje[i] << ", ";
  }
  std::cout << polje[N-1] << std::endl;
}

void prikaziPolje(double polje[], int n) {
  for (int i = 0; i < n - 1; i++) {
    std::cout << polje[i] << ", ";
  }
  std::cout << polje[N-1] << std::endl;
}

int main() {
  int polje[N] = {1, 2, 3, 4, 5};
  double poljeDecimalno[N] = {1.1, 2.2, 3.3, 4.4, 5.5};

  prikaziPolje(polje, N);
  prikaziPolje(poljeDecimalno, N);

  return 0;
}