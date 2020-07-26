#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define endString "END_OF_TEXT"

int main(int argc, char const* argv[]){
    char word[10];
    char str[100][1000];
    char readstr[1000];
    scanf("%s", word);
    while (scanf("%s\n", readstr), abs(strcmp(readstr, endString))) {
        
    }
    
    return 0;
}
