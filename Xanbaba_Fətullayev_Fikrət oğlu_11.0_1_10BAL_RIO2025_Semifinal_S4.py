teams, employees = [int(i) for i in input().split(' ')]

allEmployees = []

for teamNum in range(teams):
    teamEmployees = [{"num": int(i), "team": teamNum} for i in input().split(' ')]
    allEmployees.extend(teamEmployees)


def key(e):
    return e["num"]


allEmployees.sort(key=key)

diffs = []

for i in range(len(allEmployees)):
    employee = allEmployees[i]
    segment = [employee["num"]]
    teamsMet = [employee["team"]]
    teamsMetCount = 1
    for j in range(i + 1, len(allEmployees)):
        nextEmployee = allEmployees[j]
        if nextEmployee["team"] not in teamsMet:
            teamsMet.append(nextEmployee["team"])
            teamsMetCount += 1
            segment.append(nextEmployee["num"])
    if teamsMetCount != teams:
        break
    diffs.append(segment[-1] - segment[0])

print(min(diffs))
