import pandas as pd

def selectData(students: pd.DataFrame) -> pd.DataFrame:
    specific_row = students[students['student_id']==101][['name', 'age']]
    return specific_row