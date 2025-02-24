"""
Gecikmə
Zaman limiti: 0.2 san.
Yaddaş limiti: 256 mb.
Bugünkü müsabiqə texniki səbəblərə görə gecikəcək. Müsabiqənin nəzərdə tutulan vaxtdan 𝑑
dəqiqə sonra başlaması gözlənilir.
İlkin nəzərdə tutulan vaxt və gecikmə müddəti verilir. Bunlara əsasən müsabiqənin faktiki
başlayacağı vaxtı müəyyən edən proqram yazın. Nəzərə alın ki, gecikmə zamanı təqvim günü
dəyişə bilər.
"""
import datetime
def func(arr):
    results = []
    for element in arr:
        the_time = element[0].split(":")
        hour = int(the_time[0])
        minutes = int(the_time[1])
        given_time = int(element[1])
        initial_time = datetime.datetime(2025, 2, 15, hour, minutes)
        final_time = initial_time + datetime.timedelta(minutes=given_time)
        corrected_time = final_time.strftime("%H:%M")
        results.append(corrected_time)
    return results
n = int(input())
times = [input().split() for _ in range(n)]
# For new line going to use join method.
print("\n".join(func(times)))
# This way is not correct. I should fix it let me try again.
# What about this? That's why I imported datetime module.
# Also I stopped the sharing for a minute to look the datetime module documentation in python download it is given I can also show it.