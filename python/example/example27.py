# 공약수 구하기
#
# 공약수란 0이 아닌 두 정수의 공통되는 약수를 말한다. 즉, 두 정수를 나누어떨어지게 하는 공통의 수를 의미한다.
# n1과 n2의 공약수는 1부터 n1까지 1씩 증가하는 i로 n1과 n2 모두를 나누어떨어지게 하는수가 된다.
#
# 단, n1이 n2보다 작다고 가정한다.

# 예제27
num_o = input("정수:")
num_t = input("정수:")
for i in range(1,int(num_t)+1):
        if int(num_o) % i == 0 and int(num_t) % i == 0:
                print(i, end=" ")