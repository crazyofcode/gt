#if 0
#include <iostream>
#include <string>
using std::string;
using namespace std;
int main()
{
    char ch[][10]={'\0'};
    int i=0;
    int j=0;
    while(cin>>ch[i][j])
    {
        i++;
        j=0;
    }
    cout<<i;
    return 0;
}
#endif


#if 0
#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>

int main()
{
    int numb=0;
    char str[20]={'\0'};
    char str1[10]={'\0'};
    char arr[9]={'1','2','3','4','5','6','7','8','9'};
    char arr1[2]={'S','B'};
    std::cin>>numb;
    int i=1;
     int sort_m=0;
    while(numb)
    {
        int temp=numb%10;
        if(i==1)
        {
            for(int j=0;j<temp;j++)
                {
                    str1[sort_m]=arr[j];
                    sort_m++;
                }
                sort_m=0;
        }
        else {
            for(int j=0;j<temp;j++)
            {
                str[sort_m]=arr1[i-2];
                sort_m++;
            }
        }
        i++;
        numb/=10;

    }
    int length;
    length=strlen(str);
    for(int j=length;j>=0;j--)
    {
        std::cout<<str[j];
    }
    std::cout<<str1;
    std::cout<<std::endl;
    return 0;
}
#endif

//3*n+1猜想进阶
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
#include<map>

using namespace std;

void function(int &number, set<int, greater<int>> &checkNumbers) {
    if (number == 1) {
        return;
    }
    if (number % 2) {
        number = (number * 3 + 1) / 2;
    } else {
        number = number / 2;
    }
    checkNumbers.erase(number);
    function(number, checkNumbers);
}

int main() {
    int n;
    cin >> n;
    set<int, greater<int>> checkNumbers;
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        checkNumbers.insert(number);
    }
    for (set<int, greater<int>>::iterator it = checkNumbers.begin(); it != checkNumbers.end(); it++) {
        int number = (*it);
        function(number, checkNumbers);
    }
    for (set<int, greater<int>>::iterator it = checkNumbers.begin(); it != checkNumbers.end(); it++) {
        if (it != checkNumbers.begin()) {
            cout << " ";
        }
        cout << (*it);
    }
}
