#if 0
#include <iostream>


void swap(int &numb1,int &numb2)        //利用别名进行数值的交换
{
    if(numb1>numb2)
    {
        int temp;
        temp=numb1;
        numb1=numb2;
        numb2=temp;
    }

}
int main()
{
    int numb1,numb2;
    std::cin>>numb1>>numb2;
    swap(numb1,numb2);
    std::cout<<numb1<<"\t"<<numb2<<std::endl;
}
#endif


/*
#include <iostream>
#include <set>

int main()
{
    return 0;
}
*/

#if 0
#include <iostream>
#include <string>
int main()
{
    std::string numb1,numb2;
    char ch1,ch2;
    std::cin>>numb1>>ch1>>numb2>>ch2;
    long long num1=0,num2=0;
    for(int i=0;i<numb1.length();i++)
    {
        if(numb1[i] == ch1)
        {
            num1 *= 10;
            num1 += (numb1[i]-'0');
        }
    }
      for(int j=0;j<numb2.length();j++)
    {
        if(numb2[j] == ch2)
        {
            num2 *= 10;
            num2 += (numb2[j]-'0');
        }
    }
    std::cout<<num1 + num2;
    
}
#endif


#if 0
#include <iostream>

int main()
{
    long long num1,num2,temp;
    std::cin>>num1>>num2>>temp;
    int sum=num1 + num2,i;
    int str[100]={0};
    if(temp == 10)
        std::cout<<sum;
    else if(temp != 10)
    {
    for(i=0;sum>0;i++)
    {
        str[i] = sum % temp;     
        sum /= temp;
    }
    for(int j=i-1;j>=0;j--)
    {
        std::cout<<str[j];
    }
        std::cout<<std::endl;
    }
}

#endif


#if 0
//stl中的排序方法
#include <iostream>
#include <algorithm>

int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        std::cin>>arr[i];
    }
    std::sort(std::begin(arr),std::end(arr));
    for(int i=0;i<10;i++)
    {
        std::cout<<arr[i]<<"\n";
    }
}
#endif

/*
#include <iostream>
#include <algorithm>
#include <vector>


//自己实现的快速排序 
void swap(int *m,int *n)
{
    int temp=*m;
    *m=*n;
    *n=temp;
}
void QuickSort(int arr[], int begin, int end)
{
    if(begin >= end) return;
    int left = begin;
    int base = arr[begin];
    int right = end;
    while(left < right)
    {
        while(left < right && arr[left] < base)
        {
            left++;
        }
        while(left < right && arr[right] > base)
        {
            right--;
        }
        swap(&arr[left],&arr[right]);
    }
    QuickSort(arr,right + 1,end);
    QuickSort(arr,begin,left - 1);
}
/*
void insertsort(int arr[], int begin, int end)
{
    int i=1,j=0;
    while(i<=end)
    {
        if(arr[i] > arr[j]);
    }
    
}
*/
/*
int main()
{
    
    int arr[10];
    for(int i=0;i<10;i++)
    {
        std::cin>>arr[i];
    }
    /*
    std::vector<int> a(arr,arr+10);
    std::sort(std::begin(arr),std::end(arr));
    a.push_back(15);
    for(int i=0;i<a.size();i++)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<std::endl;
    a.pop_back();
    for(int i=0;i<a.size();i++)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<std::endl;
    */
   /*
   QuickSort(arr,0,9);
   for(int i=0;i<10;i++)
   {
    std::cout<<arr[i]<<" ";
   }
}
*/

#if 0
//在线处理最大子串
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int numb,Max;
    int sum,thisSum = 0;
    std::cin>>sum;
    for(int i=0;i<sum;i++)
    {
        std::cin>>numb;
        thisSum += numb;
        if(thisSum > Max)
            Max = thisSum;
        else if(thisSum < 0)
            thisSum = 0;
    }
    std::cout<<Max;

    return 0;
}
#endif
/*
#include <iostream>
#include <vector>


void quick(int arr[], int begin, int end)
{
    int left = begin; 
    int right = end;
    int element = 0;
    int base = arr[element];
    while()
    {
        while()
    }
}
int main()
{
    int numb;
    std::cin>>numb;
    int num[numb], pviot[numb];
    for(int i=0;i<numb;i++)
    {
        std::cin>>num[i];
    }



    return 0;
}
*/

//时间复杂度 O(nlogn)   空间复杂度  O(1)
/*
#include <iostream>
 void swap(long long *m,long long *n)
{
    long long temp=*m;
    *m=*n;
    *n=temp;
}
long long MAX(long long m,long long n)
{
    if(m>n)
        return m;
    else return n;
}
long long QuickSort(long long arr[], int begin, int end)
{
    if(begin >= end) return 0;
    int left = begin;
    int base = arr[begin];
    int right = end;
    while(left < right)
    {
        while(left < right && arr[left] < base)
        {
            left++;
        }
        while(left < right && arr[right] > base)
        {
            right--;
        }
        swap(&arr[left],&arr[right]);
    }
    QuickSort(arr,right + 1,end);
    QuickSort(arr,begin,left - 1);
    return MAX(arr[end] * arr[end-1] * arr[end-2],arr[0] * arr[1] * arr[end]);
}
int main()
{
    int n;
    std::cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>arr[i];
    }
    long long max;
    max = QuickSort(arr,0,n-1);
    std::cout<<max<<std::endl;
}
*/


//#include <iostream>

/*
void swap(int *m,int *n)
{
    int temp=*m;
    *m=*n;
    *n=temp;
}
void QuickSort(int arr[], int begin, int end)
{
    if(begin >= end) return;
    int left = begin;
    int base = arr[begin];
    int right = end;
    while(left < right)
    {
        while(left < right && arr[left] < base)
        {
            left++;
        }
        while(left < right && arr[right] > base)
        {
            right--;
        }
        swap(&arr[left],&arr[right]);
    }
    QuickSort(arr,right + 1,end);
    QuickSort(arr,begin,left - 1);
}

int main()
{
    int sum_element,S;
    std::cin>>sum_element>>S;
    int arr[sum_element];
    for(int i=0;i<sum_element;i++)
    {
        std::cin>>arr[i];
    }
    //QuickSort(arr,0,sum_element-1);
    int temp = 0,i,j=0;
    for(i=0;i<sum_element;i++)
    {
        temp += arr[i];
        if(temp > S)
        {
            for(;j<=i;)
            {
                temp -= arr[j];
                j++;
                if(temp <= S)
                    break;
            }
        }
        if(temp == S)
            break;
    }
    j++,i++;
    if(i>=sum_element)
        std::cout<<"-1";
    else
        std::cout<<j<<" "<<i;
}
*/
#if 0
#include <iostream>
#include <vector>
#include <algorithm>

int findLongestConseqSubseq(int arr[], int N)
    {
      std::sort (arr,arr+N);
      int cnt=1,max=0;
      for(int i=0;i<N-1;i++)
      {
          if(arr[i] == arr[i+1])
              continue;
          if((arr[i] + 1) != arr[i+1])
          {
            if(cnt > max)
                max = cnt;
            cnt = 1;
          }
          else
            cnt++;
      }
      if(cnt > max)
        max = cnt;
      return max;
    }
int main()
{
    int N;
    std::cin>>N;
    int arr[N] = {0};
    for(int i=0;i<N;i++)
    {
        std::cin>>arr[i];
    }
    int max = findLongestConseqSubseq(arr,N);
    std::cout<<max;
}
#endif

#include <iostream>
/*
typedef struct students
{
    unsigned int a:8;
    unsigned int b:16;
    unsigned int v:4;
}stu;
*/
/*
union lemol             //作用域
{
    //char a1;
    short b;
    int c;
};
*/
/*
namespace  A{
    int a;
    int b;
    int func()
    {
        std::cout<<"hello"<<"\n";
        return 0;
    }
}
*/
/*
int main()
{
    //stu A;
    //std::cout<<sizeof(A)<<"\n";
    //A.v = 16;
    //std::cout<<A.v<<"\n";
    lemol a;
    a.c = 0x01020304;
    a.b = 0x0102;
    a.a = 0x01;
    std::cout<<a.a + a.b + a.c;
    //A::func();
}
*/