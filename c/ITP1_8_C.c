//ITP1_8_C
main(){
    int a[26]={0};
    char c;
    for (;c!=-1;c=getchar()) {
        a[c>96?c-97:c-65]++;
    }
    for (char i = 0; i<26; i++){
        printf("%c : %d\n", i+97, a[i]);
    }
}
