# Problem          : 36. Valid Sudoku
# Time Complexity  : O(N^2) or O(1) since the board is always a 9x9 matrix
# Space Complexity : O(N) or O(1) since the board is always a 9x9 matrix
# Python Solution

class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for i in range(9):
            st = set()
            for j in range(9):
                item = board[i][j]
                if item in st:
                    return False
                elif item != ".":
                    st.add(item)
        for i in range(9):
            st = set()
            for j in range(9):
                item = board[j][i]
                if item in st:
                    return False
                elif item != ".":
                    st.add(item)
        start = [(0, 0), (0, 3), (0, 6), (3, 0), (3, 3), (3, 6), (6, 0), (6, 3), (6, 6)]

        for i, j in start:
            st = set()
            for row in range(i, i + 3):
                for col in range(j, j + 3):
                    item = board[row][col]
                    if item in st:
                        return False
                    elif item != ".":
                        st.add(item)
        return True