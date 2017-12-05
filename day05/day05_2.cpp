#include <iostream>
#include <vector>
#include <iterator>

int main(void) {
  std::vector<int> instr{std::istream_iterator<int>(std::cin), {}};
  int i = 0;
  int step = 0;
  int size = instr.size();
  while (true) {
    if (i < 0 || i >= size) {
      break;
    }
    if (instr[i] >= 3) {
      i += instr[i]--;
    } else {
      i += instr[i]++;
    }
    step++;
  }
  std::cout << step << "\n";
  return 0;
}

