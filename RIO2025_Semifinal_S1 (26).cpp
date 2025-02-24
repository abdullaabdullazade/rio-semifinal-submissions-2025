#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>
#include<cstdlib>
#include<map>
#include<unordered_set>
#include<string>
#include<queue>
#include<algorithm>
#include<cmath>
#include<bitset>

bool is_p(long long&& g){
    std::string d = std::to_string(g);
    for(int i = 0, j = d.size()-1;i < j; i++,j--){
        if(d[i] != d[j]) return false;
    }
    return true;
}

int main(){
    long long  a,b;
    std::cin >> a >> b;
    for(int i =a; i <= b;i++){
        if(!is_p(i)){
            std::cout << i;
        }else{
            std::cout << "Palindrome!";
        }
        std::cout << "\n";
    }
}
// std::pair<bool, std::vector<int>> c(std::vector<int> s){
//     int sum = 0;
//     for(int i : s){
//         sum +=i;
//     }
//     std::vector<int> res;
//     if(sum % 2 !=0){
//         std::pair<bool,std::vector<int>> l;
//         l.first = false;
//         l.second = res;
//         return l;
//     }
//     sum /=2;
//     std::sort(s.begin(),s.end());
//     int v = 0;
//     for(int i =0,j = s.size()-1 ; i < j;i++){
//         v += s[i];
//         v += s[j];
//         if(v > sum){
//             v -=s[j];
//             j--;
//         }else if(v < sum){
//             res.push_back(i);
//             res.push_back(j);
//             i ++;
//             j--;
//         }else{
//             std::pair<bool,std::vector<int>> l;
//             l.first = true;
//             l.second = res;
//             return l;
//         }
//     }
//     res.clear();
//     std::pair<bool,std::vector<int>> l;
//     l.first = false;
//     l.second = res;
//     return l;
// }
// int main(){
//     int n;
//     std::cin >> n;
//     std::vector<std::vector<int>> nums;
//     std::vector<std::pair<bool, std::vector<int>>> ans;
//     for(int i =0; i < n;i++){
//         int t;
//         std::cin >> t;
//         std::vector<int> a(t,0);
//         for(int j =0; j < t;j++){
//             std::cin >> a[j];
//         }
//         int first = a[0];
//         for(int j =0; j < a.size()-1;j++){
//             a[j] = std::abs(a[j] - a[j+1]);
//         }
//         a[a.size()-1] = std::abs(a[a.size()-1] - first);
//         if(a.size() == 2){
//             std::vector<int> v;
//             v.push_back(1);
//             std::pair<bool,std::vector<int>> f;
//             f.first = 1;
//             f.second = v;
//             ans.push_back(f);
//         }else{
//             ans.push_back(c(a));
//         }
//     }

//     for(auto i : ans){
//         if(i.first){
//             std::cout << i.second.size() << "\n";
//             for(int j : i.second){
//                 std::cout << j << " ";
//             }
//             std::cout << "\n";
//         }else{
//             std::cout << -1;
//         }
//     }

//     return 0;
// }


// int main(){
//     int n,k;
//     std::cin >> n >> k;
//     std::vector<std::vector<int>>g;
//     for(int i=0; i < n;i++){
//         std::vector<int> a(k,0);
//         for(int j =0; j < k;j++){
//             std::cin >> a[j];
//         }
//         std::sort(a.begin(),a.end());
//         g.push_back(a);
//     }
//     int min_r = 10000;
//     for(int i=0; i < n-1;i++){
//         for(int j =0; j < k;j++){
//            if(g[i][j] - g[i+1][j])
//         }
//     }
// }