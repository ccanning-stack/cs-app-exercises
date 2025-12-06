#include <stdio.h>
#include <assert.h>

unsigned rotate_left(unsigned x, int n) {
    int w = sizeof(int) << 3;                 // Compute word size (e.g. 32)
    int safe_shift = (~n + 1) & (w - 1);      // Compute (w - n) % w safely
    return (x << n) | (x >> safe_shift);
}

int main(int argc, char *argv[]) {
  assert(rotate_left(0x12345678, 4) == 0x23456781);
  assert(rotate_left(0x12345678, 20) == 0x67812345);
  assert(rotate_left(0x12345678, 0) == 0x12345678);
  return 0;
}
