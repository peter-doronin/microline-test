unsigned char crc(unsigned char * data, size_t size){
  if(size == 0) return 0;
  uinsigned char result = 0;
  for(int i = 0; i < size; i++){
    result ^= data[i]; 
  }
  return result;
}
