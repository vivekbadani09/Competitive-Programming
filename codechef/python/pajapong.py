test = int(input())
while test:
    x, y, k = map(int, input().split())
    total_games = x + y
    if int((total_games)/k) % 2 == 0:
        print("Chef")
    else:
        print("Paja")
    test -= 1# cook your dish her
