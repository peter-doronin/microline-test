#define ADDR_T uint8_t;

unsigned char crc(unsigned char * data, size_t size){
  if(size == 0) return 0;
  uinsigned char result = 0;
  for(int i = 0; i < size; i++){
    result ^= data[i]; 
  }
  return result;
}

int comm_send_msg(ADDR_T src, ADDR_T dst, uinsigned char * data, size_t size){
}

int comm_reciev_msg(ADDR_T src, ADDR_T dst, uinsigned char * data, size_t size, int timeout){
}
