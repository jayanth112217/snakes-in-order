#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	long int n,N;
	scanf("%ld",&n);
	while(n--){
	    scanf("%d",&N);
	    char s[N];
	    scanf("%s",s);
	    int i=0;
	    int j=0;
	    int arr[N];
	    int size=0;
	    while(s[i]!='\0'){
	        if(s[i]=='H' || s[i]=='T'){
	            arr[j]=s[i];
	            j++;
	            size++;
	        }
	        i++;
	}
	if(size==0){
	    printf("Valid\n");
	}
	else if(size%2!=0){
	    printf("Invalid\n");
	}
	else{
	int k=0;
	int flag=0;
	while(1){
	    if(k==size){
	        break;
	    }
	    else if(arr[k]=='T' && k==0){
	        printf("Invalid\n");
	        flag=1;
	        break;
	    }
	    else if(arr[k]=='H'){
	        if(arr[k+1]!='T'){
	            printf("Invalid\n");
	            flag=1;
	            break;
	        }
	        else{
	            flag=0;
	        }
	    }
	    else if(arr[k]=='H' && k == size-1){
	        printf("Invalid\n");
	        flag=1;
	        break;
	    }
	    k++;
	}
	if(flag==0){
	   printf("Valid\n");
	}
  }
}
	return 0;
}
