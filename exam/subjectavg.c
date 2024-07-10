#include <stdio.h>
#define pf printf
#define sf scanf

main()
{
    float maths, physics, chem, eng, hindi, sum = 0, avg;

    printf("Enter marks of student\n");

    pf("Enter Maths marks:");
    sf("%f", &maths);

    pf("Enter Physics marks:");
    sf("%f", &physics);

    pf("Enter Chemistry marks: ");
    sf("%f", &chem);

    pf("Enter English marks: ");
    sf("%f", &eng);

    pf("Enter Hindi marks: ");
    sf("%f", &hindi);

    sum = maths + physics + chem + eng + hindi;
    pf("\nSum of all subject : %.2f", sum);
    avg = sum / 5;

    pf("\nAverage marks : %.2f", avg);

    if (avg >= 90 && avg <= 100)
    {
        pf("\nGrade : A+");
    }
    else if (avg >= 80 && avg <= 90)
    {
        pf("\nGrade : A");
    }
    else if (avg >= 70 && avg <= 80)
    {
        pf("\nGrade : B+");
    }
    else if (avg >= 60 && avg <= 70)
    {
        pf("\nGrade : B");
    }
    else if (avg >= 50 && avg <= 60)
    {
        pf("\nGrade : c+");
    }
    else if (avg >= 40 && avg <= 50)
    {
        pf("\nGrade : C");
    }
    else if (avg >= 33 && avg <= 40)
    {
        pf("\nGrade : D");
    }
    else if (avg < 33)
    {
        pf("\nGrade : Fail");
    }
    else
    {
        pf("Invalid value");
    }
}