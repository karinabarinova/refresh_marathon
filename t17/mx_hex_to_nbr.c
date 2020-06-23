unsigned long mx_hex_to_nbr(const char *hex){
  int i = 0, len = 0;
  while (hex[i]) {
    len++;
    i++;
  }
  unsigned long base = 1;
  unsigned long dec = 0;
  for (i = len - 1; i >= 0; i--) {
    if (hex[i] >= '0' && hex[i] <= '9') {
      dec += (hex[i] - 48) * base;
      base = base * 16;
    } else if (hex[i] >= 'A' && hex[i] <= 'F') {
      dec += (hex[i] - 55) * base;
      base = base * 16;
    } else if (hex[i] >= 'a' && hex[i] <= 'f') {
      dec += (hex[i] - 87) * base;
      base = base * 16;
    }
  }
  return dec;
}
