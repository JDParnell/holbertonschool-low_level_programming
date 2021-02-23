#!/usr/bin/python3
"""Finds the parameter of an island"""


def island_perimeter(grid):
    """Finds the perimeter of a grid"""
    p = 0
    for x in range(0, len(grid)):
        for y in range(0, len(grid[0])):
            if grid[x][y] == 1:
                if grid[x][y + 1] == 0 or y + 1 > len(grid[x]):
                    p += 1
                if grid[x][y - 1] == 0 or y - 1 < 0:
                    p += 1
                if grid[x - 1][y] == 0 or x - 1 < 0:
                    p += 1
                if grid[x + 1][y] == 0 or x + 1 > len(grid):
                    p += 1
    return p
