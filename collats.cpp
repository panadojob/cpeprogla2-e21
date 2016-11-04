#include <iostream>
#include <fstream>
  using namespace std;
int main() {
  int x, y, greatest, num, x2, y2, c;
  ifstream f("input.txt");
  while (f >> x >> y) {
    greatest = 0;
    num = 0;
    for (int i = x; i <= y; i++) {
      greatest = 0;
      c = i;
      while (c != 1) {
        if (c % 2 == 1) {
          c = c * 3 + 1;
          greatest++;
        } else {
          c /= 2;
          greatest++;
        }
      }
      greatest++;
      if (greatest > num) num = greatest;
    }
    cout << x << " " << y << " " << num << "\n";
  }
}
