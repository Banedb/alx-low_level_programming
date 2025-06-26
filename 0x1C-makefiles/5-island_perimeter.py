#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    perimeter = 0
    for row, lst in enumerate(grid):
        for col, num in enumerate(lst):
            if num == 1:
                perimeter += 4
                if row and grid[row - 1][col]:
                    perimeter -= 2
                if col and grid[row][col - 1]:
                    perimeter -= 2

    return perimeter
