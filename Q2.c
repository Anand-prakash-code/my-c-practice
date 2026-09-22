// not modify  use const
const char *words[] = {"zeor","one","two","three","four","five","six","seven","eight","nine"};

for(int i = a; i<=b; i++){

    if(i<=9){
        printf("%s\n",words[i]);
    }else{
        // even or odd
        if(i % 2 == 0){
            printf("even\n");
        }else{
            printf("odd\n");
        }
    }
}

return 0;}
