#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

#define MAXLINE 80


int main(void)
{
    char buf[MAXLINE];
    pid_t pid;
    int status;
	char *cmd;
	int count;
    char *args[] = {buf, NULL};
    
    printf("%% ");
    while (fgets(buf, MAXLINE, stdin) != NULL) {        
        cmd = strtok(buf, " ");
        while (cmd != NULL)
  		{
  			//printf("lalal: ", args[2]);
    		printf ("%s\n",cmd);
    		cmd = strtok (NULL, " ");
    	
  		}
  		if((cmd, "exit")==0){
  			exit(0);
  		}
       	
        if (buf[strlen(buf) - 1] == '\n')
            buf[strlen(buf) - 1] = 0;  /* replace newline with null */        
        if ((pid = fork()) < 0) {
            perror("fork");
        } else if (pid == 0) {  /* child */
            execvp(cmd, &cmd);
            perror("Some sort of exec error");
            //execlp(buf, buf, (char *)0);
            printf("Couldn't execute: %s", buf);
            exit(127);
        }
    
        /* parent */
        if ((pid  = waitpid(pid, &status, 0)) < 0)
            //execvp(*args[0], *args);
            perror("waitpid");
        printf("Shell: ");
    }
    exit(0);
}


/*
void ParseCmd(int argc, char *argv[])
{
	int count;
	
	for(count = 1; count < argc; count++){
		printf("argv[%d] %s\n", count, argv[count]);
	}
	return;
}
*/