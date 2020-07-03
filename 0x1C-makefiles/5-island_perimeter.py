#!/usr/bin/python3

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
                if (j == 1 and grid[i][j - 1] == 1):
                    less += 1
                if (i == 1 and grid[i - 1][j] == 1):
                    less += 1
    return (total * 4 - less)