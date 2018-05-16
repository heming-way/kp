#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "pc.h"

void usage()
{
	printf("Usage: filename");
}

int main(int argc, char* argv[])
{
	if(argc != 2)
	{
		usage();
		return 1;
	}
	pc t;
	FILE* in = fopen(argv[1], "r");
	if(!in)
	{
		perror("Can`t open file");
		return 2;
	}
	while(fread(&t, sizeof(t), 1, in) == 1)
	{
		if((strcmp(t.ptype,"x86") != 0) || (strcmp(t.os,"windows") != 0))
		{
			printf("surname: %s\nprocessors` number: %d\nprocessors` type: %s\nstorage volume: %d\nvideo card`s type: %s\nvideo card`s storage volume: %d\ndisks` type: %s\ndisks` number: %d\ndisks` storage volume: %d\nintegrated controllers` number: %d\nexternal devices` number: %d\noperating system: %s\n",t.surname,
				t.p,
				t.ptype,
				t.s,
				t.vtype,
				t.vs,
				t.dtype,
				t.d,
				t.ds,
				t.i,
				t.o,
				t.os);
		}
	}
	return 0;
}
