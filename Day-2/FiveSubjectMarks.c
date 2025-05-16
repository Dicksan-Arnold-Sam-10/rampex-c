#include<stdio.h>
char assignGrade(int avg){
    char grade;
    if(avg>=89){
        grade='O';
    }
    else if(avg>=79){
        grade='A';
    }
    else if(avg>=69){
        grade='B';
    }
    else if(avg>=59){
        grade='C';
    }
    else if(avg>=49){
        grade='D';
    }
    else if(avg>=39){
        grade='E';
    }
    else{
        grade='F';
    }
    return grade;
}
const char* status(int mark){
    const char *result;
    if(mark >= 35){
        result = "pass";
    }
    else{
        result = "fail";
    }
    return result;
}
int main()
{
    float lang1, lang2, maths, science, social;
    printf("ENTER YOUR LANG01 MARK : ");
    scanf("%f",&lang1);
    printf("ENTER YOUR LANG02 MARK : ");
    scanf("%f",&lang2);
    printf("ENTER YOUR MATHS MARK : ");
    scanf("%f",&maths);
    printf("ENTER YOUR SCIENCE MARK : ");
    scanf("%f",&science);
    printf("ENTER YOUR SOCIAL SCIENCE MARK : ");
    scanf("%f",&social);

    float total,avg;
    total = lang1 + lang2 + maths + science + social;
    avg = total / 5;
    char grade = assignGrade((int)avg);

    printf("------------------------\n");
    printf("LANG01 - %.2f\t%s\n",lang1,status(lang1));
    printf("LANG02 - %.2f\t%s\n",lang2,status(lang2));
    printf("MATHS - %.2f\t%s\n",maths,status(maths));
    printf("SCIENCE - %.2f\t%s\n",science,status(science));
    printf("SOCIAL SCIENCE - %.2f\t%s\n",social,status(social));
    printf("------------------------\n");
    printf("TOTAL - %.0f\n",total);
    printf("AVERAGE - %.0f\n",avg);
    printf("GRADE - %c",grade);

    return 0;
}