# 10, 20, 30, ..., 100 저장하고, 거꾸로 출력하기
# i가 1부터 1씩 증가하며 10이 될 때까지 반복하며 i*10을 a[i-1]에 저장한다. 그리고 i가 9부터 1씩 감소하며 0이 될 때까지 반복하며 a[i] 값을 출력한다.

# 예제38
a = list(range(10))
for i in range(1, 11):
    a[i - 1] = i*10
for i in range(9, -1, -1):
    print(a[i], end=" ")