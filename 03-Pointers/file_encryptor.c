#include <stdio.h>

#define KEY 3

int main(int argc, char *argv[]) {
    FILE *ifp, *ofp;
    int c;

    if (argc != 3) {
        printf("Usage: %s <src> <dest>\n", argv[0]);
        return 1;
    }

    ifp = fopen(argv[1], "rb");
    ofp = fopen(argv[2], "wb");
    
    if (ifp == NULL || ofp == NULL) {
        printf("Error: Could not open files.\n");
        return 1;
    }

    while ((c = getc(ifp)) != EOF) {
        // ASCII 값을 키만큼 밀어서 저장
        putc(c - KEY, ofp);
    }

    fclose(ifp);
    fclose(ofp);

    printf("Encryption Complete!\n");
    return 0;
}