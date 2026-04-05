    #include <stdio.h>
    #include <time.h>

    int main(){
        int a;
        clock_t begin, end;
        double diff;

        printf("a:  ");
        begin = clock();
        scanf("%d", &a);
        end = clock();

        diff = (double)(end - begin)/CLOCKS_PER_SEC;

        printf("%.3f\n", diff);
        return 0;

    }