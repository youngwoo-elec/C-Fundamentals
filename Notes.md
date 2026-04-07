>### 📅 2026-03-20
- '%22.7e' → 22: 필드 폭(필드에 들어가는 문자의 개수), .7: 소수점 7자리
- '#define' 뒤에 숫자를 안 적으면 컴파일러가 '*'를 포인터로 오해해서 에러 발생
- **pull --rebase** push 불가 시 충돌 해결
- **int함수**는 return 값 필수 / return 값 없는 **void 함수**
- 리눅스 명령어 'echo' / `echo "내용"` > [파일명.txt] → 파일에 데이터 생성
- **입력 재지정 '<'**: "파일을 먹여라" 키보드(stdin)이 아닌 파일의 내용을 입력값으로 사용
    → ex) ./running_sum < running_sum_data.txt
- **출력 재지정 '>'**: "결과를 적어라" 화면(stdout)에 뜰 결과를 파일에 저장
    → ex) ./running_sum > result.txt  


>### 📅 2026-03-21
- **exit()** : '프로그램 강제 종료' <stdlib.h>에 들어있다.
- 0이 아닌 값(주로 1)은 에러 발생을 의미  
    🛠️ Function Prototype (함수 프로토타입)
- **정의**: 함수를 사용하기 전에 미리 그 형태(이름, 매개변수, 반환형)를 알리는 것.
- **이유**: C 컴파일러는 위에서 아래로 읽기 때문에, `main`에서 함수를 호출하려면 그 이전에 해당 함수의 정보가 있어야 함.
- **실무**: 보통 `main` 위에 선언(Declaration)을 하고, `main` 아래에 정의(Definition)를 하여 가독성을 높임.  
    🛠️ Bubble Sort (버블 정렬)
- 구조: **중첩 반복문**
    - 바깥쪽 루프: 전체 회전 수
    - 안쪽 루프: 인접 요소끼리 비교 및 Swap
- **형 변환 연산자**: ex) (float)sum
- 반복문 `반복 조건` 항상 유의하기!
- 함수의 `독립성`(재사용 용이) vs `효율성`(빠르게)  


>### 📅 2026-03-22
- `getchar()` ㆍ `putchar()`: 문자 하나씩 입ㆍ출력  → **int형(ASCII CODE)**  
    ⚠️ Input Stream Ambiguity (입력 스트림의 모호성)
- *problem*: 한 루프 내에서 `getchar()`을 중복 사용하여 종료 조건('\n')을 내부 루프가 먹어치워 Input hang 발생
- *lesson*: 입력과 종료 검사는 반드시 한 곳에서 중앙 제어
- *solution*: `for`에서는 입력만, 내부 루프에서는 `if(isalpha())`로 필터링만 수행  
    🛠️ `Continue` : 반복문 몸체의 남은 부분을 skip하고 다음 바퀴로 강제 소환
- **for문에서**: 몸체 skip → **증감(expr3)** → 조건식(expr2)  
    → for문의 증감식을 비우고 몸체에서 증감 시행!
- for문의 expr1,2,3은 비워둘 수 있다  


>### 📅 2026-03-23  
- `strcpy(dest,src)` : 소스(src)를 목적지(dest)에 복사  
        - dest, src 둘 다 포인터
        - `\0`(NULL) 문자를 만날 때까지 포인터를 이동하며 1바이트씩 복사.  
    🛠️ Pointer (포인터)  
- `&` 주소 (Address of) : 변수의 주소값을 물어보기
- `*` 역참조 (Deference) : 주소의 실제 값을 가져오기
- 타입이 필요한 이유: 주소 지점에서 몇 바이트 단위로 해석할지 결정.  
    📍 Array name as a pointer 
- **배열 명 `s`**: 식 안에서 사용될 때 첫 번째 요소의 주소/포인터(`&s[0]`)로 취급됨.
- **차이**
    - 포인터(`p`): 다른 주소로 변경 가능 (변수)
    - 배열명(`s`): 시작 주소로 고정 (상수)  
    📍 Pointer Arithmetic (포인터 연산)  
- `s+1`: 두 번째 칸의 주소 = &s[1]
- `*(s+1)`: 두 번째 칸의 값 = s[1]
- `*s+1`: 첫 번째 칸의 값 + 1 = s[0]+1

>### 📅 2026-03-24  
- **`%s`**: 시작 주소만 주면 알아서 끝까지 훑음  
    → ex) printf("%s", s+1); = 두 번째 칸 주소부터 끝까지 읽어줘!  
- **주소 자체를 출력하는 법**: `%p` → 포인터 전용 서식 지정자  
    - `printf("%p", (void*)s);`  
    - 싸지방에서 실행한 결과: 0x7fff2e7f1d40  
        → 0x: 16진수, 16자리 = (2^4)^16= 64비트 시스템


>### 📅 2026-03-25
- **파일 포인터**: 파일이 메모리 어디에 준비되어 있는지 가리키는 8비트 주소값
- **주소 대입**: `fp=fopen` 파일의 주소 자체를 fp에 저장 (내용물 *fp 아님에 주의)  
    🛠️ 파일  
- **fopen 모드**  
    - `"r"`: 읽기 → 파일이 없으면 NULL 포인터 리턴 / & fscanf, fgets  
    - `"w"`: 쓰기 → 기존 내용은 다 지우고 새로 씀 / & fprintf  
    - `"a"`: 첨부  
    - `fp = fopen(...)` 직후에는 반드시 **if(fp == NULL)**을 확인
- `fgets(배열명, 읽을 사이즈, 파일포인터)`: 한 줄 읽기  
    ex) fgets(buffer, sizeof(buffer),fp);
- `fscanf(파일포인터, "형식", &변수)`: 파일에서 이 형식으로 데이터를 뽑아서 변수에 넣어라  
    ex) fscanf(fp, "%d", &num);  
    scanf = 키보드(stdin) vs fscanf = 파일(file)
- `fprintf(파일포인터, "형식", 값)`: 파일에 이 형식으로 값을 적어라  
    ex) fprintf(fp, "Result: %d\n", num);
- **fclose**: fopen 시 필수!!  


>### 📅 2026-03-26
- **main 함수의 인자**  
    → int main(int argc, char *argv[])  
    - `argc`: 인자의 개수 (argument count)  
    - `*argv[]`: 인자의 내용 (argument vector) → 문자열의 배열, **argv[0]=실행파일의 경로/이름 
- ifp: infile pointer   ofp: outfile pointer
- `getc(FILE*stream)`: getchar 파일버전
- `putc('~~', FILE*stream)`: putchar 파일버전
- **EOF**: End-Of-File (-1)  


>### 📅 2026-03-27
- cnt_letters 프로그램 22번째 줄  
    → ++letter[c - 'A'];  
    if int-type c == 'A' / ++letter[0]  
    if int type c == 'B' / ++letter[1]  
- cnt_letters 프로그램 27번째 줄  
    → printf("%c",'A'+i);  
    'A'+i가 문자 형식으로 출력
- **ASCII CODE**의 논리를 항상 유의하기  
    → 컴퓨터에게 문자는 결국 정수(int)  


>### 📅 2026-03-28  
- **ASCII 연산**:  'a'-'A' = 32  
   ⚠️ Segmentation fault (core dumped)  
- fopen 실패, ifp = NULL인 상태로 getc(ifp)
- 출력파일(argv[2]) 입력 x
- **해결책**       
if (ifp == NULL || ofp == NULL) 
        exit(1);  


>### 📅 2026-03-29 ~ 31
- **Encryption (암호화)**: 값에 Key를 더해서 파일을 암호화
    ⚠️ 암호화 후 복호화 시 코드 내용이 깨지는 오류 발생
    - **Binary mode** (이진모드 rb,rw)
    - **vs text mode**: 텍스트 모드는 줄 바꿈 시 \r\n(2바이트) 사용
    - 암호화를 위해 Key를 더한 값이 10(\n) → 자동으로 \r\n으로 바뀜
    - 복호화 시 값이 달라지는 문제
- **암호화에서의 modulo와 오버플로우** : 1byte 0~255 초과시 하위 8bit만 가져감
- `argv[1][0]`: 첫 번째 인자의 첫 번째 글자 (이중 포인터)
- `return 1` vs `exit(1)`  
    - return 1: 함수 자체를 종료 (main 함수 내에서 → 프로그램 종료)  
    - exit(1): 프로그램 종료 / stdlib 내에 존재
- (3.30)사지방에서 codespace가 들어가지지 않는 문제로 학습 진행 불가  


>### 📅 2026-04-01
- **#include행**: 시작 부분 아닌 함수 내에서 사용 가능  
    → 함수 내에서만 **지역적 정의** / 실무에서 추천 x
- 모든 문장(statement)가 `;`(세미콜론)이 필요하지는 x   
    ex) {a=1;} → 복합문장
- 컴파일러는 구문(syntax)만을 검사  
    ex) `{}`, `;` 등: '아무것도 안 하는' 문장
- **Overflow**: 타입이 담을 수 있는 최대치 초과 → `inf`
- 02-Functions/better_average: 점진적 평균   
    - overflow를 방지
    - overflow 아닐 시: **부동소수점 덧셈에서 유효숫자 소실 (Loss Of Significance)**   
        : 크기 차이가 매우 큰 두 수를 더할 때, 작은 수의 유효숫자가 무시되어 계산 결과에서 사라지는 문제
    → 알고리즘 설계의 중요성을 보여줌   


>### 📅 2026-04-02
- `printf, scanf`: **int-type 출력 가능**    
    - *printf* → print한 문자의 개수 |`\n`도 하나의 문자로 카운트
      - `\0`: printf, strcpy 등 함수는 `\0`을 만나면 멈춰버린다.
    - *scanf* → 성공적으로 읽어들인 변수의 개수 
      - 타입이 맞지 않는 변수가 들어오면 멈춰버린다.
    🧩 Single Statement Rule   
- 03-pointer/pointer_test.c for문 내부에서 if-else if 문을 중괄호 없이 사용
- **if-if**: 두 개의 문장 (`{}`필요) 
- **if-else**: 연속된 하나의 제어 구조 → for문이 `{}`없이 제어 가능   
    🧩 Tokens (토큰): The Atoms of C
- 키워드 (Keywords): `int`, `return`, `if`.. (C언어가 미리 찜한 단어)
- 식별자 (Identifiers): a, cnt_s, **main**.. (작성자가 붙인 이름)
- 상수 (Constants): 10, 3.14, 'A' (정해진 값)
- 문자열 리터럴 (String Literals): "Hello" (큰 따옴표 안의 뭉치)
- 연산자 (Operators): `+`,`-`,`==`... (계산 기호)
- 구분자(Punctuators): `;`, `,`, `(`, `)`, `{`, `}`... (문법적 경계선)
- **main**: 운영체제가 직접 호출하는 **특권층 식별자**   


>### 📅 2026-04-03
- 컴파일러는 공백을 언어의 원소로 분리하는데 사용 or 무시   
    🧩 Backus-Naur Form (BNF)
- `*italics*: 구문 카테고리
- `::=`: "다시 쓰면"의 기호 (= 왼쪽은 오른쪽으로 대체)
- `|`: 선택들을 분리
- `{ }₁`: 괄호 안의 항목 중 하나만 선택
- `{ }0+`: 괄호 안의 항목을 영번 이상 반복
- `{ }1+`: 괄호 안의 항목을 한번 이상 반복
- `{ }opt`: 옵션인 항목   
- ex) lowercase_letter ::= a|b|c|...|z   
    🧩 주석 (Comment) : 컴파일러가 공백 문자로 대치
- `/* ~ */` or `// ~`  
    🛠️ 전위 연산자 vs 후위 연산자
- **전위 연산자**: i의 값을 증가 → 증가된 값을 수식의 값으로 (++i or --i)
- **후위 연산자**: i 값을 수식의 값으로 → i 값을 증가(i++ of i--)

>### 📅 2026-04-04
- 헤더파일을 포함하지 않고 직접 함수의 원형을 선언해도 된다. (추천 X)   
    ⚠️ Multiple Definition Error
- 링커(Linker)가 오브젝트 파일을 모을 때, 똑같은 이름에, 몸체가 여러 개 발견될 때 발생
- **☆헤더 파일에는 선언만**: 함수,변수의 정의 X   
   ex) 파일 이름    역할         내부 내용(예시)
    -   Add.h      공용 설계도    `int add(int a,int b);` +  `헤더 가드 (Header Guards)`
    -   Add.c      실제 공장      `#include "A.h`" + `int add(...){return a+b; }`
    -   main.c   조립 라인1     `#include "A.h"` + `add(1,2);` (호출)
    -   sub.c    조립 라인2     `#include "A.h"` + `add(3,4);` (호출)    
→ `gcc main.c Add.c -o test` / Include Headers for the Compiler, Include Sources for the Linker   
    🛠️  Header Guards (헤더 가드) : 함수 선언의 중복까지 방지
- #infdef ADD_H     // 만약 ADD_H가 정의되어 있지 않다면 
- #define ADD_H     // ADD_H를 정의하고 아래 내용을 진행   
    (코드 내용)   
- #endif        // 끝
- 프로젝트 루트(.git) 이탈 및 삭제 사고를 mv 백업과 git clone 원격 복제로 가차 없이 수습함.


>### 📅 2026-04-05
- `rand()`: 임의의 정수값을 리턴    // stdlib.h   
    - `rand()%(max-min+1) + min`: min~max
- `srand()`: `rand`의 시드(출발점)을 지정
- `time(NULL)`: 현재 시간 값을 리턴(초 단위)     // time.h   
    → srand(time(NULL));
- 소요시간 측정: time vs clock
1. time: 초 시계(소요시간 자체)   
    ex) int begin = time(NULL);
        scanf("%d", &a);
        int end = time(NULL);
        int diff = end - begin;
2. clock: 프로그램이 CPU를 점유한 시간
    ex) clock_t begin = clock();    //clock_t: 시간 측정용 전용 자료형
        scanf("%d", &a);
        clock_t end = clock();
        double diff = (double)/(end-begin)/CLOCK_PER_SEC    //CLOCK_PER_SEC: 매크로 상수
        => diff = 0.00 (대기시간: 입력을 기다리는 동안 CPU는 휴식(Idle)상태)


>### 📅 2026-04-06
- bubble sort와 quick sort의 처리 속도를 비교하기 위한 코드를 제작   
    ⚠️  multiple definition of `main`, `swap`
→ 1. 각 소스파일의 main 함수 삭제, `swap`을 실행파일(clock_test.c) 내부에 선언   
  2. ! 소스파일의 swap이 길을 잃는 문제 발생
  3. 별도의 swap.c/.h를 제작, 소스파일들에 전처리해서 해결   
    ⚠️ implicit declaration of function `quicksort`
→ 1. clock_test.c 내부에 quicksort(); 함수 원형을 직접 선언해서 해결
  2. bubble.h 내부에 ifndef에도 QUICKSORT_H라고 적었던 실수    
    → 코드 전체가 유령화
  3. 수정 후 문제 해결됨


>### 📅 2026-04-07
- `\"`: " 출력  `\'`: ' 출력
- `\b`: backspace   `\t`: tab
- 경우에 따라 문자를 표현하는데 int 형이 사용