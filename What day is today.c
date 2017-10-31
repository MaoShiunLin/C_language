#include <stdio.h>
//int flag;
//int num_of_days[12] = {31,0,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int year,day;
    int sets;
    int month,date;
    int flag;
    int i,j;
    int num_of_days[] = {31,0,31,30,31,30,31,31,30,31,30,31};
    
    printf("Please enter the day of January 1 of which year like: yyyy d \n");
    printf("The format of day is 0 to 6, 0 stand for Sunday. \n");
    scanf("%d %d",&year,&day);
    if(year < 400)
    {
        if(year%4 == 0 && year%100 !=0)
        {
            flag = 2; //flag = 1 stand for leap year
            printf("This year is leap year. \n");
        }
        else
        {    
            flag = 1;
            printf("This year is not leap year. \n");
        }
    }
    else
    {
        if(year%400 == 0 || year%4 == 0)
        {
            flag = 2;
            printf("This year is leap years. \n");
        }
        else
        {    
            flag = 1;
            printf("This year is not leap year. \n");
        }
    }
    printf("How much sets do you want to try(from 1 to 10): \n");
    scanf("%d",&sets);
    printf("Please enter the sets you wants to try(mm d): \n");
    
    for(i=0; i<sets; i++)
    {
        int k = 0;
        scanf("%d %d",&month,&date);
        if(month >= 1 && month <= 12)
        {
            switch(flag)
            {
                case 1:
                    num_of_days[1] = 28;
                    break;
                case 2:
                    num_of_days[1] = 29;
                    break;
                default:
                    printf("Error.");
                }
            if(date >= 1 && date <= num_of_days[month-1])
            {

                for(j=0;j<(month-1);j++)
                {
            
                    k = k + num_of_days[j];
                    //printf("%d \n",k);
                }
        
                k = k + date;
                //printf("%d \n",k);
                int p = (k-1) % 7;
                int q = day;
        
                q = p + q;
                if(q < 7)
                    printf("%d \n",q);
                else
                    printf("%d \n",(q%7));
            }
            else 
                printf("-2 \n");
        }
        else
            printf("-1 \n");
            
        
    }
    
    system("pause");
}
