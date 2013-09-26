#include <stdio.h> #include <stdlib.h> #include <dirent.h> #include <string.h> #include <errno.h>int main(int argc, char *argv[]){
		int count = 0;        char buf[30];        DIR *dp;        struct dirent *dirp;        bzero(buf, sizeof(buf));        if (argc != 2) {                fprintf(stderr, "usage: ls1 <directory> <directory> <directory>\n");                exit(1);}        if ((dp = opendir(argv[1])) == NULL) {                strncpy(buf, "can't open ", sizeof("can't open "));                strcat(buf, argv[1]);                strcat(buf, "\n");                fprintf(stderr, buf);                exit(1);}
        
        
        while ((dirp = readdir(dp)) != NULL)
        { 
        	if(count < 3)
        	{
        	printf("%s\n", dirp->d_name);
        	count++;
        	}
        }
        closedir(dp);
    exit(0); }