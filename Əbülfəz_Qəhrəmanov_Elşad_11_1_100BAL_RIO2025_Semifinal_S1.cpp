#include "bits/stdc++.h"

using namespace std;

const int mxN = 1003;
const int bf = 1 << 15;

multiset<int> rows[mxN];

inline namespace input{
    char buf[bf];
    int p, l;

    char nextChar(){
        if (p == l){
            p = 0;
            l = fread(buf, 1, bf, stdin);
            if (!l){
                return EOF;
            }
        }
        return buf[p ++];
    }

    int nextInt(){
        int x = 0;
        int s = 1;
        char c;
        while (!isdigit(c = nextChar())){
            if ('-' == c){
                s = -1;
            }
        }
        x = c - '0';
        while (isdigit(c = nextChar())){
            x = x * 10 + c - '0';
        }
        return x * s;
    }
}

inline namespace output{
    char buf[bf];
    int p;

    void flushOut(){
        fwrite(buf, 1, p, stdout);
        p = 0;
    }

    void writeChar(char c){
        if (p == bf){
            flushOut();
        }
        buf[p ++] = c;
    }

    void writeInt(int x){
        static char numBuf[10];
        if (x < 0){
            writeChar('-');
            x = -x;
        }
        int l = 0;
        for (; x >= 10; x /= 10){
            numBuf[l ++] = '0' + x % 10;
        }
        writeChar('0' + x);
        while (l){
            writeChar(numBuf[--l]);
        }
        writeChar('\n');
    }

    void initOutput(){
        assert(!atexit(flushOut));
    }
}

int main(){
    initOutput();

    int N = nextInt(), K = nextInt();

    vector<pair<int,int>> vp;

    for (int i = 0; i < N; i ++){
        for (int j = 0; j < K; j ++){
            int s = nextInt();
            vp.emplace_back(s, i);
            rows[i].insert(s);
        }
    }

    multiset<int> cur;

    for (int i = 0; i < N; i ++){
        cur.insert(*rows[i].begin());
    }

    sort(begin(vp),end(vp));

    int ans = INT_MAX;

    for (auto& [x, i] : vp){
        ans = min(ans, (*--end(cur)) - x);
        rows[i].erase(begin(rows[i]));
        cur.erase(cur.find(x));
        if (rows[i].empty()){
            break;
        } else {
            cur.insert(*rows[i].begin());
        }
    }

    writeInt(ans);
}