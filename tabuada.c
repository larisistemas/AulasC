#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int i = 0, tabuada = 2;
	
	while(i <= 10){
		printf("%i x %i = %i\n",tabuada,i,tabuada*i);
		i = i + 1;
	}
}
