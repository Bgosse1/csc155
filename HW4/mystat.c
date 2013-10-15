#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	struct stat filestat;
	//int j;
	int i;
	char *temp;
	struct tm stuff;
	time_t t;
	//time_t curtime;
	//time(&curtime);
	
	//printf("Current Time = %s", ctime(&curtime));
	printf("Argument1: %s   Argument2: %s   Argument3: %s   Argument4: %s\n\n", argv[1], argv[2], argv[3], argv[4]);
	strptime(ctime(&filestat.st_mtime), "%a %b %d %H:%M:%S %Y", &stuff);
	//t = mktime(&stuff);
	//printf("seconds since the Epoch: %ld\n", (long) t);
	//printf("year: %d, month: %d, day: %d \n", stuff.tm_year+1900, stuff.tm_mon, stuff.tm_mday);
	if(argc == 4){
	for (i = 1; i < argc; i++){
		printf("%s: was Modified on: %s", argv[i], ctime(&filestat.st_mtime));
		strptime(ctime(&filestat.st_mtime), "%a %b %d %H:%M:%S %Y", &stuff);
		printf("year: %d, month: %d, day: %d\n", stuff.tm_year+1900, stuff.tm_mon, stuff.tm_mday);
		t = mktime(&stuff);
		printf("seconds since the Epoch: %ld\n\n", (long) t);
		//printf("%s Last Modifacation was on:	%s\n", argv[i], ctime(&filestat.st_mtime));
		if(stat(argv[i], &filestat) < 0){
			return(1);
		}
		//printf("%s Last Modifacation was on:	%s\n", argv[i], ctime(&filestat.st_mtime));
		if (ctime(&filestat.st_mtime) > temp){
			temp = ctime(&filestat.st_mtime);
			//printf(temp);
		}
		//printf(temp);
		//printf("%s is the file with the most recent date \n", temp);
	}

	}		
		//printf(temp);
		//printf("%s is the file with the most recent date \n", temp);
	//printf("The file that was last modified is:	%s", temp);
	/*
	for(i = 1; i < argc; i++){		
		printf("\nLast file modification for I %s: was %s\n", argv[i], ctime(&filestat.st_mtime));
		char *temp = ctime(&filestat.st_mtime);
		for(j = 2; j < argc; j++){
		printf("\nLast file modification for J %s: was %s\n", argv[j], ctime(&filestat.st_mtime));

		//printf("%s: \n", argv[i]);
		//printf("%s: \n", argv[1]);
		//printf("%s: \n", argv[2]);
		//printf("%s: \n", argv[3]);
		//printf("%s: \n", argv[4]);
		//printf("Last file modification:   %s: %s", ctime(&filestat.st_mtime), argv[i]);
		char *DateMod1 = ctime(&filestat.st_mtime); 

		//printf(DateMod1);

		if(temp < DateMod1){
			printf("hahahaah");
		}

		
		if(argv[i] < argv[j]){
			printf("Argument i: %s  <  Argument j: %s", argv[i], argv[j]);
			j++;
		}
		else if(argv[i] > argv[j]){
			printf("Argument i: %s  >  Argument j: %s", argv[i], argv[j]);
			j++;
		}
		else if(argv[i] = argv[j]){
			printf("Argument i: %s  =  Argument j: %s", argv[i], argv[j]);
			j++;
		}
		/*
		else{
			i++;
		}
		*/
		//printf("\nLast file modification for I %s: was %s\n", argv[i], ctime(&filestat.st_mtime));
		//printf("\nLast file modification for J %s: was %s\n", argv[j], ctime(&filestat.st_mtime));
		
		//if(stat(argv[i], &filestat) < 0){
		//	return(1);
		//}

		//printf("modification:   %s", ctime(&filestat.st_mtime));
		//}
	//}
		
}






