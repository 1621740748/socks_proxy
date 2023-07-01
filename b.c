#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
 
int main()
{
        int fd;
        char *buf = "hello world!";
        fd = open("./file1",O_RDWR);
        if(fd == -1){
                printf("open file1 failed\n");
        }
        fd = open("./file1",O_CREAT|O_RDWR,0600);
        if(fd > 0){
                printf("open file1 success\nfd=%d\n",fd);
        }
//原型： ssize_t write(int fd, const void *buf, size_t count);
                 write(fd,buf,strlen(buf));
 
        close(fd);
 
        return 0;
}