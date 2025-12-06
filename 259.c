#include <stdio.h>

int main(int argc, char ** argv){

	size_t x = 0x89ABCDEF;
	size_t y = 0x76543210;

	size_t number_bytes = sizeof(x);
	
	int i = 1;

	size_t result;
	size_t restOfY = 0;
	size_t lsb_x;

	if (((unsigned char *)&i)[0] == 1) {

	lsb_x = ((unsigned char *)&x)[0];

	for (size_t j= (number_bytes-1) ; j > 0; j--)
	{

		restOfY = (restOfY << 8) | ((unsigned char *)&y)[j];	
	}
		result = (restOfY << 8) | lsb_x;
	} else 
	{

	lsb_x = ((unsigned char *)&x)[(number_bytes-1)];
	for (size_t j=0; j < (number_bytes-1); j++)
	{
	restOfY = (restOfY << 8) | ((unsigned char *)&y)[j];

	}		
	result = (lsb_x << ((number_bytes-1) * 8)) | restOfY;
	}
	printf("0x%zX\n", result);
}
