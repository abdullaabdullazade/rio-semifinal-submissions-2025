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



bool is_p(int g){
    std::string d = std::to_string(g);

    for(int i = 0, j = d.size()-1;i < j; i++,j--){
        if(d[i] != d[j]) return false;
    }
    return true;
}
int main(){
    int a,b;
    std::cin >> a >> b;
    for(int i =a; i <= b;i++){
        if(!is_p(i)){
            std::cout << i;
        }else{
            std::cout << "Palindrome!";
        }
        std::cout << std::endl;
    }
    return 0;
}