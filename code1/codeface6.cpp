/*#include <iostream>
#include <cmath>

int main()
{
    int n;
    scanf("%d",&n);
    int m;
    m = sqrt((n+1)/2);
    for(int i=m;i>0;i--)
    {
        for(int j=0;j<2*i-1;j++)
        {
            if(j<(m-i))
            {
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }
    
}*/
#if 0
#include <iostream>
#include <string>
using namespace std;
using std::string;
int main()
{
    string numb;
    cin>>numb;
    int a[10] = {0};
    for(int i=0;i<numb.length();i++)
    {
        a[numb[i]-'0']++;
    }
    for(int i=0;i<10;i++)
    {
        if(a[i] > 0)
        {
            cout<<i<<":"<<a[i]<<"\n";
        }
    }
    return 0;
}
#endif
#if 0
#include <iostream>
#include <string>

using std::string;
using namespace std;
int main()

{
    struct stu{
        string numb;
        int m;
        int n;
    };
    int sum_student;
    scanf("%d",&sum_student);
    stu student[sum_student];
    for(int i=0;i<sum_student;i++)
    {
        cin>>student[i].numb;
        scanf("%d %d",&student[i].m,&student[i].n);
    }
    int sum;
    scanf("%d",&sum);
    int arr[sum];
    for(int i=0;i<sum;i++)
    {
        scanf("%d",arr[i]);
        for(int j = 0;j<sum_student;j++)
        {
            if(arr[i] == student[j].m)
            {
                cout<<student[j].numb<<" "<<student[j].n;
            }
        }

    }
return 0;
}
#endif

#if 0
#include <iostream>
#include <cmath>

int main()

{
    int numb,length=0,begin=0;
    scanf("%d",&numb);
    int m = sqrt(numb)+1;
    for(int i=2;i<m;i++)
    {
        int j;
        int temp = 1;
        for(j=i;j<m;j++)
        {
            temp *= j;
            if(numb%temp != 0)
                break;
        }
        if(length < j - i)
            {
                length = j-i;
                begin = i;
            }
    }
    if(length == 0)
    {
        printf("%d\n",length+1);
        printf("%d",numb);
    }
    else{
        printf("%d\n",length);
    for(int i=begin;i<begin + length;i++)
    {
        printf("%d",i);
        if(i!=begin+length-1)
            printf("*");
    }
    }
}
#endif
#if 0
#include <iostream>
#include <string>
using std::string;
void print(string str[],string numb,int begin)
{
    for(int i=begin;i<numb.length();i++)
    {
        std::cout<<str[numb[i]-'0'];
        if(i!=numb.length()-1)
        std::cout<<" ";
    }
}
int main()
{
    string str[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    string numb;
    std::cin>>numb;
    if(numb[0]=='-')
    {
        std::cout<<"- ";
        print(str,numb,1);
    }
    else{
        print(str,numb,0);
    }
}
#endif

#if 0
#include <iostream>
#include <algorithm>

int main()
{
    int arr[3];
    for(int i=0;i<3;i++)
    {
        std::cin>>arr[i];
    }
    std::sort(arr,arr+3);
    for(int i=0;i<3;i++)
    {
        std::cout<<arr[i];
        if(i!=2)
        std::cout<<"->";
    }
}
#endif

#if 0
#include <iostream>
#include <iomanip>
#include <string>
using std::string;

int main()
{
   string numb;
   std::cin>>numb;
   double cnt = 0.0;
   int length = numb.length();
   for(int i = 0;i<numb.length();i++)
   {
        if(numb[i] == '2')
        {
            ++cnt;
        }
   }
   if(numb[0] == '-')
        --length;
   double rate;
   rate = cnt / length;
    if(numb[0]=='-')
        rate *= 1.5;
    if((numb[numb.length()-1]-'0')%2==0)
        rate *= 2;
    rate *= 100;
    std::cout<<std::fixed<<std::setprecision(2)<<rate<<"%";
}


#include <iostream>
#include <cmath>


int main()
{
    int sum;
    char ch;
    std::cin>>sum>>ch;
    int tmp = sqrt((sum+1)/2);
    int cnt = 2 * tmp - 1;
    for(int i=tmp;i>=1;i--)
    {
        for(int j=0;j<cnt;j++)
        {
            if(j<tmp-i)
            {
                std::cout<<" ";
            }
            else{
                std::cout<<ch;
            }
            if(j==cnt-1)
            {
                std::cout<<"\n";
            }
        }
        --cnt;
    }
    cnt = tmp+1;
    for(int i=1;i<tmp;i++)
    {
        for(int j=0;j<cnt;j++)
        {
            if(j<tmp-i-1)
            {
                std::cout<<" ";
            }
            else{
                std::cout<<ch;
            }
            if(j==cnt-1)
            {
                std::cout<<"\n";
            }
        }
        ++cnt;
    }
    int a = pow(tmp,2)*2-1;
    printf("%d",sum - a);
}


#include <iostream>
#include <vector>

int main()
{
    std::vector<char> str1;
    std::vector<char> str2;
    char ch;
    do{
        std::cin>>ch;
        str1.push_back(ch);
    }while(ch!='\n');
    do{
        std::cin>>ch;
        str2.push_back(ch);
    }while(ch!='\n');
    for(int i=0;i<str1.size();i++)
    {
        int j=0;
        for(j=0;j<str2.size();j++)
        {
            if(str1[i] == str2[j])
                break;
        }
        if(j >= str2.size())
        {
            std::cout<<str1[i];
        }
    }
}


#include <iostream>
#include <string>

using std::string;

int main()
{
    string str;
    std::cin>>str;
    int cmt_g=0,cmt_p=0,cmt_l=0,cmt_t=0;
    for(int i=0;i<str.length();i++)
    {
        switch(str[i])
        {
            case 'g':
            case 'G':++cmt_g;break;
            case 'p':
            case 'P':++cmt_p;break;
            case 'l':
            case 'L':++cmt_l;break;
            case 't':
            case 'T':++cmt_t;break;
            default:break;
        }
    }
    for(;cmt_g>0||cmt_l>0||cmt_p>0||cmt_t>0;)
    {
        if(cmt_g>0)
        {
            std::cout<<"G";
            --cmt_g;
        }
        if(cmt_p>0)
        {
            std::cout<<"P";
            --cmt_p;
        }
        if(cmt_l>0)
        {
            std::cout<<"L";
            --cmt_l;
        }
        if(cmt_t>0)
        {
            std::cout<<"T";
            --cmt_t;
        }
    }
    return 0;
}

#include <iostream>
#include <string>
using std::string;

int main()
{
    int max_a,max_b;
    std::cin>>max_a>>max_b;
    int sum;
    std::cin>>sum;
    int arr[sum][4];
    for(int i=0;i<sum;i++)
    {
        for(int j=0;j<4;j++)
        {
            std::cin>>arr[i][j];
        }
    }
    int cnt=0,cmt=0;
    for(int i=0;i<sum;i++)
    {
        int tmp = arr[i][0] + arr[i][2];
        if(arr[i][1] == tmp &&arr[i][3] != tmp)
        {
            ++cnt;
        }
        if(cnt>=max_a)
            {
                std::cout<<'A'<<max_b-cmt;
                break;
            }
        if(arr[i][3] == tmp &&arr[i][1] != tmp)
        {
            ++cmt;
        }
        if(cmt>=max_b)
            {
                std::cout<<'B'<<max_a-cnt;
                break;
            }
    }
    return 0;
}

//WA
#include <iostream>
#include <cmath>

bool isPrime(int n)
{
    if(n==2)
        return true;
    int tmp = sqrt(n);
    for(int i=2;i<=tmp;i++)
    {
        if(n%i==0)
            return true;
    }
    return false;
}
int main()
{
    int sum;
    std::cin>>sum;
    int arr[sum];
    for(int i=0;i<sum;i++)
    {
        std::cin>>arr[i];
    }
    for(int i=0;i<sum;i++)
    {
        if (isPrime(arr[i]))
        {
            std::cout<<"Yes\n";
        }
        if(!isPrime(arr[i]))
        {
            std::cout<<"No\n";
        }
    }
    return 0;
}


#include <iostream>
#include <string>
using std::string;
using namespace std;

int a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2}; //权重
int b[11]={1,0,10,9,8,7,6,5,4,3,2}; //校验码，其中X=10 
bool isTrue(string s)
{
	int sum=0;
	int temp;
	for(int i=0; i<17; i++){
		if(s[i]<'0' || s[i]>'9') return false;
		sum+=(s[i]-'0') * a[i]; 
	}
	if(s[17]=='X') temp=10;
	temp=s[17]-'0';
	return b[sum%11]==temp;
}
int main()
{
	int n;
	int flag = 0;
	string s;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s;
		if(!isTrue(s)){
			cout<<s<<endl;
			flag=1;
		}
	}
	if(flag==0) cout<<"All passed";
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <vector>
#include <algorithm>

#define Lx(a) (a << 1) + 1
#define Rx(a) (a << 1) + 2
using namespace std;
int n, m, Size;
long long ans, temp;
pair<int, int> B[100000];
struct segtree {
    vector<long long> values, mins;
    void init(int n) {
        Size = 1;
        while (Size < n) Size *= 2;
        values.assign(2 * Size, 0LL);
        mins.assign(2 * Size, 0LL);
        build(0, 0, Size, n);
    }
    void build(int x, int lx, int rx, int R) {
        if (rx - lx == 1) {
            if (lx < R) {
                cin >> mins[x];
                values[x] = mins[x];
            }
            return;
        }
        int mid = lx + rx >> 1;
        build(Lx(x), lx, mid, R);
        build(Rx(x), mid, rx, R);
        mins[x] = min(mins[Lx(x)], mins[Rx(x)]) + values[x];
    }
    void modify(int l, int r, int v, int x, int lx, int rx) {
        if (lx >= r || rx <= l) return;
        if (lx >= l && rx <= r) {
            mins[x] += v;
            values[x] += v;
            return;
        }
        int mid = lx + rx >> 1;
        modify(l, r, v, Lx(x), lx, mid);
        modify(l, r, v, Rx(x), mid, rx);
        mins[x] = min(mins[Lx(x)], mins[Rx(x)]) + values[x];
        return;
    }
    long long get_min(int l, int r, int x, int lx, int rx) {
        if (lx >= r || rx <= l) return LLONG_MAX;
        if (lx >= l && rx <= r) return mins[x];
        int mid = lx + rx >> 1;
        long long s1 = get_min(l, r, Lx(x), lx, mid);
        long long s2 = get_min(l, r, Rx(x), mid, rx);
        return min(s1, s2) + values[x];
    }
}st;
bool cmp (const pair<int, int> &a, const pair<int, int> &b) {
    if (a.second != b.second) return a.second < b.second;
    return a.first < b.first;
}
int main() {
    cin >> n >> m;
    st.init(--n);
    for (int i = 0; i < m; i++) {
        cin >> B[i].first >> B[i].second;
        if (B[i].first > B[i].second) swap(B[i].first, B[i].second);
    }
    std::sort(B, B + m, cmp);
    for (int i = 0; i < m; i++) {
        temp = st.get_min(B[i].first, B[i].second, 0, 0, Size);
        ans += temp;
        st.modify(B[i].first, B[i].second, -temp, 0, 0, Size);
    }
    std::cout << ans;
    return 0;
}
/*每个路程受到其中最小承重量限制，不同的运输路线[a, b]，[c，d]之间有3种关系 
1.[a, b]与[c，d]无交集，则可以同时进行两个运输订单 2.如果一个路线包含于另一个路线
中，那么选择少的那一段显然更优 3.[a, b]与[c，d]存在交集，交集为[c，b]，则能最大运
输货物重量为min([c，b]，[a，c] + [b，d]。 综上，我们可以将点坐标，按照右端点从小
到大的顺序排列，相等的情况下，按照左端点从小到大的顺序排列。只需要建立一棵具有区间
加以及区间最小值的线段树即可，符合结分配合律，故不需要lazy数组。遍历排序后的接线信
息，每个路线取到最大运输货物后，减少本线路的通货承重量，即可得到最终答案～
*/

#endif

#if 0
/*
森森喜欢坐地铁。这个假期，他终于来到了传说中的地铁之城——魔都，打算好好过一把坐地铁的瘾！
魔都地铁的计价规则是：起步价 2 元，出发站与到达站的最短距离（即计费距离）每 K 公里增加 
1 元车费。
例如取 K = 10，动安寺站离魔都绿桥站为 40 公里，则车费为 2 + 4 = 6 元。
为了获得最大的满足感，森森决定用以下的方式坐地铁：在某一站上车（不妨设为地铁站 A），则对于所有车费相同的到达站，森森只会在计费距离最远的站或线路末端站点出站，然后用森森美图 App 在站点外拍一张认证照，
再按同样的方式前往下一个站点。
坐着坐着，森森突然好奇起来：在给定出发站的情况下（在出发时森森也会拍一张照），
他的整个旅程中能够留下哪些站点的认证照？
地铁是铁路运输的一种形式，指在地下运行为主的城市轨道交通系统。一般来说，地铁由若干个
站点组成，并有多条不同的线路双向行驶，可类比公交车，当两条或更多条线路经过同一个站
点时，可进行换乘，更换自己所乘坐的线路。举例来说，魔都 1 号线和 2 号线都经过人民广
场站，则乘坐 1 号线到达人民广场时就可以换乘到 2 号线前往 2 号线的各个站点。换乘不
需出站（也拍不到认证照），因此森森乘坐地铁时换乘不受限制。

*/
#include<iostream>
#include<map>
#include<vector>
using namespace std;
struct Line {
	int visited = 0, end = 0;		//end为端点标记
	vector<int> road;
}line[201];
int graph[201][201];
const long long  MAX = 100000001;
void search(int i, const int& vis) {
	for (auto& it : line[i].road) {
		if (line[it].visited != vis) {
			line[it].visited = vis;
			search(it, vis);
		}
	}
}
int main() {
	int n, m, k, dis, a, b, q, start;
	scanf("%d%d%d", &n, &m, &k);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			graph[i][j] = MAX;
	for (int i = 0; i < m; i++) {
		scanf("%d", &a);	//录入数据   
		line[a].end = 1;	//端点标记
		do {
			scanf("%d%d", &dis, &b);	
			if (graph[a][b] > dis) {
				graph[a][b] = graph[b][a] = dis;
			}
			a = b;
		} while (getchar() != '\n');
		line[a].end = 1;	//端点标记
	}
	for (int k = 1; k <= n; k++)   //弗洛伊德多源最短路径
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				if (i != j && graph[i][j] > graph[i][k] + graph[k][j])
					graph[i][j] = graph[i][k] + graph[k][j];
	for (int i = 1; i <= n; i++) {
		map<int, int> mp;
		for (int j = 1; j <= n; j++)   //寻找每个费用的最远距离
			if (graph[i][j] != MAX && graph[i][j] > mp[2 + graph[i][j] / k])
				mp[2 + graph[i][j] / k] = graph[i][j];
		for (int j = 1; j <= n; j++)   //录入数据，构建邻接表
			if (graph[i][j] == mp[2 + graph[i][j] / k] || (i != j && line[j].end && graph[i][j] != MAX))
				line[i].road.push_back(j);
	}
	scanf("%d", &q);
	int flag;
	for (int i = 1; i <= q; i++) {
		scanf("%d", &start);	
		line[start].visited = i;
		flag = 0;
		search(start, i);  //搜索
		for (int j = 1; j <= n; j++)
			if (line[j].visited == i) {
				printf("%s%d", flag ? " " : "", j);
				flag = 1;
			}
		cout << endl;
	}
	return 0;
}
#endif

//#if 0
/*
在古老的迈瑞城，巍然屹立着 n 块神石。长老们商议，选取 3 块神石围成一个神坛。
因为神坛的能量强度与它的面积成反比，因此神坛的面积越小越好。特殊地，如果有两块神石坐标
相同，或者三块神石共线，神坛的面积为 0.000。
长老们发现这个问题没有那么简单，于是委托你编程解决这个难题。
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
int n, i, cnt;
long long ans = 1e17;
bool cmp (const pair<long long, long long> &a, const pair<long long, long long> &b) {
    if (a.first * b.second != b.first * a.second)
        return a.first * b.second > b.first * a.second;
    return a.first < b.first;
}
int main() {
    scanf("%d", &n);
    vector<pair<long long, long long>> A(n), B(n - 1);
    for (i = 0; i < n; i++) scanf("%lld %lld", &A[i].first, &A[i].second);
    for (i = 0; i < n; i++, cnt = 0) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            B[cnt++] = {A[j].first - A[i].first, A[j].second - A[i].second};
        }
        sort(B.begin(), B.end(), cmp);
        for (int j = 1; j < n - 1; ++j) ans = min(ans, abs(B[j - 1].first * B[j].second - B[j].first * B[j - 1].second));
    }
    printf("%.3f", 0.5 * ans);
    return 0;
}
//#endif



//二叉搜索树
#if 0
#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

void PreorderTraversal( BinTree BT ); /* 先序遍历，由裁判实现，细节不表 */
void InorderTraversal( BinTree BT );  /* 中序遍历，由裁判实现，细节不表 */

BinTree Insert( BinTree BST, ElementType X );
BinTree Delete( BinTree BST, ElementType X );
Position Find( BinTree BST, ElementType X );
Position FindMin( BinTree BST );
Position FindMax( BinTree BST );

int main()
{
    BinTree BST, MinP, MaxP, Tmp;
    ElementType X;
    int N, i;

    BST = NULL;
    scanf("%d", &N);
    for ( i=0; i<N; i++ ) {
        scanf("%d", &X);
        BST = Insert(BST, X);
    }
    printf("Preorder:"); PreorderTraversal(BST); printf("\n");
    MinP = FindMin(BST);
    MaxP = FindMax(BST);
    scanf("%d", &N);
    for( i=0; i<N; i++ ) {
        scanf("%d", &X);
        Tmp = Find(BST, X);
        if (Tmp == NULL) printf("%d is not found\n", X);
        else {
            printf("%d is found\n", Tmp->Data);
            if (Tmp==MinP) printf("%d is the smallest key\n", Tmp->Data);
            if (Tmp==MaxP) printf("%d is the largest key\n", Tmp->Data);
        }
    }
    scanf("%d", &N);
    for( i=0; i<N; i++ ) {
        scanf("%d", &X);
        BST = Delete(BST, X);
    }
    printf("Inorder:"); InorderTraversal(BST); printf("\n");

    return 0;
}
#endif
#if 0
BinTree Insert( BinTree BST, ElementType X ) {
    if(! BST) {
        //若原树为空，则生成并返回一个结点的二叉搜索树
        BST = malloc(sizeof(struct TNode));
        BST->Data = X;
        BST->Left = BST->Right = NULL;
    }
    else {
        if(X < BST->Data) {
            BST->Left = Insert(BST->Left, X);
        }
        else if(X > BST->Data) {
            BST->Right = Insert(BST->Right, X);
        }
        /*else {
            //X值已经存在，不需要进行插入新的结点值   
        }*/
    }
    return BST;
}

BinTree Delete( BinTree BST, ElementType X ) {
    /*分为三种情况：*/
    /*1.删除的节点为叶子结点，则直接释放该内存空间，将父结点的指针置NULL；*/
    /*2.删除的结点有一个子节点，删除之前需要改变其父结点的指针，指向被删除结点的孩子结点*/
    /*3.删除的结点有两个子节点，选择其右子树的最小结点或左子树的最大结点来填充删除结点的位置*/
    Position Tmp;
    if(!BST) {
        printf("Not Found\n");
    }
    else {
        if(X < BST->Data) //左子树递归删除
            BST->Left = Delete(BST->Left, X);
        else {
            if(X > BST->Data)
                BST->Right = Delete(BST->Right, X); //右子树递归删除
            else { //找到了要删除的结点
                if(BST->Left && BST->Right) { //被删除结点有两个子节点
                    Tmp = FindMax(BST->Left); //在删除结点的左子树中找出最大的元素填充删除结点
                    BST->Data = Tmp->Data;
                    BST->Left = Delete(BST->Left, BST->Data); //在删除结点的左子树中删除最大元素
                }
                else { //被删除的结点有一个或无子节点
                    Tmp = BST;
                    if(!BST->Left) { //被删除的结点有右子节点或无子节点
                        BST = BST->Right;
                    }
                    else if(!BST->Right) { //被删除的结点有左子节点或无子节点
                        BST = BST->Left;
                    }
                    free(Tmp);
                }
            }
        }
    }
    return BST;
}

Position Find( BinTree BST, ElementType X ) {
    if(!BST) return NULL;
    if(BST->Data > X) //在左子树中查找
        return Find(BST->Left, X);//尾递归形式通常可以改写为循环迭代的形式
    else if(BST->Data < X) //在右子树中查找
        return Find(BST->Right, X);
    else //找到了结点
        return BST;
}
/*
Find函数的非递归（迭代）实现
Position Find(BinTree BST, ElementType X) {
	while(BST) {
		if(BST->Data > X) { //在左子树中查找
			BST = BST->Left;
		}
		else if(BST->Data < X) {
			BST = BST->Right;
		}
		else {
			return BST;
		}
	}
	return NULL;
}
*/

Position FindMin( BinTree BST ) { //递归形式
    if(!BST) {//如果是空树
        return NULL;
    }
    else {
        if(!BST->Left) 
            return BST;
        else 
            return FindMin(BST->Left);
    }
}

Position FindMax( BinTree BST ) { //迭代形式
    while(BST) { //如果不是空树
        if(BST->Right)
            BST = BST->Right;
        else 
            return BST;
    }
    return NULL;
}
#endif

