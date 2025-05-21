// Bismillahir rahmanir rahim
    
// https://vjudge.net/problem/UVA-673
// AC
    
#pragma GCC optimize("O1,O2,O3")
#pragma GCC optimize("Ofast,unroll-loops")
    
#include <bits/stdc++.h>
    
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,bmi,bmi2,lzcnt")
    
using namespace std;
    
using ll = long long;
// using ll = int;
using ld = long double;
    
ll mod = 1000000007;
// ll mod = 998244353;
    
#define nl "\n"
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define forr(i,s,e) for(ll i = s; i >= e; i--)
    
#define DEBUG
    
#ifdef DEBUG
#define dbg(n) cerr<<__LINE__<<" "<<#n<<" "<<n<<endl;
#define dbgc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<el<<" ";}cerr<<']'<<endl;
#define dbgcc(a) cerr<<__LINE__<<" "<<#a<<" "<<'['<<" ";for(auto el:a){cerr<<'{'<<" "<<el.first<<','<<el.second<<" "<<'}'<<" ";}cerr<<']'<<endl;
#else
#define dbg(n) // single variable, string
#define dbgc(a) // vector, deque, array
#define dbgcc(a) // map, vector<pll>
#endif
    
ll testcase = 1;

void Pre(void)
{
    
    return;
}   
    
    
void Solve(ll test)
{
    
}   

void Solve(string str)
{
    stack<char> st;
    for(auto ch : str)
    {
        if(ch == '(' || ch == '[')
        {
            st.push(ch);
        }
        else if(ch == ')')
        {
            if(!st.empty())
            {
                if(st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    cout << "No" << nl;
                    return;
                }
            }
            else
            {
                cout << "No" << nl;
                return;
            }
        }
        else if(ch == ']')
        {
            if(!st.empty())
            {
                if(st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    cout << "No" << nl;
                    return;
                }
            }
            else
            {
                cout << "No" << nl;
                return;
            }
        }
    }
    if(st.empty())
    {
        cout << "Yes" << nl;
        return;
    }
    cout << "No" << nl;
    return;
}

void Solve(char *str)
{
    stack<char> st;
    char *ch = str;
    while(*ch)
    {
        if(*ch == '(' || *ch == '[')
        {
            st.push(*ch);
        }
        else if(*ch == ')')
        {
            if(!st.empty())
            {
                if(st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    cout << "No" << nl;
                    return;
                }
            }
            else
            {
                cout << "No" << nl;
                return;
            }
        }
        else if(*ch == ']')
        {
            if(!st.empty())
            {
                if(st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    cout << "No" << nl;
                    return;
                }
            }
            else
            {
                cout << "No" << nl;
                return;
            }
        }
        ch++;
    }
    if(st.empty())
    {
        cout << "Yes" << nl;
        return;
    }
    cout << "No" << nl;
    return;
}
    
int main()
{   
    // ios_base::sync_with_stdio(false); 
    // cin.tie(nullptr); cout.tie(nullptr);
    Pre();
    
    cin >> testcase; getchar();
    
    // ll test;
    // for(test = 1; test <= testcase; test++) {
    //     Solve(test);
    // }

    // string str;
    char str[130];
    while(testcase--)
    {
        fgets(str,130,stdin);
        // str.pop_back();
        if(str[strlen(str) - 1] == '\n') str[strlen(str) - 1] = '\0';
        Solve(str);
    }

    return 0;
}   