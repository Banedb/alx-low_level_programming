#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    perimeter = 0
    for row, lst in enumerate(grid):
        for col, num in enumerate(lst):
            if num == 1:
                perimeter += 4 - ((grid[row - 1][col] * 2)
                                  + (grid[row][col - 1] * 2))

    return perimeter
