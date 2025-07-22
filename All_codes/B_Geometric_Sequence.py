# https://atcoder.jp/contests/abc390/tasks/abc390_b
# AC

def main():
    n = int(input())
    
    a = list(map(int, input().split()))

    for i in range(1, n-1):
        if a[i-1] * a[i+1] != a[i] ** 2:
            print("No")
            return
    
    print("Yes")

main()
