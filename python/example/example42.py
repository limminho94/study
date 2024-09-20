# 리스트 요소 중 최댓값 구하기
# a[0] 값을 max에 저장하고, i가 1부터 1씩 증가하며 9가 될 때까지 반복하며 a[i] 값이 max 값보다 크면 a[i] 값을 max에 저장한다.

# 예제42
import random
a = []
for i in range(10):
    a.append(random.randint(1,100))
max = a[0]
for i in range(1, 10):
    if a[i] > max:
        max = a[i]
print(a[:9])
print("최댓값:",max)