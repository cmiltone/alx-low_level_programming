#!/usr/bin/python3
"""module for calculateing Island perimeter"""


def island_perimeter(grid):
    """calcultes and returns Island perimeter"""
    w = len(grid[0])
    h = len(grid)
    e = 0
    n = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                n += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    e += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    e += 1
    return n * 4 - e * 2
