t=int(input(""))
result=0
for i in range(t):
  a=input()
  ss=a[0]+a[1]
  ss=int(ss)
  dd=a[3]+a[4]
  cc=a[6]+a[7]
  dd=int(dd)+int(cc)
  result=str(ss)+":"+str(dd)
  print(result)