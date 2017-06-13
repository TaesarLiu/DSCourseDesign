#include <stdio.h>
#include <iostream>
using namespace std;


typedef struct CTNODE{
	double cost;                         //存放个人经费消耗
	int person_num;	                    //记录是第几人的选择层，值等于当前结点所在层次数-1,第几个人选择就是几+1 
	int child_num;                     //记录是第几个任务，值等于母结点的从左往右的第几个子结点数
    char *travellist;	              //记录是遍历过哪些结点，遍历的时候会用上
    double allcost ;                  //记录总的费用，遍历的时候会用上
	CTNODE* child;                //子结点
};
 
 void inittree(CTNODE& rootnode, double cost[100][100],int n,int m) {   	//需要提供一个根节点的引用，和cost矩阵    n为人数，m为任务数 
         
        rootnode.child =new CTNODE;
        if(!rootnode.child)
              cout<<"error!"<<endl;
    	rootnode.cost = 0; 
		rootnode.person_num = 0; 
		rootnode.child_num=0;     //当没有子节点时就是零 
	    rootnode.travellist=0;
		rootnode.allcost=0;
		int i,j;
		double a;
		for(i=0;i<n;i++) {
		   	      for(j=0;j<m;j++){
		   	      cin>>a; 
		          cost[i][j]=a;
		            }
		   
		   }
	}
		   
		   
	int main(){
	
     CTNODE rootnode;
     double cost[100][100];
     int m,n;
     cin>>n>>m;
     inittree(rootnode,cost,n,m);
     int i,j;
     for(i=0;i<n;i++)
       {
	       for(j=0;j<m;j++)
               cout<<cost[i][j]<<" ";
            cout<<endl;
		} 
	return 0;
}	     
