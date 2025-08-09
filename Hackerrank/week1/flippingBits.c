long flippingBits(long n) {
      unsigned long mask = 0xFFFFFFFFUL; 
      return (~n) & mask;

}