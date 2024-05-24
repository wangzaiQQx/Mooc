int main(){
    int score,c;
    char grade;
    printf("Please input score:\n");
    c = scanf("%d", &score);
    if (score < 0 || score > 100 || c!=1) printf("Input error!\n");
    else{
        if (score >= 90)
            grade = 'A';
        else if (score >= 80)
            grade = 'B';
        else if (score >= 70)
            grade = 'C';
        else if (score >= 60)
            grade = 'D';
        else
            grade = 'E';
        printf("grade: %c\n", grade);
    }
    return 0;
}