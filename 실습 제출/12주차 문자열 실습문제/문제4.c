#include <stdio.h>
#include <string.h>

int main(void) {
    char *keyword[7] = {"if", "while", "else", "for", "int", "float", "double"};
    char val[20];
    int i = 0;
    int Keyword = 0;
    
    printf("키워드 입력 : ");
    fgets(val, sizeof(val), stdin);

    
    while (val[i] != '\0') {
        if (val[i] == '\n') {
            val[i] = '\0';
            break;
        }
        i++;
    }
    
    for (i = 0; i < 7; i++) {
        if (strcmp(val, keyword[i]) == 0) {
            Keyword = 1;
            break;
        }
    }

    
    if (Keyword == 1) {
        printf("올바른 키워드\n");
    } else {
        printf("올바르지 않은 키워드\n");
    }
}
