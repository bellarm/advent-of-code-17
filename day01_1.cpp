#include <iostream>
#include <string>

int main(void) {
  std::string s;
  std::cin >> s;
  int sum = 0;
  char prev = s[0];
  for (unsigned i = 1; i < s.size(); ++i) {
    char cur = s[i];
    if (prev == cur)
      sum += (cur - '0');
    prev = cur;
  }
  if (prev == s[0])
    sum += prev - '0';
  std::cout << sum << "\n";
  return 0;
}

