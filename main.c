typedef struct info
{
    char date;
    char personalID;
    char name[15];
    char phone[15];
    char gender;
    int age;
    int size;
}sqInfo;

#include <stdio.h>
#include <stdlib.h>


sqInfo *createInfo(int n)
{
    sqInfo *L;
    int i;
    L = (sqInfo *)malloc(n*sizeof(sqInfo));


    printf("...............................Please input the information of Vaccinated people: ..............................");
    for(i=0;i<n;i++)
    {
        printf("\nEnter Vaccinated Date (yy/mm/dd) : ");
        scanf(" ");
        gets((L+i)->date);

        printf("Enter PersonalID: ");
        scanf(" ");
        gets((L+i)->personalID);

        printf("Enter Name: ");
        scanf(" ");
        gets((L+i)->name);

        printf("Enter Phone No.: ");
        scanf(" ");
        gets((L+i)->phone);

        printf("Enter Gender: ");
        scanf(" ");
        gets((L+i)->gender);

        printf("Enter Age: ");
        scanf("%d",&(L+i)->size);

        L->size++;

    }
    printf("Date\t PersonalID\t Name\t Phone No.\t Gender\t Age");
    for(i=0;i<L->size;i++)
    {
        printf("%s\t %s\t %s\t %s\t %s\t %d",(L+i)->date,(L+i)->personalID,(L+i)->name,(L+i)->phone,(L+i)->gender,(L+i)->age);

    }
}




void main()
{
    int num;
    sqInfo *R;
    printf("Please input the no. of people vaccinated: ");
    scanf("%d", &num);

    R = createInfo(num);

}
