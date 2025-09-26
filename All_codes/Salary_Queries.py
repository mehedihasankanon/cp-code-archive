# https://cses.fi/problemset/task/1144/
# somewhat correct, partial score

class segtree(object):

    def update(self, node=0, left=0, right=0, idx = 0, number=0):

        if idx < left or idx > right:
            return

        if left == idx and idx == right:
            self.tree[node] = (1, (number, number))
            return

        mid = (left + right) // 2
        if idx <= mid:
            self.update(2 * node + 1, left, mid, idx ,number)
        else:
            self.update(2 * node + 2, mid + 1, right, idx, number)

        self.tree[node] = (self.tree[2 * node + 1][0] + self.tree[2 * node + 2][0], 
                           (min(self.tree[2 * node + 1][1][0], self.tree[2 * node + 2][1][0]), max(self.tree[2 * node + 1][1][1], self.tree[2 * node + 2][1][1]))
                           )
        return

    def query(self, left=0, right=0, node=0, query_left=0, query_right=0):

        if query_left > self.tree[node][1][1] or query_right < self.tree[node][1][0]:
            return 0

        if query_left <= self.tree[node][1][0] and self.tree[node][1][1] <= query_right:
            return self.tree[node][0]

        ans = 0
        mid = (left + right) // 2

        ans += self.query(left, mid, 2 * node + 1, query_left, query_right)
        ans += self.query(mid + 1, right, 2 * node + 2, query_left, query_right)

        return ans

    def __init__(self, n=0, array = None):
        self.tree = [(0, (0,0))] * (4 * (n + 1)) 
        
        if array is None:
            array = []
        for i in range(n):
            self.update(0, 0, n - 1, i ,array[i])
        return


def main():
    n, q = map(int, input().split())

    array = list(map(int, input().split()))
    Tree = segtree(int(n), array)

    # print(ans)
    for _ in range(q):
        query , n1, n2 = input().split()
        n1 = int(n1)
        n2 = int(n2)
        
        if query == '!':
            Tree.update(0, 0, n - 1, n1, n2)
        else:
            print(Tree.query(0, n - 1, 0, n1, n2))


if __name__ == '__main__':
    main()
