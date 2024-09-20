# 리스트 a 요소 리스트 b에 거꾸로 저장하기
# 리스트 a 요소를 거꾸로 해서 리스트 b에 저장한다.
# i가 0부터 1씩 증가하며 9가 될 때까지 반복하며 a[9-i]값을 b[i]에 저장한다. 결국 b[0]에는 a[9] 값이, b[1]에는 a[8] 값이, ..., b[9]에는 a[0] 값이 저장된다.

# 예제40
a = [1,2,3,4,5,6,7,8,9,10]
b = list(range(10))
for i in range(0, 10):
    temp = a[9-i]
    a[9-i] = b[i]
    b[i] = temp
print(b)