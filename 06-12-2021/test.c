#include <stdio.h>

int main(void)
{
 pid_t pid;
 int fd1[2];

 char buf[100];
 pipe(fd1);

 pid = fork();
 if (pid > 0) {
 close(fd1[0]);
 write(fd1[1], "Hello my child\n", 12);
 close(fd1[1]);

 }
 else {
 close(fd1[1]);
 read(fd1[0], buf, 100);
 printf("%s\n",buf);
 close(fd1[0]);
 }
}

