#include <stdio.h>

//#define 관습적으로 대문자 사용
#define AREA    2337 
#define SQ_MILES_PER_SQ_KILOMETER 0.386121585424458
#define SQ_FEET_PER_SQ_MILES    (5280 * 5280)
#define SQ_INCHES_PER_SQ_FOOT 144
#define ACRES_PER_SQ_MILE 160

// define에 내용을 안 적을 시 공백으로 치환해버린다.
// 남겨진 *을 곱셈이 아니라 포인터로 착각하는 오류 발생했었다. (3.20)
