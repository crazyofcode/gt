/*
#include <iostream>
#define MAX 10
using namespace std;

struct tree{
    char ch;
    int left;
    int right;
};
typedef struct tree prl;
prl tree1[MAX],tree2[MAX];
int buildtree(prl tree[])     //构建树，并返回根节点
{
    int flag = -1;
    int numb;
    cin>>numb;
    bool ch[10] =  {false};
    if(numb)
    {
        char cl , cr;
        for(int i=0;i<numb;i++)
        {
            cin>>tree[i].ch>>cl>>cr;
            if(cl != '-')
                {
                    tree[i].left = cl - '0';
                    ch[tree[i].left] = true; 
                }
                else {
                    tree[i].left = -1;
                }
            if(cr != '-')
            {
                    tree[i].right = cr - '0';
                    ch[tree[i].right] = true;
            }
            else {
                    tree[i].right = -1;
                }
        }
        for(int i=0;i<numb;i++)
        {
            if(!ch[i])
                {
                    flag = i;
                    break;
                }
        }
    }
    return flag;
}
bool compare(int root1,int root2)
{
    if(root1 == -1&&root2 == -1) return true;
    if((root1 != -1 && root2 == -1) || (root1 == -1 && root2 != -1)) return false;
    if(tree1[root1].ch != tree2[root2].ch) return false;
    if(tree1[root1].left == -1 && tree2[root2].left == -1)
        return compare(tree1[root1].right,tree2[root2].right);
    if((tree1[root1].left != -1 && tree2[root2].left != -1)&&(tree1[tree1[root1].left].ch==tree2[tree2[root2].left].ch)) 
	    return (compare(tree1[root1].left,tree2[root2].left)&&compare(tree1[root1].right,tree2[root2].right));
	else return(compare(tree1[root1].left,tree2[root2].right)&&compare(tree1[root1].right,tree2[root2].left));
}
int main()
{
    int root1 = buildtree(tree1);
    int root2 = buildtree(tree2);
    if(compare(root1,root2))
        cout<<"Yes";
    else cout<<"No";
    return 0;
}
*/
/*
#include <stdio.h>
struct node{
	char mz;//二叉树信息
	int lefd;//左孩子结点的编号，没有时为-1
	int right;//右孩子结点的编号，没有时为-1
}t1[10],t2[10];
//构造一个二叉树
int gz(struct node t[]){
	int n,i,flag=-1;//flag的初始值为-1，防止t为空树，空树不存在根结点，所以是-1
	char cl,cr;//cl为左，cr为右
	scanf("%d",&n);
	getchar();
	int ch[n];//ch用来记录下标为i的结点有没有被指向，没有被指向的就是根结点
	if(n){
		for(i=0;i<n;i++) ch[i]=0;
		for(i=0;i<n;i++){
			scanf("%c %c %c",&t[i].mz,&cl,&cr);
			getchar();
			if(cl!='-'){
				t[i].lefd=cl-'0';
				ch[t[i].lefd]=1;
			}
			else t[i].lefd=-1;
			if(cr!='-'){
				t[i].right=cr-'0';
				ch[t[i].right]=1;
			}
			else t[i].right=-1;
		}
		for(i=0;i<n;i++){
			if(ch[i]==0) break;//没有被指向的ch【i】为0，也就是根结点 
		}
		flag=i;//根结点的下标 
	}
	return flag;
}
//判断2个二叉树是不是同构的
int pd(int r1,int r2){
	if(r1==-1&&r2==-1) return 1; //2个空树也判断为同构
	if((r1!=-1&&r2==-1)||(r1==-1&&r2!=-1)) return 0;//一个为空，另一个不为空，不是 
	if(t1[r1].mz!=t2[r2].mz) return 0;//根结点信息不一样 不是
	if(t1[r1].lefd==-1&&t2[r2].lefd==-1)  return pd(t1[r1].right,t2[r2].right); //如果左边都是空树，那么就递归判断右边同不同
	if((t1[r1].lefd!=-1&&t2[r2].lefd!=-1)&&(t1[t1[r1].lefd].mz==t2[t2[r2].lefd].mz))//如果左边不是空树并且信息一样，就递归判断左边和右边是不是同构 
	return (pd(t1[r1].lefd,t2[r2].lefd)&&pd(t1[r1].right,t2[r2].right));
	else return(pd(t1[r1].lefd,t2[r2].right)&&pd(t1[r1].right,t2[r2].lefd)); //递归 判断 t1的左和t2的右 ，t1的右和t2的左 是不是同构 
	 
} 
int main(){
	int r1,r2;
	r1=gz(t1);
	r2=gz(t2);
	if(pd(r1,r2)) printf("Yes\n");
	else printf("No\n");
}
*/

#include <vector>
#include <cstdio>
#include <cmath>

using namespace std;

static const int L = 44;
 
void CreateMaze() {
	int Maze[L][L] = { 0 };
 
	//最外围设置为路，可以有效的保护里面一层墙体，并防止挖出界
	for (int i = 0; i < L; i++) {
		Maze[i][0] = 1;
		Maze[0][i] = 1;
		Maze[L - 1][i] = 1;
		Maze[i][L - 1] = 1;
	}
 
	//墙队列，包括X , Y
	vector<int> X;
	vector<int> Y;
 
	//任取初始值
	X.push_back(3);
	Y.push_back(2);
 
	//当墙队列为空时结束循环
	while (X.size()) {
		//在墙队列中随机取一点
		int r = rand() % X.size();
		int x = X[r];
		int y = Y[r];
 
		//判读上下左右四个方向是否为路
		int count = 0;
		for (int i = x - 1; i < x + 2; i++) {	
			for (int j = y - 1; j < y + 2; j++) {
				if (abs(x - i) + abs(y - j) == 1 && Maze[i][j] > 0) {
					++count;
				}
			}
		}
 
		if (count <= 1) {
			Maze[x][y] = 1;
			//在墙队列中插入新的墙
			for (int i = x - 1; i < x + 2; i++) {
				for (int j = y - 1; j < y + 2; j++) {
					if (abs(x - i) + abs(y - j) == 1 && Maze[i][j] == 0) {
						X.push_back(i);
						Y.push_back(j);
					}
				}
			}
		}
 
		//删除当前墙
		X.erase(X.begin() + r);
		Y.erase(Y.begin() + r);
	}
 
	//设置迷宫进出口
	Maze[2][1] = 1;
	for (int i = L - 3; i >= 0; i--) {
		if (Maze[i][L - 3] == 1) {
			Maze[i][L - 2] = 1;
			break;
		}
	}
 
	//画迷宫
	for (int i = 0; i < L; i++){
		for (int j = 0; j < L; j++) {
			if (Maze[i][j] == 1) printf("  ");
			else printf("国");
		}
		printf("\n");
	}
}

int main()
{
    CreateMaze();
    return 0;
}