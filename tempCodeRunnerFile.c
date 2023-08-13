    printf("Enter the number :: ");
    scanf("%d", &n);
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("Not prime");
            break;
        }
    }