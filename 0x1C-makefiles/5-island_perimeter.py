#!/usr/bin/python3
"""5. Island Perimeter"""
def island_perimeter(grid):
    """5. Island Perimeter"""
    rw = len(grid)
    cl = len(grid[0])
    i = 0
    length = 0
    column = 0
    listy = 0
    while i < rw:
        if i == 100:
            break
        j = 0
        while j < cl:
            if j == 100:
                i = 100
                break
            if grid[i][j] == 0:
                pass
            elif grid[i][j] == 1 and length < 1:
                length += 1
                column = j
                listy = i
            else:
                if column == j:
                    length += 1
                    column = j
                    listy = i
                elif listy == i and j - column == 1:
                    length += 1
                    column = j
                    listy = i
            j += 1
        i += 1
    return (length * 2) + 2
