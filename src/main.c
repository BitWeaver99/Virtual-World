#include <stdlib.h>
#include <stdio.h>

#include "config/config.h"

int main(int argc, char **argv)
{
	printf("Welcome to Virtual World [v%s]\n", VIRTUAL_WORLD_VERSION); 
	return EXIT_SUCCESS;
}
