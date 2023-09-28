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
        for i in range (len(grid)):
            for j in range (len(grid[0])):
                if grid[i][j] == 1:
                    if (grid[i][j + 1] == 1 or grid[i][j-1] == 1
                            or grid[i + 1][j] == 1 or grid[i -1][j] ==1):
                        perimeter += 2
                    else:
                        return 0
        return perimeter + 2
    return perimeter
