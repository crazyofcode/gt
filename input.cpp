/*#include <iostream>
#include <string>
#include <string.h>
using std::string;
using namespace std;
int main()
{
    cout<<"hollo world";
    return 0;
}*/
#if 0
#include <iostream>
#include <string>
using namespace std;
using std::string;
int main()
{
	int n;
	cin >> n;
	string test;
	int l = 0;//输入的字符串的长度
 
	for (int i = 0; i < n; i++)
	{
		int left = 0;//记录左边的"P"出现的次数
		int mid = 0;//记录中间的"A"出现的次数
		int right = 0;//记录右边的"T"出现的次数
		//输入一个字符串，判断
		cin >> test;
		l = test.size();
		//遍历字符串中的每一个字母
		for (int j = 0; j < l; j++)
		{
			//如果出现了非法字符，直接输出“NO”，并结束
			if (test[j] != 'P' && test[j] != 'A' && test[j] != 'T' && test[j] != ' ')
			{
				//cout << "NO" << endl;
				break;
			}
			//如果当前字符是"A",则继续循环，知道找到"P"
			if (test[j] == 'A')
			{
				if (left == 1)
				{
					mid++;
				}
				continue;
			}
			//如果当前字符是"P",
			if (test[j] == 'P')
			{
				left++;
				continue;
			}
			//如果当前字符是"T"
			if (test[j] == 'T')
			{
				if (mid >= 1)
				{
					right++;
				}
				continue;
			}
 
		}
		if (left == 1 && right == 1 && mid >= 1)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	system("pause");
	return 0;
}
#endif


#if 0
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n;
    char test[100];
    
    cin >> n;
    
    for(int i = 0; i < n; ++i){
        int P_count = 0;
        int A_count = 0;
        int T_count = 0;
        int X_count = 0;
        int P_index = -1;
        int T_index = -1;
            
        
        cin >> test;
        for(int j = 0; j < strlen(test); ++j){
            
            if(test[j] == 'P'){
                P_count++;
                P_index = j;
            }
            else if(test[j] == 'A'){
                A_count++;
            }
            else if(test[j] == 'T'){
                T_count++;
                T_index = j;
            }
            else{
                X_count++;
            }
        }
        
        if(P_count != 1 || T_count != 1 || X_count != 0 || (T_index - P_index) <= 1 || P_index * (T_index - P_index - 1) != (strlen(test) - T_index - 1)){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    
    return 0;
    
}
#endif
/*
#include<iostream>
#include<iomanip>
using namespace std;
int a, b;
double c, d;
int mark_c=0, mark_d=0;
int main() {
	cin >> a>>b;
	for (int i = 1; i <= a; i++) {
		if (i % b == 0) {
			c += i;
			mark_c++;
	}
		if(i%b!=0) {
			d += i;
			mark_d++;
		}
	}
	c = c / mark_c;
	d = d / mark_d;
	cout << setiosflags(ios::fixed) << setprecision(1) << c <<" "<< d;

}*/

#include <iostream>
#include <ctype.h>
#include <string>
using std::string;
int main()
{
	return 0;

}