#include <stdio.h>

void print()
{
    printf("hello gdb \n");
}

int main(int argc, const char *argv[])
{
    int i;
    for(i=0;i<5;i++)
	printf("%d \n", i);
    print();
    return 0;
} 
