#include <stdio.h>
#include <string.h>


int main(void){
    char text1[50];
    char text2[50];
    int i = 0, j = 0;
    
    printf("문장 입력 : ");
    fgets(text1, sizeof(text1), stdin);
    
    while (text1[i] != '\0') {
            if (text1[i] == '\n') {
                text1[i] = '\0';
                break;
            }
            i++;
        }
    
    printf("문장 입력 : ");
    fgets(text2, sizeof(text2), stdin);
    
    while (text2[j] != '\0') {
            if (text2[j] == '\n') {
                text2[j] = '\0';
                break;
            }
            j++;
        }
    
    strcat(text1, " ");
    strcat(text1, text2);
    
    printf("%s\n", text1);
}
