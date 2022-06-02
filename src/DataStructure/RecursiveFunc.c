#include <stdio.h>

void Recursive(int num) {
	if (num <= 0)	// Àç±ÍÀÇ Å»ÃâÁ¶°Ç
		return;		// Àç±ÍÀÇ Å»Ãâ!
	printf("Recursive call! %d \n", num);
	Recursive(num - 1);
}

int main(void) {
	Recursive(3);
}