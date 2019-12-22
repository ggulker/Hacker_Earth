cases = int(input())
for i in range(cases):
    size = int(input())
    data = input()
    data = data.split(" ")
    minimum = float("inf")
    counter = 0

    for i in data:
        num = int(i)
        if num < minimum:
            minimum = num
            counter = 1       
        elif num == minimum:
            counter += 1
    
    if counter % 2 == 0:
        print("Unlucky")
    else:
        print("Lucky")
