#include <stdio.h>     //调试正在运行的程序
#include <unistd.h>

int main(int argc, const char *argv[])
{
    while(1)    //这个地方局部变量变成了全局变量有点奇怪
	{
	    int i;
	    i++;
	    printf("%d \n", i);
	    sleep(1);
	}
	return 0;
}
