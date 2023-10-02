#define _GNU_SOURCE
#include <sched.h>
#include <stdlib.h>

cpu_set_t *__sched_cpualloc(size_t size)
{
    return malloc(CPU_ALLOC_SIZE(size));
}
