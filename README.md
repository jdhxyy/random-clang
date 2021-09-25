# tzrandom

## 1. 介绍
随机数模块。

## 2. API
```c
// TZRandomSetSeed 设置随机数种子
void TZRandomSetSeed(int seed);

// TZRandomGetRand 读取随机数
// 随机数范围在min-max之间,包括min和max
uint32_t TZRandomGetRand(uint32_t min, uint32_t max);

// TZRandomGetCoin 获取硬币的正反面
bool TZRandomGetCoin(void);
```
