class Solution:
    def firstCompleteIndex(self, arr: List[int], mat: List[List[int]]) -> int:
        mp = {}
        rows = len(mat)
        cols = len(mat[0])
        col_count = [rows] * cols
        row_count = [cols] * rows

        for i in range(rows):
            for j in range(cols):
                mp[mat[i][j]] = (i, j)
        
        for i in range(len(arr)):
            row, col = mp[arr[i]]
            row_count[row] -= 1
            col_count[col] -= 1
            if row_count[row] == 0 or col_count[col] == 0:
                return i

        return -1