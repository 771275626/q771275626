#include<stdio.h>
#include<string.h>
char list[11][11]={"��","һ","��","��","��","��","��","��","��","��","ʮ"}; 
int swap(char a[]){
    int i;
    for(i=0;i<11;i++){
        if(strcmp(list[i],a)==0){
            return i;
        }
    }
}

int jisuan(int sum,char a[],char b[]){
    int sum1;
    sum1=swap(b);
    if(strcmp(a,"����")==0) return sum+sum1;
    else if(strcmp(a,"����")==0) return sum-sum1;
    else if(strcmp(a,"����")==0) return sum*sum1;
    else if(strcmp(a,"����")==0) return sum/sum1;
}
int main(){
    int sum;
    char a[100],b[100],c[100],d[100],e[100],f[100],g[100],h[100],i[100],j[100];
    scanf("%s",a);
    if(strcmp(a,"����")==0){
        scanf("%s %s %s",b,c,d);
    }
    else{
        printf("����\n"); 
        return 0;
    }
    sum=swap(d);
    while(scanf("%s %s",e,f)!=EOF){
        
        if(strcmp(b,e)==0){
            	scanf("%s",g);
                sum=jisuan(sum,f,g);       
            }
		 if(strcmp(e,"����")==0){ 
            printf("%s\n",list[sum]);
            break;
		 } 
    } 
	scanf("%s %s %s %s %s %s %s %s %s %s",a,b,c,d,e,f,g,h,i,j);
		
		if(sum>swap(d))
			{printf("��ã�����");}
			else
			{printf("��������");}
	return 0;       
}
