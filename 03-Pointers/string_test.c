#include <stdio.h>
#include <ctype.h> //isalpha() → 주어진 문자가 알파벳인지를 검사

#define MAXSTRING  100

int main(){
    char c, name[MAXSTRING];
    int i, sum =0;

    printf("\nHi!   What's your name?  ");
    for(i=0;(c=getchar())!='\n';++i){  //getchar() = 키보드부터 문자 딱 하나를 가져온다.
        while(isalpha(c)==0)
            c=getchar();
        name[i]=c;
        if(isalpha(c))
            sum += c;
    }
    name[i] = '\0'; // \0 → null(컴퓨터의 마침표) 
    printf("\n%s%s%s\n%s",
        "Nice to meet you ",name,".",
        "Your name spelled backwards is ");
    for(--i;i>=0;--i){
        putchar(name[i]); //putchar = 한 글자씩 화면에 띄운다
    }
    printf("\n%s%d%s\n%s\n",
        "and the letters in your name sum to ",sum,".",
        "Have a nice day");
    
    return 0;

}   
