/*******************************************************************************
     Copyright (c) 2020 The Taichi Authors
     Use of this software is governed by the LICENSE file.
*******************************************************************************/

#pragma once

#include <string>
#include <vector>

TI_NAMESPACE_BEGIN
void imwrite(const std::string &filename,
             size_t ptr,
             int resx,
             int resy,
             int comp);
std::vector<size_t> imread(const std::string &filename, int comp);
TI_NAMESPACE_END
