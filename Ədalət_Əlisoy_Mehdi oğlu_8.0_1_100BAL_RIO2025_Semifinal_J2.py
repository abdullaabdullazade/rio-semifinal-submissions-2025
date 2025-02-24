"""
Oyuncaqlar və qutular
Zaman limiti: 1 san.
Yaddaş limiti: 256 mb.
Fuadın 𝑛 oyuncağı var və o bu oyuncaqları hər birinə dəqiq bir ədəd olmaqla 𝑛 qutuya
yerləşdirmək istəyir. 𝑖-ci qutunun tutumu 𝑎𝑖
 kiloqram, 𝑗-ci oyuncağın çəkisi isə 𝑏𝑗
 kiloqramdır.
𝑗-ci oyuncağı 𝑖-ci qutuya o halda qoymaq olar ki, qutunun tutumu oyuncağın çəkisindən kiçik
olmasın, yəni 𝑎𝑖 ≥ 𝑏𝑗
.
Fuad hər zaman nəyinsə üsulları sayını tapmağa çalışır. Bu dəfə də o, oyuncaqları qutulara
neçə müxtəlif üsulla yerləşdirə biləcəyini tapmaq istəyir. Bunu tapmaqda Fuada kömək edin.
Qeyd: İki yerləşdirmə o halda fərqli hesab olunur ki, bu yerləşdirmələrdə elə bir oyuncaq var
ki, fərqli qutulara yerləşdirilib.
Giriş verilənləri
Giriş bir neçə testdən ibarətdir. Birinci sətirdə testlərin sayını bildirən 𝑡 ədədi verilir.
Daha sonra 𝑡 sayda testin hər birində birinci sətirdə bir tam ədəd 𝑛 verilir. Növbəti sətirdə
boşluqla ayrılmış 𝑛 sayda tam ədəd 𝑎1
, 𝑎2
, …, 𝑎𝑛, sonrakı sətirdə bənzər şəkildə 𝑏1
, 𝑏2
, …, 𝑏𝑛
verilir.
Çıxış verilənləri
Çıxışa hər bir test üçün yeni sətirdən bir tam ədəd, həmin testdə oyuncaqları qutulara
yerləşdirməyin üsulları sayını verin. Bu say böyük ola biləcəyindən onun 10
9 + 7-yə
qalığını çap edin.

Input:
2
3
5 10 8
9 4 5
2
3 5
4 4

Output:
2
0

Giriş verilənləri
Giriş bir neçə testdən ibarətdir. Birinci sətirdə testlərin sayını bildirən 𝑡 ədədi verilir.
Daha sonra 𝑡 sayda testin hər birində birinci sətirdə bir tam ədəd 𝑛 verilir. Növbəti sətirdə
boşluqla ayrılmış 𝑛 sayda tam ədəd 𝑎1
, 𝑎2
, …, 𝑎𝑛, sonrakı sətirdə bənzər şəkildə 𝑏1
, 𝑏2
, …, 𝑏𝑛
verilir

Çıxış verilənləri
Çıxışa hər bir test üçün yeni sətirdən bir tam ədəd, həmin testdə oyuncaqları qutulara
yerləşdirməyin üsulları sayını verin. Bu say böyük ola biləcəyindən onun 10
9 + 7-yə
qalığını çap edin.
"""
import bisect
# Also I am always writing the question first to understand the problem.
# We will use this number to keep our answers small.
MOD = 10**9 + 7
# You already said this to us
# Sorry for Copilot because it is always trying to help me.
# I used the bisect module it is finding the index of the element in the list.
# First, we read how many games (tests) we're playing.
t = int(input())
for _ in range(t):
    # Read the number of toys/boxes for this test.
    n = int(input())
    
    # Read the capacities of the boxes.
    a = list(map(int, input().split()))
    # Read the weights of the toys.
    b = list(map(int, input().split()))
    
    # Sort the list so that the smallest comes first.
    a.sort()
    b.sort()
    
    # Start with one valid way.
    ways = 1
    
    # We try to put the heaviest toy first.
    # Here I used range loop with 3 parameters.
    # This is like range function in python.
    for i in range(n - 1, -1, -1):
        # We find the first box that is big enough for the toy b[i]
        # (bisect_left returns the position where b[i] could be inserted)
        pos = bisect.bisect_left(a, b[i])
        
        # Count how many boxes are large enough for this toy.
        eligible_boxes = n - pos
        
        # Count how many boxes have been taken by heavier toys already.
        used_boxes = (n - 1) - i
        
        # The remaining boxes that this toy can go into.
        available = eligible_boxes - used_boxes
        
        # If there is no room, then it's impossible.
        if available <= 0:
            ways = 0
            break
        # I think you can understand the logic and English.
        # Multiply the ways by how many choices we have.
        ways = (ways * available) % MOD
    
    print(ways)
# I think the code is clear and understandable.
# Lets take the code and test it in the system.