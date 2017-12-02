#include <iostream>

int main(void) {
  std::string s;
  std::cin >> s;
  int sum = 0;
  unsigned size = s.size();
  unsigned half = size / 2;
  for (unsigned i = 0; i < size; ++i) {
    char cur = s[i];
    char nex = s[(i+half) % size];
    if (nex == cur)
      sum += (cur - '0');
  }
  std::cout << sum << "\n";
  return 0;
}

