#include <stdio.h>      //调试多进程
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t id = fork();
    if(id == 0)
    {
	printf("i am child, pid=%d,ppid=%d\n",getpid(),getppid());
	int i;
	for(i=0;i<10;i++)
	{
	    printf("child i = %d\n",i);
	}
	exit(1);   //退出进程
    }
    else
    {
	int i;
	sleep(1);
	printf("i am parent,pid=%d,ppid=%d\n",getpid(),getppid());
	for(i=0;i<10;i++)
	{
	    printf("parent i= %d\n",i);
	}
	if(wait(NULL) !=-1)   //等待子进程结束回收其资源
	{
	    printf("wait success\n");
	}
    }
    return 0;
}
