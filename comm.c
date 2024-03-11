#include "comm.h"

#define ADDR_T uint8_t;

unsigned char crc(unsigned char * data, size_t size){
  if(size == 0) return 0;
  uinsigned char result = 0;
  for(int i = 0; i < size; i++){
    result ^= data[i]; 
  }
  return result;
}
struct msg_s {
char preamble[4];
char length;
char src;
char dst;
char data[];
};

const char preamble[] = {0x01, 0x02, 0x03, 0x04};

int comm_send_msg(IO io_handle, ADDR_T src, ADDR_T dst, char * data, int size){
}

int comm_recieve_msg(IO io_handle, ADDR_T src, ADDR_T dst, char * data, int size, int timeout){
  int start_time = os_gettime_milliseconds();
  int recieve = 1;
  int timeout_elapsed = 0;
  while(recieve){
    timeout_elapsed = os_gettime_milliseconds() - start_time;
    if(timeout_elapsed > timeout) return COMM_TIMEOUT;
    int err = read(io_handle, data, size, timeout_elapsed);
    if(err == IO_TIMEOUT) return COMM_TIMEOUT;
    if(err < 0) return COMM_ERROR;
}
