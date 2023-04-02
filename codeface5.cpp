#if 0
#include <iostream>
#include <string>

#if 0
void func(int m,int n)
{
    int temp;
    if(m>n)
    {
        temp=m;
        m=n;
        n=temp;
    }
}

int main()
{
    /* std::string book;
    std::cin>>book;
    std::cout<<book;
    */
   int *p;
   int a,b;
   p=&a;
   /*std::cin>>a;
   std::cout<<a<<std::endl;
   std::cin>>*p;
   std::cout<<*p<<std::endl;
    */
   std::cin>>a>>b;
   int &m=a;
   int &n=b;
    func(a,b);
    std::cout<<"m="<<m<<"   "<<"n="<<n<<std::endl;
}
#endif
int main()
{
    int m[10];
    int *p=m;
    for(int i=0;i<10;i++)
    {
        std::cin>>*(p+i);
        *(p+i)*=i;
    }
    for(int i=0;i<10;i++)
    {
        std::cout<<*(p+i)<<std::endl;
    }
}
#endif
#if 0
#include <iostream>
int func(int n)
{
    return n*n;
}
int main()
{
    int n=0,sum=0;
    std::cin>>n;
    for(int i=0;i<=n;i++)
    {
        int temp;
        temp=func(i);
        sum+=temp;
    }
    std::cout<<sum<<std::endl;
}
#endif

#if 0
#include <iostream>
long func(int n)
{
    long sum=1;
    if(n==0||n==1)
    {
        return n;
    }
    else{
        int i=n;
        while(i--)
        {
            sum*=n;
        }
        return sum;
    }
}
int main()
{
    long sum=0;
    int n;
    std::cin>>n;
    for(int i=0;i<=n;i++)
    {
        long temp;
        temp=func(i);
        sum+=temp;
    }
    std::cout<<sum<<std::endl;
}
#endif


//#include <iostream>
/*int func(int n)
{
    if(n==1||n==2)
        return 1;
        else return func(n-2)+2*func(n-1);
}
int main()
{
    int n;
    int s=0;
    std::cin>>n;
    for(int i=1;i<=n;i++)
    {
        int temp=func(i);
        s+=temp;
    }
}
*/
/*#include <cmath>
int main()
{
    int n=1100;
    int temp=0;
    int i=n;
    while(i<10000)
    {
        int numb;
        numb=sqrt(i);
        int a1,a2;
        a1=(i/10)%10;
        a2=(i/100)%10;
        if((pow(numb,2)==i)&&a1==a2)
            break;
        if(temp==99)
        {
            i=i+1100-99;
            temp=0;
        } 
        else
        {
            i+=11;
            temp+=11;
        }
    }
    std::cout<<i<<std::endl;
}*/
/*#include <iostream>
int main()
{
    int n;
    std::cin>>n;
    int count=0;
    while(n!=1)
    {
        if(n%2==0)
        {
            n/=2;
            count++;
        }
        else if(n%2==1)
        {
            n=3*n+1;
            n/=2;
            count++;
        }
    }
        std::cout<<count<<std::endl;
}*/
//#include <iostream>
//#include <string>
//#include <sstream>
/*
int main()
{
    std::string numb;
    std::cin>>numb;
    int sum=0;
    int len=numb.size();
    for (int i = 0; i < len; i++)
    {
        std::string ch;
        ch=numb.substr(i,1);
        int temp;
        std::istringstream sstream(ch);
        sstream>>temp;
        sum+=temp;
    }
    std::string data;
    data=std::to_string(sum);
    int i=0;
    while(data[i]!='\0')
    {
        switch(data[i])
        {
            case '0':std::cout<<"ling";break;
            case '1':std::cout<<"yi";break;
            case '2':std::cout<<"er";break;
            case '3':std::cout<<"san";break;
            case '4':std::cout<<"si";break;
            case '5':std::cout<<"wu";break;
            case '6':std::cout<<"liu";break;
            case '7':std::cout<<"qi";break;
            case '8':std::cout<<"ba";break;
            case '9':std::cout<<"jiu";break;
        }
        if(i<len-1)
        std::cout<<" ";
        i++;
        
    }
 
}*/

#if 0
int main()
{
    std::string isbn;
    int n=0;
    std::cin>>n;
    while(n--)
    {
        std::cin>>isbn;
        int i;
        int len=isbn.length();
        for(i=0;i<len;i++)
        {
            if((isbn[i]-'0'!='P'-'0')&&(isbn[i]-'0'!='T'-'0')&&(isbn[i]-'0'!='A'-'0'))
                {
                    std::cout<<"NO"<<std::endl;
                    break;
                }

        }
        if(i>=len)
        std::cout<<"YES"<<std::endl;
    }
}
#endif
/*#include <iostream>
#include <string>
int main()
{
    typedef struct student{
            std::string name;
            std::string numb;
            int score;
    }stu;
    int sum=0;
    std::cin>>sum;
    stu *p=NULL;
    p=new stu[sum];
    int m=0,n=0;
    int max,min;
    for(int i=0;i<sum;i++)
    {
        std::cin>>(p+i)->name>>(p+i)->numb>>(p+i)->score;
        if(i==0)
        {
            min=(p+i)->score;
            max=min;
        }
        else {if((p+i)->score>max)
        {
            max=(p+i)->score;
            m=i;
        }     if((p+i)->score<min)
        {
            min=(p+i)->score;
            n=i;
        }
        }
        
    }
    std::cout<<p[m].name<<" "<<p[m].numb<<std::endl;
    std::cout<<p[n].name<<" "<<p[n].numb<<std::endl;
    delete[] p;
}*/
//素数对猜想
/*#include <iostream>
#include <cmath>

int main()
{
    int n,i,j,m=0;
    std::cin>>n;
    for(int i=2;i+2<n;i++)
    {
        for(j=2;j<sqrt(i+2);j++)
        {
            if(i%j==0||(i+2)%j==0)
                break;
        }
        if(j>sqrt(i+2))
            m++;
    }
    std::cout<<m<<std::endl;
    return 0;
}*/


//数组元素向右移

//方法一
#if 0
#include <iostream>
#include <cstring>
int main()
{
    int numb[1024]={0};
    int sum,length;
    std::cin>>sum>>length;
    for(int i=0;i<sum;i++)
    {
        std::cin>>numb[i];
    }
    for(int i=sum-1;i>=0;i--)
    {
        numb[i+length]=numb[i];
    }
    for(int i=0;i<length;i++)
    {
        numb[i]=numb[sum+i];
    }
    for(int i=0;i<sum;i++)
    {
        std::cout<<numb[i];
        if(i!=sum-1)
            std::cout<<" ";
    }
    return 0;
}
#endif


//方法二:c

#if 0
#include <stdio.h>
 
void swap(int *a, int *b){
    int c = *b;
    *b = *a;
    *a = c;
}
 
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
 
    // 这里考虑左移，题目不要求
    if(k < 0){
        k = -k;
        k = n - (k % n);
    }
 
 
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
 
    int r = 0;// 中转元素
    int s = k % n; // 目标元素
    for (int i = 0; i < n-1; ++i) {
        if(s == r){
            i++;
            /* 每次出现'中转' 等于 '目标'时，
           说明我们一次排好俩，所以循环次数减一*/
            r++;
            s = (k+r) % n;
        }
 
        swap(&arr[r], &arr[s]);
        
        s = (s + k%n) % n;
    }
 
    for (int i = 0; i < n; ++i) {
        printf("%d", arr[i]);
        if(n - i != 1) printf(" ");
    }
}
#endif


//c++
#if 0
#include <iostream>

int main()
{
    
}
#endif




#include<iostream>
 
 //kuaisupaixu
void quickSort(int arr[], int begin, int end) {
	if (begin >= end) return;
	int left = begin;
	int right = end;
	int temp = arr[left];
 
	while (left < right) {
		//从后往前找比他小的放前面，从前往后找比它大的放后面
		//以第一个数为基准，必须先从后往前走，再从前往后走
		while (left < right && arr[right] >= temp) {
			right--;
		}  //跳出此循环，代表right找到了比temp小的数字，所以此时arr[left]=arr[right]
		if (left < right) {
			arr[left] = arr[right];
		}
		while (left < right && arr[left] <= temp) {
			left++;
		}//同理
		if (left < right) {
			arr[right] = arr[left];
		}
		if (left == right) {
			arr[left] = temp;
		}
	}
	quickSort(arr, begin, left - 1);
	quickSort(arr, left + 1, end);
}
int main() {
 
    int numb;
    std::cin>>numb;
	int arr[numb];
    for(int i=0;i<numb;i++)
    {
        std::cin>>arr[i];
    }
	quickSort(arr, 0, numb-1);
	for (auto x : arr) {
		std::cout << x << " ";
	}
	return 0;
}


#if 0
#include <iostream>
#include <cstring>
#include <algorithm>

int main()
{
    std::string str[40];
    int i=0;
    while(i<20)
    {
        int j=0;
        std::cin>>str[i][j];
        //const std::string &ch_s=str[i][j];
        if()
        {
            i++;
        }
        if(!(str[i].compare("\n")))
        {
            break;
        }
        
    }
    int cnt=i;
    std::string ch;
    for(int j=0;j<i;i--,j++)
    {
        ch=str[i];
        str[i]=str[j];
        str[j]=ch;
    }
    for(int j=0;j<cnt;j++)
    {
        std::cout<<str[j];
        if(j!=cnt-1)
        {
            std::cout<<" ";
        }
    }
    return 0;
}


#endif




//字符串的倒序


#if 0
#include<stdio.h>
#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
    string a;
    //char a[80];
    vector<string> res;
    int i = 0;

    //gets(a);//
    getline(cin,a);
    int len = a.length();

    while(a[i]==' ' && i<len) i++;//¿ªÍ·µÄ¿Õ¸ñ£¿½áÎ²ÒÑ¾­±£Ö¤£¬²»ÓÃÈ¥³ý½áÎ²¿Õ¸ñ

    while(i<len)
    {
        int start = i;
        if(a[start] != ' ')
        {
            //±£Ö¤ÖÐ¼äÖ»ÓÐÒ»¸ö¿Õ¸ñ£¬ÕâÀï²»ÓÃÔÙÅÐ¶Ï
            while(i<len && a[i] != ' ') i++; 
            res.push_back(a.substr(start, i-start));
        }
        else
        {
            while(i<len && a[i] == ' ') i++;
            res.push_back(" ");
        }
    }
    reverse(res.begin(),res.end());
    a="";
    for(int jj = 0; jj<res.size(); jj++)
    {
        cout<<res[jj];
    }


    return 0;
}
#endif




//个位数统计
#if 0
#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::string str;
    std::cin>>str;
    int i=0;
    int numb[10]={0};
    while(str[i]!='\0')
    {
        int temp=0;
        std::string ch;
        ch=str[i];
        std::istringstream ss(ch);
        ss>>temp;
        numb[temp]++;
        i++;
    }
    for(int j=0;j<10;j++)
    {
        if(numb[j]!=0)
            {
                std::cout<<j<<":"<<numb[j]<<std::endl;
            }
    }
return 0;
}

#endif
//puanduan

#if 0
#include <iostream>
#include <string>

int func(long long a,long long b,long long c)
{
    if(a+b>c)
        return 1;
    else return 0;
}
int main()
{
    int sum=0;
    long long numb[3]={0};
    std::cin>>sum;
    int *p=NULL;
    p=new int[sum];
    for(int i=0;i<sum;i++)
    {
        std::cin>>numb[0]>>numb[1]>>numb[2];
        *(p+i)=func(numb[0],numb[1],numb[2]);
    }
    for(int i=0;i<sum;i++)
    {
        std::cout<<"Case #"<<i+1<<":"<<" ";
        if(*(p+i))
            std::cout<<"true"<<std::endl;
        else std::cout<<"false"<<std::endl;
    }
    delete []p;
    return 0;
}
#endif

#include <iostream>

 bool isPowerofTwo(long long n){
        
        // Your code here
        long long temp=1;
        while(temp < n)
        {
            temp = temp * 2;
        }
        if(temp == n)
            return true;
        else return false;
    }
int main()
{
    int n;
    std::cin>>n;
    if(isPowerofTwo)
        std::cout<<"yes";
    
}