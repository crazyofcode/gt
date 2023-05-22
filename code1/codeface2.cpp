#if 0
#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>

using namespace std;
int main()
{
    //输入时处理，包含置0、逆置、转换成真实数字等步骤
    string s;
    cin >> s;
    int n1 = s.length();	//长度
    char str1[10];
    memset(str1, 0, sizeof(str1));
    for (int i = 0; i < n1;i++)
        str1[i] = s[n1 - i - 1]-'0';
    
    string s2;
    cin >> s2;
    int n2 = s2.length();
    char str2[10];
    memset(str2, 0, sizeof(str2));
    for (int i = 0; i < n2;i++)
        str2[i] = s2[n2 - i - 1]-'0';


    char res[20];
    memset(res, 0, sizeof(res));

    //核心代码
    int i, j;
    for (i = 0; i < n1;i++)
        for (j = 0; j < n2;j++)
            res[i + j] += str1[i] * str2[j];

    for (i = 0; i < n1 + n2;i++)
    {
        if(res[i]>=10)
        {
            res[i + 1] += res[i] / 10;
            res[i] %= 10;
        }

    }

    //从不为0的那一位开始输出（删除前导0），如果全部为0，则输出0
    int k;
    for (k = n1 + n2 - 1; !res[k]&&k>0; k--)
        ;   //注意这个分号

    for (int i = k; i >= 0; i--)
        cout << int(res[i]);
    cout << endl;


    return 0;
}
#endif
/*
#include <iostream>
#include <algorithm>
#include <string>

struct member{
    std::string numb;
    int mor;        //de
    int tal;        //cai
    int sum;
};
void quickSort(struct member arr[], int begin, int end) {
	if (begin >= end) return;
	int left = begin;
	int right = end;
	int temp = arr[left].sum;
 
	while (left < right) {
		while (left < right && arr[right].sum >= temp) {
			right--;
		}  
		if (left < right) {
			arr[left] = arr[right];
		}
		while (left < right && arr[left].sum <= temp) {
			left++;
		}
		if (left < right) {
			arr[right] = arr[left];
		}
		if (left == right) {
			arr[left].sum = temp;
		}
	}
	quickSort(arr, begin, left - 1);
	quickSort(arr, left + 1, end);
}  
int main()
{
    int number,min_score,pri,i=0,j=0;
    std::cin>>number>>min_score>>pri;
    int x=0,y=0,z=0;
    struct member arr[number];
    struct member pro[number];
    struct member bro[number];
    struct member tro[number];
    struct member aro[number];
    int cnt=0;
    while(i<number)
    {
        std::cin>>arr[i].numb>>arr[i].mor>>arr[i].tal;
        arr[i].sum = arr[i].mor + arr[i].tal;
        if(arr[i].mor>=pri&&arr[i].tal>=pri)
        {
            cnt++;
            pro[j].mor=arr[j].mor;
            pro[j].tal=arr[i].tal;
            pro[j].sum=arr[i].sum;
            j++;
        }
        else if(arr[i].mor>=pri&&arr[i].tal<pri)
        {
            cnt++;
            bro[x].mor=arr[j].mor;
            bro[x].tal=arr[i].tal;
            bro[x].sum=arr[i].sum;
            x++;
        }
        else if(arr[i].mor<pri&&arr[i].mor>=min_score&&arr[i].tal>=min_score&&arr[i].tal<pri&&arr[i].mor>=arr[i].tal)
        {
            cnt++;
            tro[y].mor=arr[j].mor;
            tro[y].tal=arr[i].tal;
            tro[y].sum=arr[i].sum;
            y++;

        }
        else if(arr[i].mor>=min_score&&arr[i].tal>=min_score)
        {
            cnt++;
            aro[z].mor=arr[j].mor;
            aro[z].tal=arr[i].tal;
            aro[z].sum=arr[i].sum;
            z++;
        }
        i++;
    }
    quickSort(pro,0,j-1);
    quickSort(bro,0,x-1);
    quickSort(tro,0,y-1);
    quickSort(aro,0,z-1);
    std::cout<<cnt<<std::endl;
    for(i=0;i<j;i++)
    {
        std::cout<<pro[i].numb<<" "<<pro[i].mor<<" "<<pro[i].tal<<std::endl;
    }
    for(i=0;i<x;i++)
    {
        std::cout<<bro[i].numb<<" "<<bro[i].mor<<" "<<bro[i].tal<<std::endl;
    }
    for(i=0;i<j;y++)
    {
        std::cout<<tro[i].numb<<" "<<tro[i].mor<<" "<<bro[i].tal<<std::endl;
    }
    for(i=0;i<j;z++)
    {
        std::cout<<aro[i].numb<<" "<<aro[i].mor<<" "<<pro[i].tal<<std::endl;
    }
    return 0;
}
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//结构体（存储每一个单个组）
typedef struct a1
{
    long a;
    int b;
    int c;
};

//排序函数（直接按题意翻译【输入两个单个组，对组内具体数据进行排序，返回bool】）
bool sort_(a1 the_list, a1 the_list2)
{
    long a = the_list.a;
    int b = the_list.b;
    int c = the_list.c;
    long a1 = the_list2.a;
    int b1 = the_list2.b;
    int c1 = the_list2.c;
    if((b + c) > (b1 + c1))
    {
        return true;
    }
    else if((b + c) < (b1 + c1))
    {
        return false;
    }
    else if((b + c) == (b1 + c1))
    {
        if(b > b1)
        {
            return true;
        }
        else if(b < b1)
        {
            return false;
        }
        else if(b == b1)
        {
            return a < a1;
        }
    }
}

//输出结果
void shuchu(vector<a1> sort_list)
{
    for(a1 aa1 : sort_list)
    {
    	//也是查了一下，endl的效率低于\n
        cout<<aa1.a<<" "<<aa1.b<<" "<<aa1.c<<"\n";
    }
}

//主函数
int main()
{
	//因为准考证号是8位整数，我觉得最好用long（int【-65536~65535】）
    long a;
    int b,c;
    cin>>a>>b>>c;
	//存储结果
    vector<a1> v1;
    vector<a1> v2;
    vector<a1> v3;
    vector<a1> v4;

    int count = 0;
	
	//输入内容并送入对应vector容器
    for(int i = 0; i < a; i++)
    {
        a1 aa2;
        cin>>aa2.a>>aa2.b>>aa2.c;

        if(aa2.b >= b && aa2.c >= b)
        {
            count++;

            if(aa2.b >= c && aa2.c >= c)
            {
                v1.push_back(aa2);
                 
            }
            else if(aa2.b >= c && aa2.c < c)
            {
                v2.push_back(aa2);
                
            }
            else if(aa2.b >= aa2.c && aa2.b < c && aa2.c < c)
            {
                v3.push_back(aa2);
                
            }
            else
            {
                v4.push_back(aa2);
               
            }
        }
    }

	//输出
    cout<<count<<"\n";
    sort(v1.begin(), v1.end(), sort_);      //stl内置函数--快排，插入
    shuchu(v1);
    sort(v2.begin(), v2.end(), sort_);
    shuchu(v2);
    sort(v3.begin(), v3.end(), sort_);
    shuchu(v3);
    sort(v4.begin(), v4.end(), sort_);
    shuchu(v4);

	//测试使用（暂停看结果用）
    system("pause");
    return 0;
}
