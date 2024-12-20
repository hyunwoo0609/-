#include <stdio.h>

int main(void) {
    char text1[20] = "this is text";
    char text2[20] = "which is red";
    char res[40];
    int i = 0, j = 0;
    
    while(text1[i] != '\0'){
        res[i] = text1[i];
        i++;
    }
    res[i] = ' ';
    i++;
    
    while(text2[j] != '\0') {
        res[i] = text2[j];
        j++;
        i++;
    }
    res[i] = '\0';
    printf("%s\n", res);
}
