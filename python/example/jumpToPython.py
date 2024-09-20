# 점프 투 파이썬
#
# 연습문제 (148페이지)
# Q5. A 학급에 총 10명의 학생이 있다. 이 학생들의 중간고사 점수는 다음과 같다.
# 70,60,55,75,95,90,80,85,100
# for문과 while문 각각 사용하여 A 학급의 평균 점수를 구하는 문제를 만들어 보자.

# for문
A = [70, 60, 55, 75, 95, 90, 80, 80, 85, 100]
total = 0
for score in A:
    total += score
    num = len(A[0:])
    average = total / num
print(average)

# while문
A = [70, 60, 55, 75, 95, 90, 80, 80, 85, 100]
while A:
        total
        num = len(A[0:])
        avg = total / num
        print(avg)
        break