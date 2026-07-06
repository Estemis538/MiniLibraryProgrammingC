#include <stdio.h>
void prt_char_arr(char massiv[]){
    for(int i = 0;massiv[i]!='\0';i++){
        printf("%c",massiv[i]); 
    }
    printf("\n");
}
char return_char_arr(char massiv[]){
    int i;
    for(i = 0;massiv[i]!='\0';i++){
        printf("%c",massiv[i]); 
    }
    return i;
}

void ptr_int_arr(int massiv[],int size){
    printf("[");
    for(int i = 0;i<size;i++){
        printf("%d ",massiv[i]);
    }
    printf("]\n");
}




void compare_strings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0') {
        i++;
    }
    if (str1[i] == str2[i]) {
        printf("%s = %s\n",str1,str2);
    } else {
        printf("%s != %s\n",str1,str2);
    }
}

void copy_int_massiv(int cpmass[],int insertms[],int size){
    for(int i = 0;i<size;i++){
        cpmass[i] = insertms[i];
    }
}
