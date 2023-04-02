#include <stdio.h>
#include <stdlib.h>

void *malloc(size_t size) {
  void *p = sbrk(0); // 获取当前的堆顶位置
  void *request = sbrk(size); // 请求 size 大小的内存
  if (request == (void*) -1) {
    return NULL; // 请求失败，返回 NULL
  } else {
    return p; // 请求成功，返回原来的堆顶位置
  }
}
