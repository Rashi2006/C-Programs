# include<stdio.h>

int main(){
  int n=5,k,i,j;
  printf("enter value of k : ");
  scanf("%d", &k);
              
  /*
     33333
     32223
     32123  
     32223
     33333
  
  */
  
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(i==1||i==n||j==1||j==n){
            printf("%d", k);
            
        }
        else if(!(i==3&&j==3)){
          printf("%d", k-1); 
        }else if (i==3&&j==3)
        {
          printf("%d", k-2);
        }
        
        
    }
    printf("\n");
  }
  return 0;
}
