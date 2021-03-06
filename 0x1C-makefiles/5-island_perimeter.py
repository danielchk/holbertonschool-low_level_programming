#!/usr/bin/python3
"""def perimeter"""


def island_perimeter(grid):
    """
    Perimeter of and island
    """
    w = len(grid[0])
    h = len(grid)
    less = 0
    total = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                total += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    less += 2
                if (i > 0 and grid[i - 1][j] == 1):
                    less += 2
    return total * 4 - less
