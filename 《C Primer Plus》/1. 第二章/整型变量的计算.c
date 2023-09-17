/*
编写⼀个程序，创建⼀个整型变量toes，并将toes设置为10。
程序中还要计算toes的两倍和toes的平⽅。该程序应打印3个值，并分别描述以示区分。
*/

#include <stdio.h>

int main(void) {
  int toes = 10;
  int toesDouble = toes * 2;
  int toesSquare = toes * toes;
  printf("toes=%d,它的两倍是：%d,它的平方是：%d", toes, toesDouble, toesSquare);
  return 0;
}
