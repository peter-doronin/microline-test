#include "comm.h"

#define RX_ADDR
#define TIMEOUT 1000

int main(int agrv, char * argc[]){
  comm_init();
  comm_recieve_msg();
}
