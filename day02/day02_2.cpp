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
        int b = (n > i) ? n : i;
        int s = (n < i) ? n : i;
        if (b % s == 0) {
          answer += b / s;
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

