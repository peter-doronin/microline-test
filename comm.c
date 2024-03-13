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

/*
Функция приема данных, принимает в качестве аргументов: дескриптор устройства ввода-вывода, указатель на буфер приема, значение таймаута.
Возвращает неотрицательный результат в случае успеха, и отрицательный в случае ошибки.
Прием осуществляется в пределах таймаута, пока не будет получено одно сообщение, соответствующее условиям: заданная преамбула, адрес получателя, и валидной контрольной суммой.
  */
int comm_recieve_msg(IO io_handle, ADDR_T dst, char * data, int timeout){
  int start_time = os_gettime_milliseconds();
  int recieve = 1;
  int timeout_elapsed = 0;
  while(timeout_elapsed > 0){
    timeout_elapsed = timeout - (os_gettime_milliseconds() - start_time);
    if(timeout_elapsed > timeout) 
    int err = read(io_handle, data, size, timeout_elapsed);
    if(err == 0){
      
    } else return -1;
  }
  return -1;
}
