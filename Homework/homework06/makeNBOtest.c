int swapEndian(int n) {
  return (((n >> 24) & 0x000000ff) 
        | ((n >>  8) & 0x0000ff00) 
        | ((n <<  8) & 0x00ff0000) 
        | ((n << 24) & 0xff000000));
}