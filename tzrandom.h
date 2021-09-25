// Copyright 2019-2021 The jdh99 Authors. All rights reserved.
// 随机模块
// Authors: jdh99 <jdh821@163.com>

#ifndef TZRANDOM_H
#define TZRANDOM_H

#include <stdint.h>
#include <stdbool.h>

// TZRandomSetSeed 设置随机数种子
void TZRandomSetSeed(int seed);

// TZRandomGetRand 读取随机数
// 随机数范围在min-max之间,包括min和max
uint32_t TZRandomGetRand(uint32_t min, uint32_t max);

// TZRandomGetCoin 获取硬币的正反面
bool TZRandomGetCoin(void);

#endif
