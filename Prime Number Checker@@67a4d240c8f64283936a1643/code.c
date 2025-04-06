int isPrime(num){
    if(num<2){
        printf("1");
    } else{
        for(int i=2; i*i<num; i++){
            if(num%i==0){
                printf("0");
            }else{
                printf("1");
            }
        }
    }
}