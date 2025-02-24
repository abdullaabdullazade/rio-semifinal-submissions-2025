n, k = map(int, input().split())

listing_1 = list(map(int, input().split()))
listing_2 = list(map(int, input().split()))
total = []
for i in range(len(listing_1)):
    for j in range(len(listing_2)):
        total.append(abs(listing_1[i] - listing_2[j]))

print(min(total))