#include <iostream>
#include <sstream>
#include <limits>

int main(void) {
  int answer = 0;
  std::string s;

  while (std::getline(std::cin, s)) {
    std::istringstream iss(s);
    int n;
    int hi = 0;
    int lo = std::numeric_limits<int>::max();
    while (iss >> n) {
      if (n > hi) hi = n;
      else if (n < lo) lo = n;
    }
    answer += hi - lo;
  }

  std::cout << answer << "\n";
  return 0;
}

