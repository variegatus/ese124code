#include <stdio.h>

int main () {
	unsigned char a;    // char a; 1 byte
	unsigned short b;   // 2 bytes
	
	// a = 0x41;
	
	printf ("a = ");
	scanf ("%x", &a);
	
	printf ("a = %c\n", a);
	
	a = a & 0xFC;  // resets the last bit of a
	printf ("a = %x\n", a);
	
	a = a | 0x02;
	printf ("a = %c\n", a);
	
}
