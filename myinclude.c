#include <stdio.h>
void prt_char_arr(char massiv[]){
    for(int i = 0;massiv[i]!='\0';i++){
        printf("%c",massiv[i]); 
    }
    printf("\n");
}
void ptr_int_arr(int massiv[]){
    int count = 0;
    while (massiv[count] != -1) {
        count++;
    }
    
    printf("Размер массива внутри функции: %d\n", count);
}
