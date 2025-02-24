t=int(input())
while t>0:
    vaxt=input() #10:00 60
    time = int(vaxt[6:8]) #60
    hour=int(vaxt[0:2]) #10 
    minute=int(vaxt[3:5]) #0
    addHour=(time+minute)//60 #1
    addMin=(time+minute)%60 #19
    if minute+time>59:
        minute= addMin #19
        hour+=addHour #14
    else:
        minute+=time
    if minute<10:
        minute="0"+str(minute)
    if hour>=24:
        hour=hour-24
    if hour<10:
        hour="0"+str(hour)
    hour=str(hour)
    minute=str(minute)
    print(f"{hour}:{minute}")
    t-=1
