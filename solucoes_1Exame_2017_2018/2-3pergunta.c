#include <stdio.h>

#define FOO(x) (2*x-x)

int main() 
{
	int x = 9;
	int y = 16;
	int z = 22;

	while(--y > z-x) {
		x--;
		z += 2;
	}
	printf("%d %d\n",y,z);

    int val = 10;
    printf("%d\n", FOO(val+5));
}
