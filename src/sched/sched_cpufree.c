#define _GNU_SOURCE
#include <sched.h>

void __sched_cpufree(cpu_set_t *set)
{
    free(set);
}
