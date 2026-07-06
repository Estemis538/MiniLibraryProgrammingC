#include <stdio.h>
void prt_char_arr(char massiv[]){
    for(int i = 0;massiv[i]!='\0';i++){
        printf("%c",massiv[i]); 
    }
    printf("\n");
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