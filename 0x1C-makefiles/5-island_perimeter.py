#!/usr/bin/python3
def island_perimeter(grid):
    perimeter = 0

    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y]:
                    if y > 0 and grid[x][y-1] == 0:
                        perimeter += 1
                    if y > 0 and grid[x][y+1] == 0:
                        perimeter += 1
                    if x > 0 and grid[x-1][y] == 0:
                        perimeter += 1
                    if x > 0 and grid[x+1][y] == 0:
                        perimeter += 1
    return perimeter
