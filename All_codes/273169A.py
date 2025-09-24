#  https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/A
# OK

class segtree(object):
    
    def build(self, array = [], node = 0, left = 0, right = 0):
        
        if left == right:
            self.tree[node] = array[left]
            return
        else:
            mid = (left + right) // 2
            self.build(array, node * 2 + 1, left, mid)
            self.build(array, 2 * node + 2, mid + 1, right)
            
            self.tree[node] = self.tree[2 * node + 1] + self.tree[2 * node + 2]
            return
        
        
    def update(self, node = 0, left = 0, right = 0, array_index = 0, new_value = 0):
        
        if left == right:
            self.tree[node] = new_value
            return
        
        mid = (left + right) // 2
        if array_index <= mid: 
            self.update(2 * node + 1, left, mid, array_index, new_value)
        else:
            self.update(2 * node + 2, mid + 1, right, array_index, new_value)
            
        self.tree[node] = self.tree[2 * node + 1] + self.tree[2 * node + 2]     
        return
    
    
    def query(self, left = 0, right = 0, node = 0, query_left = 0, query_right = 0):
        
        if query_left > right or query_right < left:
            return 0
            
        if query_left <= left and right <= query_right:
            return int(self.tree[node])
        
        ans = 0
        mid = (left + right) // 2
        
        ans += self.query(left, mid, 2 * node + 1, query_left, query_right)
        ans += self.query(mid + 1, right, 2 * node + 2, query_left, query_right)
            
        return ans
        
        
    
    def __init__(self, array = None):
        if array is None:
            array = []
        self.tree = [0] * (4 * len(array)) if array else [0]
        if array:
            self.build(array, 0, 0, len(array) - 1)
        
        
        
def main():
    n, q = map(int, input().split())
    
    array = list(map(int, input().split()))
    Tree = segtree(array)
    
    for _ in range(q):
        
        type, num1, num2 = map(int, input().split())
        if type == 1:
            Tree.update(0, 0, n - 1, num1, num2)
        else:
            print(Tree.query(0, n - 1, 0, num1, num2 - 1))
            

if __name__ == '__main__':
    main()