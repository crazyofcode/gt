/*
//加法
#include <iostream>
using namespace std;

void initialize(int quantic[][2],int amount)
{
    for(int i=0;i<amount;i++)
    {
        cin>>quantic[i][0]>>quantic[i][1];
    }
}
int main()
{
    int amount_one ,amount_two;
    cin>>amount_one;
    int quantic_one[amount_one][2];
    int quantic[amount_one+amount_two][2];
    initialize(quantic_one,amount_one);
    cin>>amount_two;
    int quantic_two[amount_two][2];
    initialize(quantic_two,amount_two);
    int indexofquantic_one = 0,indexofquantic_two = 0,indexofquantic;
    while(indexofquantic_one < amount_one&&indexofquantic_two < amount_two)
    {
        if(quantic_one[indexofquantic_one][0] > quantic_two[indexofquantic_two][0])
        {
            quantic[indexofquantic][0] = quantic_one[indexofquantic_one][0];
            quantic[indexofquantic][1] = quantic_one[indexofquantic_one][1];
            ++indexofquantic_one;
        }
        else if(quantic_one[indexofquantic_one][0] < quantic_two[indexofquantic_two][0])
                {
                    quantic[indexofquantic][0] = quantic_two[indexofquantic_two][0];
                    quantic[indexofquantic][1] = quantic_two[indexofquantic_two][1];
                    ++indexofquantic_two;
                }
        else if(quantic_one[indexofquantic_one][0] == quantic_two[indexofquantic_two][0])
                {
                    quantic[indexofquantic][0] = quantic_two[indexofquantic_two][0];
                    quantic[indexofquantic][1] = quantic_two[indexofquantic_two][1] + quantic_one[indexofquantic_one][1];
                    ++indexofquantic_two;
                    ++indexofquantic_one;
                }
        ++indexofquantic;
    }
    indexofquantic = 0;
    int cnt = 0;
    while(indexofquantic < amount_one + amount_two)
    {
        if(quantic[indexofquantic][1] != 0)
        {
            cout<<quantic[indexofquantic][0]<<" "<<quantic[indexofquantic][1];
            if(indexofquantic < amount_one + amount_two - 1)
            cout<<" ";
        }
        ++cnt;
    }
    if(cnt ==0)
    cout<<"0 0";
}
*/

#if 0
#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct Equation)

typedef struct Equation{
	int coefficient;   //系数 
	int power;         //指数 
	struct Equation *next;
}*Equ;  

Equ creat(void)  //输入 
{
 	Equ p,L,s;
 	int co,ex,N;
 	
 	scanf("%d",&N);                  //输入有几个 多项式非零项的个数
	
	L = (Equ)malloc(LEN);
	L->next = NULL;
	s = L;
	
	while(N--)
	{
	 	scanf("%d %d",&co,&ex);
	 	p = (Equ)malloc(LEN);
	 	p->coefficient = co;
	 	p->power = ex;
	 	p->next = NULL;
	 	s->next = p;
	 	s = p;
	 }
	 
	 s->next = NULL;
	 
	 return L; 
} 

void print(Equ P)               //输出 
{
	Equ pointer = P;
  	int flag = 0;
  	
  	if(pointer == NULL)
  	{
  		printf("0 0");
	}
	
  	while( pointer != NULL)
  	{
  		if(flag == 0)
		{
		  	printf("%d %d",pointer->coefficient,pointer->power);
		  	pointer = pointer->next;
		  	flag = 1;
		}	
		else
		{
			printf(" %d %d",pointer->coefficient,pointer->power);
		  	pointer = pointer->next;
		}	
	}
}

void Attach(int c,int e,Equ rear)   //将读入的数入链 
{
	Equ p2;
	p2 = (Equ)malloc(LEN);
	p2->coefficient = c;
	p2->power = e;
	p2->next = NULL;
	rear->next = p2;
	rear = p2;
}

Equ multiplication(Equ head_1,Equ head_2)   //相乘 
{
	Equ front, rear, t, t1, t2;
	int c, e;
	
	t1 = head_1->next; t2 = head_2->next;
	
	front = (Equ)malloc(LEN);
	front->next = NULL;
	rear = front;
	
	if(!t1 || !t2)
	{
		return NULL;
	}
	
	
	while(t2)   //用t1的第一项与t2的各项相乘，构成rear
	{
		c = t1->coefficient * t2->coefficient;
		e = t1->power + t2->power;
		Attach(c,e,rear);
		t2 = t2->next;
		rear = rear->next;
	}
	t1 = t1->next;
	
	while(t1)
	{
		t2 = head_2->next;
		rear = front;
		
		while(t2)
		{
			c = t1->coefficient * t2->coefficient;
			e = t1->power + t2->power;
			
			while((rear->next) && (rear->next->power > e))  rear = rear->next;   //循环到  rear所指的指数  =  现在的指数pow  或   p4所指的指数  <  现在的指数pow  或  rear为空 
			
			if((rear->next) && (rear->next->power == e))   //reae所指的指数  =  现在的指数pow 
			{
				if(rear->next->coefficient+c != 0)    //当 rear所指的系数 + 现在的系数  ！= 0 时 
				{
					rear->next->coefficient += c;    
				}
				else                         //当 rear所指的系数 + 现在的系数  = 0 时   删掉这个节点
				{
					t = rear->next;
					rear->next = t->next;
					free(t);
				}
				
			}
			else
			{
				t = (Equ)malloc(LEN);
				t->coefficient = c;
				t->power = e;
				
				t->next = rear->next;
				rear->next = t;
				rear = rear->next;
			}	
			t2 = t2->next;		
		}
		t1 = t1->next;
	}
	
	t = front; //删除头节点 
	front = front->next;
	free(t);
	
	return front;
 } 


int compare(int a, int b)  //用于比较 
{
	if (a > b)  return 1;
	if (a < b)  return 0;
	if (a == b)  return -1; 
} 


Equ Addition(Equ head_1, Equ head_2)  //相加 
{
	Equ front, rear, t, p1, p2;
	int sum = 0;
	
	p1=head_1->next;  p2=head_2->next; 
	
	front =(Equ)malloc(LEN);
	front->next = NULL;
	rear = front;

	if (!p1 && !p2)
		return NULL;
		
	while (p1&&p2)
	{
		switch (compare(p1->power, p2->power))
		{
			
			case 1: Attach(p1->coefficient, p1->power, rear); rear=rear->next; p1 = p1->next; break;
			
			case 0: Attach(p2->coefficient, p2->power, rear); rear=rear->next; p2 = p2->next; break;
			
			case -1:
				sum = p1->coefficient + p2->coefficient;
				if (sum)
				{
					Attach(sum, p1->power, rear);
					rear=rear->next;
				}
				p1 = p1->next;
				p2 = p2->next;
				break;
		}
	}
	
	for (; p1 != 0;Attach(p1->coefficient, p1->power, rear),	rear=rear->next, p1 = p1->next);
	for (; p2 != 0;Attach(p2->coefficient, p2->power, rear),	rear=rear->next, p2 = p2->next);
	
	t = front;
	front = front->next;
	free(t);
	
	return front;
}
    
  int main()
  {
  	Equ head_1, head_2 ,head_3, head_4;   //  *head_1第一个输入的方程的头节点  *head_2第二个方程的头节点  *head_3加起来的的头节点
  	
	head_1 = creat();
  	head_2 = creat();
  	
	head_3 = multiplication(head_1,head_2); //乘法 
  	print(head_3);
  	printf("\n"); 
  	
	head_4 = Addition(head_1,head_2);  //加法
  	print(head_4);
  	
  	return 0;
  }
#endif
#if 0
#include <iostream>

using namespace std;
string s;
long long dp[1000001][4], vis[128], last;
int main() {
    cin >> s;
    for (int i = 0; i <= s.size(); i++) dp[i][0] = 1;
    for (int i = 1; i <= s.size(); i++) {
        last = vis[s[i - 1]];
        vis[s[i - 1]] = i;
        for (int j = 1; j <= 3; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
            if (last && j - (i - last) >= 0) dp[i][j] -= dp[last - 1][j - (i - last)];
        }
    }
    cout << dp[s.size()][0] + dp[s.size()][1] + dp[s.size()][2] + dp[s.size()][3];
    return 0;
}
#endif

/*
一个简单的动态规划题～使用dp[i][j]表示前i个字符串在删除j个字符的情况下能取到多少种
情况。由于第i个字符只有删除以及不能删除两种情况，可以得到dp[i][j] = dp[i – 1][j]
（第i个字符不删，前i-1个字符删除掉j个再加上当前字符能取到的个数） + 
dp[i – 1][ j – 1]（第i个字符删了，前i-1个字符删除掉j-1个能取到的个数）
～注意可能存在的重复情况，如liuchuo在dp[6][3]时删除下标为3、4、5的”uch”后得到字符
串的与删除下标为4、5、6的”chu”后得到的字符串都为”liu”，所以需要记录当前（下标为i）
字符上一次出现的位置last（存在vis数组中），并判断i与last的差是否大于等于目前的j，
如果更多的话，就已经不可能受到影响了，故需要减去dp[last – 1][j – (i – last)]的数
量。 最后将所有删减情况加起来，得到最终答案～
*/


//伪代码
#if 0
void InorderTraversal( BinTree BT )
{
    if( BT ) {
        InorderTraversal( BT->Left );
        /* 此处假设对BT结点的访问就是打印数据 */
        printf("%d ", BT->Data); /* 假设数据为整型 */
        InorderTraversal( BT->Right );
    }
}

void PreorderTraversal( BinTree BT )
{
    if( BT ) {
        printf("%d ", BT->Data );
        PreorderTraversal( BT->Left );
        PreorderTraversal( BT->Right );
    }
}

void PostorderTraversal( BinTree BT )
{
    if( BT ) {
        PostorderTraversal( BT->Left );
        PostorderTraversal( BT->Right );
        printf("%d ", BT->Data);
    }
}
void LevelorderTraversal ( BinTree BT )
{ 
    Queue Q; 
    BinTree T;

    if ( !BT ) return; /* 若是空树则直接返回 */
    
    Q = CreatQueue(); /* 创建空队列Q */
    AddQ( Q, BT );
    while ( !IsEmpty(Q) ) {
        T = DeleteQ( Q );
        printf("%d ", T->Data); /* 访问取出队列的结点 */
        if ( T->Left )   AddQ( Q, T->Left );
        if ( T->Right )  AddQ( Q, T->Right );
    }
}
#endif

//树的遍历


#include <iostream>


int main()
{
	//unsigned int m = -1;
	//unsigned int n = 0xffff;
	//int l = 0xffff;
	//std::cout<<m<<"\n"<<n<<"\n"<<l;
	double tmp = -10;
	std::cout<<-tmp;

	return 0;
}