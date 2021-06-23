typedef struct info
{
    char date[30];
    char personalID[30];
    char name[30];
    char address[30];
    char phone[30];
    char gender[30];
    int age[30];

    int size;
}sqInfo;

typedef struct infos
{
    sqInfo *infos[100];
    int size;
}sqInfos;

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

sqInfo *createInfo(int n)
{
    sqInfo *R;
    R = (sqInfo *)malloc(sizeof(sqInfo));
    R->size = 0;


    for(int i=0;i<n;i++)
    {
        printf("\nEnter the detail of Vaccinated Person [%3d]: \n",i+1);

        printf("Enter Date(yy/mm/dd): ");
        scanf("%s",&(R+i)->date);

        printf("Enter PersonalID: ");
        scanf("%s",&(R+i)->personalID);

        printf("Enter Name: ");
        scanf("%s",&(R+i)->name);

        printf("Enter Address: ");
        scanf("%s",&(R+i)->address);

        printf("Enter Phone NO.: ");
        scanf("%s",&(R+i)->phone);

        printf("Enter Gender: ");
        scanf("%s",(R+i)->gender);

        printf("Enter Age: ");
        scanf("%d",(R+i)->age);


        R->size++;
    }
    return R;
}



void display(sqInfo *R)
{
    int i;

    printf("<------------------------Details of Vaccinated People-------------------------------------------------->");
    for(i=0;i<R->size;i++)
    {
        printf("\n%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%d\n",(R+i)->date,(R+i)->personalID,(R+i)->name,(R+i)->address,(R+i)->phone,(R+i)->gender,*(R+i)->age);
    }
}

sqInfos *addNewData()
{
    sqInfos *P;
    P = (sqInfos *)malloc(sizeof(sqInfos));
    P->size = 0;
    int  n;
    printf("Enter the number of Vaccinated People added: ");
    scanf("%d",&n);
    createInfo(n);
}

int main ()
{
    sqInfo *L;
    sqInfos *infos;
    infos = (sqInfos *)malloc(sizeof(sqInfos));
    int n;
    printf("Enter the vaccinated people number: ");
    scanf("%d",&n);
    L = createInfo(n);
    display(L);


}
