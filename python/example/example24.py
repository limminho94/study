# 1, -2, 3, -4, ..., 99, -100의 합 구하기
#
# i가 1부터 1씩 증가하며 100이 될 때까지 반복하며 i가 홀수면 sum에 i 값을 더하고, i가 짝 수면 sum에서 i 값을 뺀다.

# 예제24
sum = 0
for i in range(1,101):
        if i % 2 != 0 :
            sum = sum + i
        elif i % 2 == 0:
            sum = sum - i
print(sum)