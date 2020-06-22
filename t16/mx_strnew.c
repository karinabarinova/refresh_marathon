#include <stdlib.h>

char *mx_strnew(const int size) {
    if (size < 1) {
        return NULL;
    }
    char *str = (char*)malloc(size + 1);    
    if (str == NULL) {
        return NULL;
    } else {
        for (int i = 0; i < size + 1; i++) {
            str[i] = '\0';
        }
    }
  return str;
}
