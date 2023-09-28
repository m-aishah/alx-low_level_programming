#!/usr/bin/python3
'''Defines a function that returns the perimeter of an island.'''


def island_perimeter(grid):
    '''Returns the perimeter of an island.

    Args:
        grid (list of list of int): Represents the island.

    Returns:
        The perimeter of the island.
    '''

    perimeter = 0

    if grid is not None:
        for row in range(len(grid)):
            for col in range(len(grid[0])):
                if grid[row][col] == 1:
                    perimeter += 4

                    if row > 0 and grid[row - 1][col] == 1:
                        perimeter -= 2
                    if col > 0 and grid[row][col - 1] == 1:
                        perimeter -= 2
    return perimeter
