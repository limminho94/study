# 1부터 100까지의 수 중 짝수의 합 구하기(1)
# i가 2부터 2씩 증가하며 100이 될 때까지 반복하며 sum에 i 값을 누적합니다.

# 예제22
i = 2
sum = 0
for i in range(1,51):
        sum = sum + (i * 2)
print(sum)