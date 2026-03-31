#include <stdio.h>

#define KEY 3

int main(int argc, char *argv[]) {
    FILE *ifp, *ofp;
    int c;

    if (argc != 4) {
        printf("Usage: %s <e/d> <src> <dest>\n", argv[0]);
        printf("    e: Encryption\n");
        printf("    d: Decryption\n");
        return 1;
    }

    ifp = fopen(argv[2], "rb");
    ofp = fopen(argv[3], "wb");
    
    if (ifp == NULL || ofp == NULL) {
        printf("Error: Could not open files.\n");
        return 1;
    }

    char mode = argv[1][0];

    while ((c = getc(ifp)) != EOF) {
        // ASCII 값을 키만큼 밀어서 저장
        if(mode=='e'){
            putc(c + KEY, ofp);
        }
        else if(mode=='d'){
            putc(c - KEY, ofp);
        }
        else {
            printf("[Error] Invalid mode: '%c'. Use 'e' or 'd'.\n", mode);
            fclose(ifp);
            fclose(ofp);
            return 1;
        }
    }

    fclose(ifp);
    fclose(ofp);
    if(mode=='e')
        printf("Encryption Complete!\n");
    else
        printf("decryption Complete!\n");


    return 0;
}