#include <stdio.h>
#include <string.h>
#include <errno.h>
#include "pc.h"

void usage()
{
	printf("Usage: program filename\n");
}

int pc_read(pc* t)
{
	return scanf("%s%d%s%d%s%d%s%d%d%d%d%s", t->surname,
											   &t->p,
											   t->ptype,
											   &t->s,
											   t->vtype,
											   &t->vs,
											   t->dtype,
											   &t->d,
											   &t->ds,
											   &t->i,
											   &t->o,
											   t->os) == 12;
}

int main(int argc, char* argv[])
{
	if(argc != 2)
	{
		usage();
		return 1;
	}
	pc t;
	FILE* out = fopen(argv[1], "wb");
	//FILE* inp = fopen("input.txt", "r");
	if(!out)
	{
		perror("Can`t open file");
		return 1;
	}
	puts("Enter the\n 1)surname\n2)processors` number\n3)processors` type\n4)storage volume\n5)video card`s type\n6)video card`s storage volume\n7)disks` type\n8)disks` number\n9)disks` storage volume\n10)integrated controllers` number\n11)external devices` nmber\n12)operating system\n");
	while(pc_read(&t))
	{
		fwrite(&t, sizeof(t), 1, out);
	}

	fclose(out);

	return 0;
}
