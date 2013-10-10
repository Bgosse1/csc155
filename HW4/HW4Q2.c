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
	//if (argc == 4){
		for (i = 1; i < argc; i++) {
			printf("%s: \n", argv[i]);
			printf("balls=    %s \n", ctime(&sb.st_mtime));
			printf("argv[1]=    %s \n", argv[1]);
			printf("argv[2]=    %s \n", argv[2]);
			printf("argv[3]=    %s \n", argv[2]);
			printf("Last file modification:   %s", ctime(&sb.st_mtime));			
			printf("test2:   %s", ctime(&sb.st_mtime));

			//printf("stat test:	%s\n", stat(argv[1], &sb));
			if (stat(argv[i], &sb) < 0)
		        	return(1);
			
			else
				printf("test:   %s", ctime(&sb.st_mtime));
				printf("Last file modification:   %s", ctime(&sb.st_mtime));
		}
	//}

   
    	//printf("Last file modification:   %s", ctime(&sb.st_mtime));

   	exit(0);
}
