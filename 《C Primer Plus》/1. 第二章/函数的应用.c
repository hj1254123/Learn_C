/*
编写⼀个程序，⽣成以下输出：
For he's a jolly good fellow!
For he's a jolly good fellow!
For he's a jolly good fellow!
Which nobody can deny!
除了 main()函数以外，该程序还要调⽤两个⾃定义函数：⼀个名为 jolly()，⽤于打印前
3 条消息，调⽤ ⼀次打印⼀条；另⼀个函数名为deny()，打印最后⼀条消息。
*/
#include <stdio.h>

// C 语言需要先声明函数
void jolly(void);
void deny(void);

int main(void) {
  jolly();
  jolly();
  jolly();
  deny();
  return 0;
}

// 函数实现一般约定在 main 后面
void jolly(void) {
  printf("For he's a jolly good fellow!\n");
}

void deny(void) {
  printf("Which nobody can deny!\n");
}
