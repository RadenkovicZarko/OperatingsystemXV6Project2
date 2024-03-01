#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"
#include "kernel/fs.h"




int
main(int argc, char *argv[])
{
	int fd=open(argv[1],0x002|0x200);

	char* ch=argv[2];
	int n=atoi(ch);
	char pom[n];
	memset(pom,'a',n);
	while(write(fd,pom,n)==0);
	
	exit();
}
