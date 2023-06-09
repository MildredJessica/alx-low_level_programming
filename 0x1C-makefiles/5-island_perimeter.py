#!/usr/bin/python3
"""Perimeter of the island described in grid"""


def island_perimeter(grid):
    """
    Args:
        grid(List): List of List of Integer
    Returns:
        Returns the perimeter of the island described in grid
    """
    column = len(grid)
    row = len(grid[0])
    size = 0
    edge = 0

    for i in range(column):
        for j in range(row):
            if (grid[i][j] == 1):
                size += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edge += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
    return size * 4 - edge * 2
