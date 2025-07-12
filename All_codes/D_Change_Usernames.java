// https://atcoder.jp/contests/abc285/tasks/abc285_d
// did this with CPP, just checed it with java lol

import java.util.*;

public class D_Change_Usernames {

    static final long MOD = 1000000007;
    static long testcase = 1;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // Pre-processing (optional, but can add custom logic here)
        // Pre();
        
        // Read the number of test cases
        // int testCase = sc.nextInt();  // Uncomment if the number of test cases varies
        
        for (long test = 1; test <= testcase; test++) {
            solve(test, sc);
        }
    }

    public static void solve(long test, Scanner sc) {
        long n = sc.nextLong();
        Map<String, String> adj = new HashMap<>();
        Set<String> strings = new HashSet<>();
        
        // Reading the edges (from, to)
        for (long i = 0; i < n; i++) {
            String from = sc.next();
            String to = sc.next();
            if (adj.containsKey(to)) {
                System.out.println("No");
                return;
            }
            adj.put(to, from);
        }

        // Now check for cycles or connectivity in the inverse graph
        Map<String, Long> inDegree = new HashMap<>();
        Set<String> allStrings = new HashSet<>();
        for (Map.Entry<String, String> entry : adj.entrySet()) {
            String u = entry.getKey();
            String v = entry.getValue();
            inDegree.put(v, inDegree.getOrDefault(v, 0L) + 1);
            allStrings.add(u);
            allStrings.add(v);
        }

        Queue<String> q = new LinkedList<>();
        long sz = allStrings.size(), vis = 0;

        // Adding nodes with in-degree 0 to the queue
        for (String str : allStrings) {
            if (inDegree.getOrDefault(str, 0L) == 0) {
                q.add(str);
            }
        }

        // Process the queue and check for reachability
        while (!q.isEmpty()) {
            String str = q.poll();
            vis++;
            
            // Visit the adjacent node
            String next = adj.get(str);
            if (next != null) {
                long ind = inDegree.getOrDefault(next, 0L) - 1;
                inDegree.put(next, ind);
                if (ind == 0) {
                    q.add(next);
                }
            }
        }

        if (vis != sz) {
            System.out.println("No");
            return;
        }

        System.out.println("Yes");
    }

    // Optional Pre-function (if needed for initialization)
    public static void pre() {
        // Pre-processing logic if needed
    }
}
