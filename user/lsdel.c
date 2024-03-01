#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"
#include "kernel/fs.h"



int
main(int argc, char *argv[])
{
	char *p=malloc(64*(DIRSIZ+1)*sizeof(char));
	if(argc < 2)
		lsdel(".",p);
	else {
		lsdel(argv[1],p);
		//fprintf("%s\n",argv[1]);
	}
	if(strcmp(p,"")!=0)
	printf("%s\n",p);
	else
	printf("Ne postoji nista da se obnovi\n");
	exit();
}
