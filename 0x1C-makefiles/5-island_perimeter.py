#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    w = 0
    l = 1
    p = 0

    for i, x in enumerate(grid):
        for j, y in enumerate(x):
            if y == l:
                if j == 0 or grid[i][j - 1] == w:
                    p += 1
                if (j + 1) == len(x) or grid[i][j + 1] == w:
                    p += 1
                if i == 0 or grid[i - 1][j] == w:
                    p += 1
                if (i + 1) == len(grid) or grid[i + 1][j]:
                    p += 1
    return p
