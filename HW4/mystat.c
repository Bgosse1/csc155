#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	struct stat filestat;
	int j;
	int i;
	
	
	printf("Argument1: %s	Argument2: %s	Argument3: %s	Argument4: %s\n", argv[1], argv[2], argv[3], argv[4]);
	for(i = 1; i < argc; i++){		
		printf("\nLast file modification for I %s: was %s\n", argv[i], ctime(&filestat.st_mtime));
		char *temp = ctime(&filestat.st_mtime);
		for(j = 2; j < argc; j++){
		//printf("%s: \n", argv[i]);
		//printf("%s: \n", argv[1]);
		//printf("%s: \n", argv[2]);
		//printf("%s: \n", argv[3]);
		//printf("%s: \n", argv[4]);
		//printf("Last file modification:   %s: %s", ctime(&filestat.st_mtime), argv[i]);
		char *DateMod1 = ctime(&filestat.st_mtime); 

		//printf(DateMod1);

		
		/*
		if(argv[i] < argv[j]){
			printf("gsgsg");
			j++;
		}
		else{
			i++;
		}
		*/
		//printf("\nLast file modification for I %s: was %s\n", argv[i], ctime(&filestat.st_mtime));
		printf("\nLast file modification for J %s: was %s\n", argv[j], ctime(&filestat.st_mtime));
		
		if(stat(argv[i], &filestat) < 0){
			return(1);
		}

		//printf("modification:   %s", ctime(&filestat.st_mtime));
		}
	}
		
}






