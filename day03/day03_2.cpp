#include <iostream>
#include <array>
#include <iomanip>

enum Direction {u, r, d, l};

int main(void) {
  unsigned input = 265149;
  // size just ceiling of sqrt of input
  const unsigned size = 515;
  std::array<std::array<unsigned, size>, size> box = {0};
  unsigned mid = size/2;

  // starting position
  unsigned i = mid;
  unsigned j = mid;
  box[i][j] = 1;
  unsigned n = 0;
  unsigned cur_level = 1;
  unsigned max = size * size;
  Direction dir = r;
  while (true) {
    unsigned sum = 0;
    // get sum from the neighbour
    if (i != 0)
      sum += box[i-1][j];
    if (j != 0)
      sum += box[i][j-1];
    if (i != size-1)
      sum += box[i+1][j];
    if (i != size-1)
      sum += box[i][j+1];
    if (i != 0 && j != 0)
      sum += box[i-1][j-1];
    if (i != size - 1 && j != 0)
      sum += box[i+1][j-1];
    if (i != size - 1 && j != size - 1)
      sum += box[i+1][j+1];
    if (i != 0 && j != size - 1)
      sum += box[i-1][j+1];

    box[i][j] += sum;
    ++n;
    
    if (i == mid + cur_level - 1 && j == mid + cur_level - 1)
      ++cur_level;

    switch (dir) {
      case u: --i; break;
      case r: ++j; break;
      case d: ++i; break;
      case l: --j; break;
    }

    if (i >= mid + cur_level - 1 && j != size-1)
      dir = r;
    else if (dir == u && i <= mid - cur_level + 1 && j != 0)
      dir = l;
    else if (j >= mid + cur_level - 1 && i != 0)
      dir = u;
    else if (j <= mid - cur_level + 1 && i != size-1)
      dir = d;

    if (n >= max) break;
    if (sum > input) {
      std::cout << "sum is " << sum << "\n";
      break;
    }
  }

  /*
  for (auto x: box) {
    for (auto y: x) {
      std::cout << std::setfill(' ') << std::setw(9) << y << " "; 
    }
    std::cout << "\n";
  }
  */
  return 0;
}

