#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main(void)
{
	FILE f;

	f = fopen("test.txt", O_RDONLY);

	while (read(f, &num, sizeof(num)))
		printf("numero 1: %d\n", num);

	close(f);
	exit(0);
}