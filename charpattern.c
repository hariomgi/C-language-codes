main(){
	int n,r,c; 
	char ch='A';
	printf("How many lines :");
	scanf("%d",&n);
	for(r=1;r<=n;r++){
		for(c=1;c<=r;c++){
			printf("%c",ch++);
			
		}
	printf("\n");
	}
	
}
