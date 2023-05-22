/*
#include <iostream>
using namespace std;
int main()
{
    int max,sum=0;
    int numb[5][20];
    int (*p)[20]=numb;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<20;j++)
        {
            cin>>numb[i][j];
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<20;j++)
        {
            if(j==0)
                max=*(*(p+i)+j);
            else {
                if(max<*(*(p+i)+j))
                    max=*(*(p+i)+j);
            }
        }
        sum+=max;
    }
    cout<<sum<<endl;
}

*/
/*
#include <iostream>
int main()
{
    int m,n;
    std::cin >> m >> n;
    if(n == 0)
        {
            std::cout << "0 0";
        }
    else if(n != 0)
        {
            std::cout <<" " << m * n <<" " << n - 1; 
        }
    while(std::cin >> m >> n)
    {
        if(n!=0)
        {
            std::cout << m * n << n - 1;
        }
    }

}*/


#include <iostream>
#include <string>
int main()
{
    std::string numb;
    char answer[1000]="\0";
    int data;
    std::cin>>numb>>data;
    int length = numb.length();
    int temp;
    for(int i=0,j=0;i<length;i++)
    {
        int arr;
        arr = numb[i] - '0';
            arr += temp;
        if(arr < data)
        {
            if((i+1) == length)
                {
                    temp = arr;
                    break;
                }
            temp = arr * 10;
        }
        else {
            temp = arr % data;
            arr /= data;
            answer[j] = arr +'0';
            if((i+1) == length)
                {
                    break;
                }
            temp *= 10;
            j++;
        }
    
    }
    
    for(int i=0;answer[i] != '\0';i++)
    {
        std::cout<<answer[i];
    }
    std::cout<<" "<<temp;
}