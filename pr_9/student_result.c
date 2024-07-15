#include <stdio.h>
#define pf printf
#define sf scanf

struct student
{
    char name[30];
    int roll;
    int phy;
    int che;
    int math;
};

void main()
{
    struct student s[5];
    int total[5],per[5];

    for (int i = 1; i <= 5; i++)
    {
        pf("\n\nEnter detail of student %d ", i);

        pf("\nEnter roll no : ");
        sf("%d", &s[i].roll);

        fflush(stdin);
        pf("\nEnter name: ");
        sf("%[^\n]", s[i].name);

        pf("\nmarks of chemistry : ");
        sf("%d", &s[i].che);

        pf("\nmarks of maths : ");
        sf("%d", &s[i].math);

        pf("\nmarks of physics : ");
        sf("%d", &s[i].phy);
    }
    
    

    for(int i=1;i<=5;i++)
    {
        total[i] = s[i].phy + s[i].che + s[i].math;
        per[i]=(total[i]/300)*100;
    }
    
    for(int i=1;i<=5;i++)
    {
        pf("\n\n %s (%d)\n",s[i].name,s[i].roll);
        pf("\nChemistry : %d",s[i].che);
        pf("\nMaths : %d",s[i].math);
        pf("\nPhysics : %d",s[i].phy);
        pf("\nTotal : %d",total[i]);
        pf("\nPercentage : %d",per[i]);
    }
}