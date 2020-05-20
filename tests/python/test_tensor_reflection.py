# Copyright (c) 2019 The Taichi Authors
# Use of this software is governed by the LICENSE file.

import taichi as ti


@ti.all_archs
def test_POT1():
    val = ti.var(ti.i32)

    n = 4
    m = 8
    p = 16

    @ti.layout
    def values():
        ti.root.dense(ti.i, n).dense(ti.j, m).dense(ti.k, p).place(val)

    assert val.dim() == 3
    assert val.shape() == (n, m, p)


@ti.all_archs
def test_POT2():
    val = ti.var(ti.i32)

    n = 3
    m = 7
    p = 11

    @ti.layout
    def values():
        ti.root.dense(ti.i, n).dense(ti.j, m).dense(ti.k, p).place(val)

    assert val.dim() == 3
    assert val.shape() == (n, m, p)


@ti.all_archs
def test_unordered():
    val = ti.var(ti.i32)

    n = 3
    m = 7
    p = 11

    @ti.layout
    def values():
        ti.root.dense(ti.k, n).dense(ti.i, m).dense(ti.j, p).place(val)

    assert val.dim() == 3
    assert val.shape() == (n, m, p)
