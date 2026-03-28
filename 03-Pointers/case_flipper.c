#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *ifp, *ofp;
    int c;

    if(argc != 3){
        printf("\n%s%s%s\n%s\n%s\n",
            "Usage: ", argv[0], " infile outfile",
            "The uppercase letters in infile will be counted.",
            "The results will be written in outfile");
        exit(1);
    }


    ifp = fopen(argv[1], "r");
    ofp = fopen(argv[2], "w");


   
    while ((c = getc(ifp)) != EOF) {
        if (c >= 'A' && c <= 'Z') {
            putc(c + ('a' - 'A'), ofp);
        } 
        else if (c >= 'a' && c <= 'z') {
            putc(c - ('a' - 'A'), ofp);
        } 
        else {
            // 그 외 문자(숫자, 공백 등)는 그대로 출력
            putc(c, ofp);
        }
    }

    fclose(ifp);
    fclose(ofp);

    return 0;
}