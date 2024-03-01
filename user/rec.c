#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"
#include "kernel/fs.h"


int
main(int argc, char *argv[])
{
	if(argc<2)
	{
		printf("Neispravno koriscenje rec-a");
		exit();
	}
	int n=rec(argv[1]);
	if(n==0)
		printf("Uspesan oporavak\n");
	else if(n==-1)
	{
		printf("Losa putanj za direktorijum koji sadrzi obrisanu datoteku\n");
	}
	else if(n==-2)
	{
		printf("Datoteka nije pronadjena u direktorijumu u kojem je trazena\n");
	}
	else if(n==-3)
	{
		printf("Inode datoteka je iskoriscen za nesto drugo\n");
	}
	else if(n==-4)
	{
		printf("Bilo koji od blokova datoteke je iskoriscne za nesto drugo\n");
	}
	exit();
}
