for _ in range(int(input())):
    n, k = map(int, input().split())
    s = input()
    if k * 2 > n:
        print(-1)
        continue
    ans = 0
    for i in range(k):
        ans += int(s[i] != 'R') + int(s[n - i - 1] != 'L')
    print(ans)