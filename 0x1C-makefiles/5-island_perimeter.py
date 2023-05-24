#!/usr/bin/python3
"""a function that returns the perimeter of the island described in grid:

    grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is one island (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
"""

def island_perimeter(grid):
    length = 0
    breadth = 0
    lst = [0]
    for rows in grid:
        for cols in rows:
            if (cols == 1):
                length += 1
                break
        for cols in rows:
            if (cols == 1):
                breadth += 1
        lst.append(breadth)
        breadth = 0
    new_breadth = max(lst)
    if (length == new_breadth):
        return (4 * length)
    return (2*(length + new_breadth))
