#include<stdio.h>
#include<string.h>
char list[11][3]={"零","一","二","三","四","五","六","七","八","九","十"}; 
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
    if(strcmp(a,"增加")==0) return sum+sum1;
    else if(strcmp(a,"减少")==0) return sum-sum1;
    else if(strcmp(a,"乘与")==0) return sum*sum1;
    else if(strcmp(a,"除以")==0) return sum/sum1;
}
int main(){
    int sum;
    char a[100],b[100],c[100],d[100],e[100],f[100],g[100],h[100],i[100],j[100];
    scanf("%s",a);
    if(strcmp(a,"整数")==0){
        scanf("%s %s %s",b,c,d);
    }
    else{
        printf("错误\n"); 
        return 0;
    }
    sum=swap(d);
    while(scanf("%s %s",e,f)!=EOF){
        
        if(strcmp(b,e)==0){
            	scanf("%s",g);
                sum=jisuan(sum,f,g);       
            }
		 if(strcmp(e,"看看")==0){ 
            printf("%s\n",list[sum]);
            break;
		 } 
    } 
	scanf("%s %s %s %s %s %s %s %s %s %s",a,b,c,d,e,f,g,h,i,j); // b变量 c符号 g句1 j句2 
	if (!strcmp(c,"大于")) { // 符号为大于 
         if (sum > swap(d)) { // 只考虑中文双引号 
         	for (int i = 2; i < strlen(g)-2; i++) printf("%c", g[i]);
		 } else {
		 	for (int i = 2; i < strlen(j)-2; i++) printf("%c", j[i]);
		 }
    } else if (!strcmp(c,"小于")) {
        if (sum < swap(d)) { // 只考虑中文双引号 
         	for (int i = 2; i < strlen(g)-2; i++) printf("%c", g[i]);
		 } else {
		 	for (int i = 2; i < strlen(j)-2; i++) printf("%c", j[i]);
		 }
    } 

	return 0;       
}
