# 1부터 100까지의 수 중 짝수의 합 구하기(2)
#
# i가 1부터 1씩 증가하며 100이 될 때까지 반복하며 i가 짝수인 경우 sum에 i 값을 누적한다.
#
# i를 2로 나눈 나머지가 0이면 i는 짝수이다.

# 예제23
sum = 0
for i in range(1,101):
        if i % 2 == 0:
            sum = sum + i
print(sum)
