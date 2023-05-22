/*
#include <iostream>
#include <stack>
 
using namespace std;
 
void arrinit(int arr[],int len)
{
    for(int i = 0;i<len;i++)
    {
        cin>>arr[i];
    }
}
bool validateStackSequence(int pushed[], int len){
    int j = 0;
    stack <int> st;
    for(int i = 0; i < len; i++){
        st.push(pushed[i]);
        while (!st.empty() && j < len && st.top() == popped[j]){
            st.pop();
            j++;
        }
    }
    return j == len;
}
int main()
{
   int M,N,K;
   cin>>M>>N>>K;
   int pushed[N];
   for(int i=0;i<K;i++)
   {
        arrinit(pushed,N);
        cout << (validateStackSequence(pushed, N) ? "True" : "False"); 
   }
   return 0;
}
*/
