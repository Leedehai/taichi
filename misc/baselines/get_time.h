/*******************************************************************************
     Copyright (c) 2019 The Taichi Authors
     Use of this software is governed by the LICENSE file.
*******************************************************************************/

#pragma once

#include <sys/time.h>

double get_time() {
  struct timeval tv;
  gettimeofday(&tv, nullptr);
  return tv.tv_sec + 1e-6 * tv.tv_usec;
}
