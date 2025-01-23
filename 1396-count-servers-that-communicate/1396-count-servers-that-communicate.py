class Solution:
    def countServers(self, grid: List[List[int]]) -> int:
        m = len(grid)
        n = len(grid[0])
        row_check = [0] * m 
        col_check = [0] * n 
        count = 0

        for i in range(m):
            for j in range(n):
                row_check[i] += grid[i][j]
                col_check[j] += grid[i][j]

        for i in range (m):
            for j in range (n):
                if grid[i][j] == 1:
                    if row_check[i] > 1 or col_check[j] > 1:
                        count += 1

        return count