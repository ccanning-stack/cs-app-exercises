int int_size_is_32() {

unsigned set_msb = 1u << 15 << 16;

unsigned beyond_msb = set_msb << 1;

return set_msb && !beyond_msb;
}
