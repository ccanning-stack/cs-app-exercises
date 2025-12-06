#inclue <stdio.h>

int any_ones_in_int(int x) {
    return !!x;
}

int any_zeros_in_int(int x) {
    return !!(~x);
}

int any_bit_in_lsb_equal_to_one(int x){
 return !!(x & 0xFF);
}

int any_bit_in_lsb_equal_to_zero(int x){
 return !!(~x & 0xFF);
}

int int_shifts_are_arthmetic(){
return (-1 >> 1) == -1;
}

unsigned srl(unsigned x, int k){
/* Perform shift arithmetically */

unsigned xsra = (int) x >> k;

return (unsigned) (~((~(-1 << k)) << ((sizeof(int)*8)-k))) & xsra;

}

int sra(int x, int k){
/* Perform shift logically */

int xsrl = (unsigned) x >> k;

int word_size = sizeof(int)*8;

int sign_mask = 1 << (word_size-1);

int sign_bit = !!(x & sign_mask);

int mask = -(sign_bit) << (word_size - k);

return mask | xsrl;
}

int any_odd_one(unsigned x) {
    return !!(x & 0xAAAAAAAA);
}

int main(int arc, char ** argv){

}
