# 세 수 중 가장 큰 수 찾기(1)
#
# a가 b보다 크고 a가 c보다 크면 a가 가장 큰 수가 되고, a가 b보다 크고 a가 c보다 크지않으면 c가 가장 큰 수가 된다. a가 b보다 크지 않고 b가 c보다 크면 b가 가장 큰 수가 되고, a가 b보다 크지 않고 b가 c보다 크지 않으면 c가 가장 큰 수가 된다.

a = input()
b = input()
c = input()
if (int(a) > int(b)) :
  if(int(a) > int(c)) :
      print(a)
  else :
      print(c)
else :
  if(int(b) > int(c)) :
      print(b)
  else :
      print(c)