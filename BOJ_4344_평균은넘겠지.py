# 테스트 케이스
N = int(input())
# 테스트 케이스 별 학생 수 및 점수 입력
test_case = []
for i in range(N):
    line_input = list(map(int, input().split(' ')))
    test_case.append(line_input)

for case in test_case:
    student_count = case[0]
    student_scores = case[1:]
    # 평균 계산
    avg = sum(student_scores) / student_count
    # 평균을 넘는 학생 수 계산
    students_over_avg = list(filter(lambda score: score > avg, student_scores))

    print(f'{(len(students_over_avg) / student_count * 100):.3f}%')
