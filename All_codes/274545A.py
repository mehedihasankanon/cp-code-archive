# https://codeforces.com/edu/course/2/lesson/4/3/practice/contest/274545/problem/A
#  OK

class segtree(object):

    def update(self, node=0, left=0, right=0, number=0):

        if number < left or number > right:
            return

        if left == number and number == right:
            self.tree[node] = 1
            return

        mid = (left + right) // 2
        if number <= mid:
            self.update(2 * node + 1, left, mid, number)
        else:
            self.update(2 * node + 2, mid + 1, right, number)

        self.tree[node] = self.tree[2 * node + 1] + self.tree[2 * node + 2]
        return

    def query(self, left=0, right=0, node=0, query_left=0, query_right=0):

        if query_left > right or query_right < left:
            return 0

        if query_left <= left and right <= query_right:
            return int(self.tree[node])

        ans = 0
        mid = (left + right) // 2

        ans += self.query(left, mid, 2 * node + 1, query_left, query_right)
        ans += self.query(mid + 1, right, 2 * node + 2, query_left, query_right)

        return ans

    def __init__(self, n=0):
        self.tree = [0] * (4 * (n + 1))
        return


def main():
    n = int(input())

    array = list(map(int, input().split()))
    Tree = segtree(int(1e5 + 2))

    mx = max(array)
    for num in array:
        print(Tree.query(0, mx, 0, num + 1, mx), end=' ')

        Tree.update(0, 0, mx, num)

    # print(ans)


if __name__ == '__main__':
    main()