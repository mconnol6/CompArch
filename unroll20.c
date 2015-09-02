#include <stdio.h>

int main(void) {

	float a;
	float b[10000000];
	float c[10000000];
	
	int i = 0;

	a = 0;
	
	/* Initialize data	*/
	for(i=0; i<10000000; i+=20) {
		b[i] = rand();
		c[i] = rand();
		b[i+1] = rand();
		c[i+1] = rand();
		b[i+2] = rand();
		c[i+2] = rand();
		b[i+3] = rand();
		c[i+3] = rand();
		b[i+4] = rand();
		c[i+4] = rand();
		b[i+5] = rand();
		c[i+5] = rand();
		b[i+6] = rand();
		c[i+6] = rand();
		b[i+7] = rand();
		c[i+7] = rand();
		b[i+8] = rand();
		c[i+8] = rand();
		b[i+9] = rand();
		c[i+9] = rand();
		b[i+10] = rand();
		c[i+10] = rand();
		b[i+11] = rand();
		c[i+11] = rand();
		b[i+12] = rand();
		c[i+12] = rand();
		b[i+13] = rand();
		c[i+13] = rand();
		b[i+14] = rand();
		c[i+14] = rand();
		b[i+15] = rand();
		c[i+15] = rand();
		b[i+16] = rand();
		c[i+16] = rand();
		b[i+17] = rand();
		c[i+17] = rand();
		b[i+18] = rand();
		c[i+18] = rand();
		b[i+19] = rand();
		c[i+19] = rand();
	}

	/* Run MAC */ 
	for(i=0; i<10000000; i+=20) {
		a = a + b[i] * c[i];
		a = a + b[i+1] * c[i+1];
		a = a + b[i+2] * c[i+2];
		a = a + b[i+3] * c[i+3];
		a = a + b[i+4] * c[i+4];
		a = a + b[i+5] * c[i+5];
		a = a + b[i+6] * c[i+6];
		a = a + b[i+7] * c[i+7];
		a = a + b[i+8] * c[i+8];
		a = a + b[i+9] * c[i+9];
		a = a + b[i+10] * c[i+10];
		a = a + b[i+11] * c[i+11];
		a = a + b[i+12] * c[i+12];
		a = a + b[i+13] * c[i+13];
		a = a + b[i+14] * c[i+14];
		a = a + b[i+15] * c[i+15];
		a = a + b[i+16] * c[i+16];
		a = a + b[i+17] * c[i+17];
		a = a + b[i+18] * c[i+18];
		a = a + b[i+19] * c[i+19];
	}
	
}

