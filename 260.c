#include <stdio.h>

void replace_byte(unsigned x, int i, unsigned char b){

unsigned char *px= (unsigned char *)&x;

px[i] = b;

printf("new unsigned value: 0x%X\n", x);

}



int main (int argc, char ** argv){

unsigned val = 0x12345678;       

replace_byte(val, 2, 0xAB);

return 0;

}

int odd_ones(unsigned x){

x ^= x >> 16;
x ^= x >> 8;
x ^= x >> 4;
x ^= x >> 2;
x ^= x >> 1;

return x & 1;

}


int leftmost_one(unsigned x){

	

}
