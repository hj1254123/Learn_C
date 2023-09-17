// 编写⼀个程序把你的年龄转换成天数，并显示这两个值。这⾥不⽤考虑闰年的问题。
#include <stdio.h>

int main(void) {
  int age = 27;
  int day = age * 365;
  printf("%d年、%d天", age, day);
  return 0;
}