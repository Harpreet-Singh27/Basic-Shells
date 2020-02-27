#include <stdio.h>
#include <unistd.h>
#include <sys/types.h> 
int main()
{

    int counter = 0;
    int pid = fork();

    if (pid == 0)
    {
        
        int i = 0;
        for (; i < 5; ++i)
        {
            write(1,"child\n",6);
            sleep(1);
        }
    }
    else if (pid > 0)
    {
      
        int j = 0;
        for (; j < 5; ++j)
        {
            write(1,"parent\n",7);
            sleep(1);
        }
    }
    else
    {
        write(1,"fork() failed!",14);
        return 1;
    }

    
    return 0;
}
