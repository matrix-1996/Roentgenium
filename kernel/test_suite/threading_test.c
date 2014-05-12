#include <arch/all/klibc.h>
#include <arch/x86-all/interrupts/irq.h>
#include <process/thread.h>

#include "threading_test.h"

void print_hello(void *a)
{
	printf("Hello ");
}

void print_world(void *a)
{
	printf("world!\n");
}

void test_kernel_threads()
{
	uint32_t flags;

	X86_IRQs_DISABLE(flags);
	
	thread_create("h", print_hello, 0);
	thread_create("w", print_world, 0);
	
	X86_IRQs_ENABLE(flags);
}


