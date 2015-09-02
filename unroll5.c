#include <stdio.h>

int main(void) {

	float a;
	float b[10000000];
	float c[10000000];
	
	int i = 0;

	a = 0;
	
	/* Initialize data	*/
	for(i=0; i<10000000; i+=5) {
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
	}

	/* Run MAC */ 
	for(i=0; i<10000000; i+=5) {
		a = a + b[i] * c[i];
		a = a + b[i+1] * c[i+1];
		a = a + b[i+2] * c[i+2];
		a = a + b[i+3] * c[i+3];
		a = a + b[i+4] * c[i+4];
	}
	
}

