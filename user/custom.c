#include "kernel/param.h"
#include "kernel/types.h"
#include "user/user.h"

int main(){
    int state=custom(0);
    if(state==0){printf("System Call Success\n");}
    exit(0);
}