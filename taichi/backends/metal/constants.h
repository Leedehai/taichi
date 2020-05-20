/*******************************************************************************
     Copyright (c) 2020 The Taichi Authors
     Use of this software is governed by the LICENSE file.
*******************************************************************************/

#pragma once

#include <string>

#include "taichi/lang_util.h"

TLANG_NAMESPACE_BEGIN
namespace metal {

inline constexpr int kMaxNumThreadsGridStrideLoop = 64 * 1024;
inline constexpr int kNumRandSeeds = 64 * 1024;  // 256 KB is nothing

}  // namespace metal
TLANG_NAMESPACE_END