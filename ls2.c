#include <stdio.h> 
		int count = 0;
        
        
        while ((dirp = readdir(dp)) != NULL)
        { 
        	if(count < 3)
        	{
        	printf("%s\n", dirp->d_name);
        	count++;
        	}
        }
        closedir(dp);
    