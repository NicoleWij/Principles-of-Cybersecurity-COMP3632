#include <stdio.h>

char * strncatImplement(char* dest, const char* source, size_t size){
    int destLen = 0;
    int i;
    
    while(dest[destLen] != '\0'){
        destLen++;
    }
    
    for(i = 0; i < size; i++, destLen++){
        dest[destLen] = source[i];
    }
    
    dest[destLen+1] = '\0';
    
    return dest;
}

int main(int argc, char const *argv[]){   
    char source[6] = "World";
    char dest[11] = "Hello";
    
    printf("Original String: %s\n", dest);
    printf("String to be appended: %s\n", source);

    printf("Appended String: %s\n", strncatImplement(dest, source, 5));

    return 0;
}