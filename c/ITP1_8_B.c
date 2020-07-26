//ITP1_8_B
c;
main(s){
    while(c=getchar(),c!=10)
        s+=c-48;
    --s?:exit(0);
    printf("%d\n", s);
    main(1);
}
