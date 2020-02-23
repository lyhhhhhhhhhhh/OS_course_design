#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main() {
	int re = syscall(333, 100);
	printf("the result is %d\n", re);
}
