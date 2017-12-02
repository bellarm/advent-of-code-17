#include <iostream>
#include <sstream>
#include <vector>

int main(void) {
  int answer = 0;
  std::string s;

  while (std::getline(std::cin, s)) {
    std::vector<int> nums;
    std::istringstream iss(s);
    int n;
    bool flag = false;
    while (iss >> n) {
      if (flag) break;
      for (auto i: nums) {
        if (n % i == 0) {
          answer += n / i;
          flag = true;
          break;
        }
        if (i % n == 0) {
          answer += i / n;
          flag = true;
          break;
        }
      }
      nums.push_back(n);
    }
  }

  std::cout << answer << "\n";
  return 0;
}

