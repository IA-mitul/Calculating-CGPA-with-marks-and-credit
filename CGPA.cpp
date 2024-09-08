#include<bits/stdc++.h>
using namespace std;


double  find_grade(double credit,double marks)
{
    
        marks=marks/credit;
    

    if(marks>=40)
    {
        return 4.00;
    }else if(marks>=37.5 && marks <40)
    {
        return 3.75;
    }
    else if(marks>=35 && marks <37.5)
    {
        return 3.50;
    }
    else if(marks>=32.5 && marks <35)
    {
        return 3.25;
    }else if(marks>=30 && marks <32.5)
    {
        return 3.00;
    }else if(marks>=27.5 && marks <30)
    {
        return 2.75;
    }else if(marks>=25 && marks <27.5)
    {
        return 2.50;
    }else if(marks>=22.5 && marks <25)
    {
        return 2.25;
    }else if(marks>=20 && marks <22.5)
    {
        return 2.00;
    }else{
        return 0.00;
    }


}

int main()
{
    int sub_no;
    cout<<"Enter the total number of subjects : ";
    cin>>sub_no;
    double total_credit=0.00;

    double mark_credit=0.00;

    for(int i=0;i<sub_no;i++)
    {
        double credit;
        double marks;
        cout<<"Enter the credit of the subject : ";
        cin>>credit;
        cout<<"Enter the marks for the subject : ";
        cin>>marks;
        total_credit+=credit;

        double grade = find_grade(credit,marks);
        cout<<grade<<endl;
        mark_credit=mark_credit+(grade*credit);

    }
    

    cout<<(mark_credit/total_credit);


    return 0;
}