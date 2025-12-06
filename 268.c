int lower_one_mask(int n){

	int mask = 1 << (n-1);
	mask = mask << 1;

	return mask - 1;

};
