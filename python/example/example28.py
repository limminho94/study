# 최대공약수 구하기
# 두 정수의 공약수 중 가장 큰 것을 최대공약수라 한다.
#
# 그러므로 n1과 n2의 최대공약수는 n1부터 1까지 1씩 감소하는 i로 n1과 n2 모두를 나누어떨어지게 하는 첫 번째 수가 된다. 단, n1이 n2보다 작다고 가정한다.

# 예제28
num1 = int(input("정수:"))
num2 = int(input("정수:"))
for i in range(num1, 0, -1):
        if num1 % i ==0 and num2 % i == 0:
            print(i, end=" ")
            break