#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fname[30];
    int fd = 0;
    char Data[11];
    printf("Enter the file name that you want to open : \n");
    scanf("%s",fname);

    fd = open(fname,O_RDWR);
    if(fd==-1)
    {
        printf("Unable to open file \n");
        return -1;
    }
    else
    {
        printf("File is successfully opened with fd : %d\n",fd);
    }

    // lseek(fd,4,0);
    lseek(fd,-7,2);
    // 1 : File descriptor 
    // 2 : Displacement   
    // 3 : From where      
    read(fd,Data,6);
    
    printf("Data from file is : %s ",Data);
    close(fd);
    return 0;
}

