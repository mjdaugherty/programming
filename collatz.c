# include <stdio.h>
# include <time.h>

int collatz(int);

int main(){
    
    int clocktime;
    clocktime = clock();
    int n;
    FILE *fp;
    fp = fopen("collatz.dat", "w");

    for (n = 1; n < 100001; n++)
    {
        fprintf(fp, "%d %d\n", n, collatz(n));
    }
    
    fclose(fp);
    printf("%ld\n", (clock() - clocktime));
    return 0;
    
}

int collatz(int x){
    
    int i;
    int count;
    count = 0;
    while (i != 1)
    {
        count += 1;
        if (i % 2 == 0) i /= 2;
        else i = 3 * i + 1;
    }
    return count;

}
