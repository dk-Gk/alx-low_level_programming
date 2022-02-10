#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    e = 0
    s = 0

    for i in range(1, len(grid) - 1):
        for j in range(1, len(grid[i]) - 1):
            if grid[i][j] == 1:
                if grid[i][j - 1] == 0:
                    s += 1
                if grid[i][j + 1] == 0:
                    s += 1
                if grid[i - 1][j] == 0:
                    e += 1
                if grid[i + 1][j] == 0:
                    e += 1
    return s + e
