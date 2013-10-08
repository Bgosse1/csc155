#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
	int i;
	struct stat sb;
	
	for (i = 1; i < argc; i++) {
		printf("%s: \n", argv[i]);
			
	}

	if (stat(argv[1], &sb) < 0) {
	        return(1);
	}

   
    	printf("Last file modification:   %s", ctime(&sb.st_mtime));

   	exit(0);
}
