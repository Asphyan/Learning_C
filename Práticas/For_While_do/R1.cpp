#include <stdio.h>

int main () {
	int x;
	
	for (int x=1; x <= 59; x=x+1 ) {
		if (x%2 == 0){
			printf("PPP%d: ", x);
		}
		if (x%2 != 0){
			printf("III%d: ", x);
		}
	}
	return 0;
}
