// Copyright 2019-2021 The jdh99 Authors. All rights reserved.
// ���ģ��
// Authors: jdh99 <jdh821@163.com>

#ifndef TZRANDOM_H
#define TZRANDOM_H

#include <stdint.h>
#include <stdbool.h>

// TZRandomSetSeed �������������
void TZRandomSetSeed(int seed);

// TZRandomGetRand ��ȡ�����
// �������Χ��min-max֮��,����min��max
uint32_t TZRandomGetRand(uint32_t min, uint32_t max);

// TZRandomGetCoin ��ȡӲ�ҵ�������
bool TZRandomGetCoin(void);

#endif
