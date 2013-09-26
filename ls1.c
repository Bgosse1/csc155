#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[])
{
        char buf[30];
        DIR *dp;
        struct dirent *dirp;
        bzero(buf, sizeof(buf));
        if (argc != 2) {
                fprintf(stderr, "usage: ls1 <directory>\n");
                exit(1);
}
        if ((dp = opendir(argv[1])) == NULL) {
                strncpy(buf, "can't open ", sizeof("can't open "));
                strcat(buf, argv[1]);
                strcat(buf, "\n");
                fprintf(stderr, buf);
                exit(1);
}
        while ((dirp = readdir(dp)) != NULL)
                printf("%s\n", dirp­>d_name);
        closedir(dp);
exit(0); 
} 

 
