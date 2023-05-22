#include<bits/stdc++.h>
using namespace std;

//判断是否有2或4
int judge(int n){
    while(n){
        //判断最后一位的数字
        if(n%10==2 || n%10==4){
            return 0;
        }
        //继续减少位数，循环判断取模
        n=n/10;
    }
    //while循环完，没有返回0，就是不存在，返回1.
    return 1;
}

int main(){
    int cnt=0;

    for(int i = 1; i < 2019; i++){
        if(judge(i)){
            for(int j = 1; j < i; j++){
                if(judge(j)){
                    for(int k = 1; k < j; k++){
                        if(judge(k)){
                            if((i+j+k) == 2019){
                                cnt++;
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<cnt;
    return 0;

}
