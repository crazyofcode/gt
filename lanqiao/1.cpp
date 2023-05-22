/*#include <iostream>
#include <string>
#include <sstream>

bool handle(const int a,const int b, const int c)
{
    bool isshow[10];
    for(int i=0;i<10;i++)
    {
        if(i==0)
            isshow[0] = true;
        else isshow[i] = false;
    }
    std::ostringstream os;
    os << a;
    os << b;
    os << c;
    std::string str = os.str();
    for(int i=0;i<str.length();i++)
    {
        int temp = str[i] - '0';
        if(!isshow[temp])
            isshow[temp] = true;
        else continue;
    }
    for(int i=0;i<10;i++)
    {
        if(!isshow[i])
        return false;
    }
    return true;
}

int main()
{
    int cnt = 0;
    int a,b,c;
    std::cin>>a>>b>>c;
    for(int i=123;i<998;i++)
    {
        int l = a*i;
        int m = b*i;
        int n = c*i;
        if(m>=1000||n>=1000)
            break;
        if(handle(l,m,n))
        {
            ++cnt;
            std::cout<<l<<" "<<m<<" "<<n<<std::endl;
        }
    }
    if(cnt == 0)
        std::cout<<"No!!!"<<std::endl;
    return 0;
}
*/
//有一个测试点没有过

/*
#include <iostream>

using namespace std;
void handle(bool str[],int begin ,int end)
{
    for(int i=begin;i<=end;i++)
    {
        if(str[i])
            str[i] = false;
    }
}
int main()
{
    int cnt = 0;
    int length = 0;
    int area = 0;
    cin>>length>>area;
    bool str[length+10];
    for(int i=0;i<length+10;i++)
    {
        str[i] = true;
    }
    int arr[area][2];
    for(int i=0;i<area;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
        handle(str,arr[i][0],arr[i][1]);
    }
    for(int i=0;i<=length;i++)
    {
        if(str[i])
        ++cnt;
    }
    cout<<cnt<<endl;
    return 0;
}
*/


/*
#include <iostream>
#include <string>

using std::string;
using namespace std;
string a;
long long i,len,x,y,t,times,xp,yp;
int main(){
	cin>>a>>t;                  
	len=a.length();
	times=t/len;
	for(i=0;i<=len-1;++i){
		if(a[i]=='E') xp++;  
		if(a[i]=='S') yp--;  
		if(a[i]=='W') xp--;  
		if(a[i]=='N') yp++;  
	}                           
	t-=times*len;
	xp*=times;
	yp*=times;
	x=xp,y=yp;            
	for(i=0;i<=t-1;++i){        
		if(a[i]=='E') x++;
		if(a[i]=='S') y--;
		if(a[i]=='W') x--;
		if(a[i]=='N') y++;
	}                          
	cout<<x<<" "<<y;
    return 0;
}
*/

/*
#include <iostream>
#include <algorithm>

using namespace std;

const int MIN = 0x7fffffff;
int main()
{  
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int ans = MIN;
    for(int i = 0;i<min(n,m+1);i++)
    {
        int j = 0;
        while(i + (n-j-1) + min(i,n-j-1) > m)   ++j;
        ans = min(ans,a[j] - a[i]);
    }
    cout<<ans<<endl;
    return 0;
}
*/

/*
#include <iostream>

using namespace std;

int main()
{
    int n, m, now, ans;
    cin>>n;
    cin>>ans;
    now = ans;
    for(int i=1;i<n;i++)
    {
        cin>>m;
        if(m>now) ans += (m -now);
        now = m;
    }
    cout<<ans;
    return 0;
}
*/

#include <iostream>

using namespace std;

int main()
{
    int m = 5;
    int y = 2;
    int n = y+=y-=m*=y;
    cout<<n<<endl;
    return 0;

}