#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include <unistd.h>
#include<windows.h>
#include <time.h>
#define name5"Nuruzzaman "
#define name6"Araf Chawdhory"
#define na3
#define pi 3.1416
#define GUB printf("Varsity Name =Green University of Bangladesh");

void Variable1()
{
    int y=10;
    float z=20;
    printf("\nY = %d z =%.2f\n",y,z);
    printf("\nHello world !\n");
    printf("\nFirst c program\nMy name is Nuruzzaman Nuru .I studying  at Green University of Bangladesh  in CSE. I live in  Dinajpur.\
 I live at present  Dhaka \n");
}
void inputVariable()
{
    int x, y, z ;
    printf("Enter three numbers ");
    scanf("%d %d %d",&x,&y,&z);
    printf(" Your values x=%d y=%d z=%d  \n",x,y,z);
}
void VariableByte()
{
    int i;
    float f;
    double d;
    char ch;
    long double ld;
    printf(" Size of int %d\n",sizeof(i));
    printf(" Size of float %d\n ",sizeof(f));
    printf(" Size of  double %d\n ",sizeof(d));
    printf(" Size of char  %d\n ",sizeof(ch));
    printf("Size of long double %d\n",sizeof(ld));
}
void ASCvalue()
{
    int n, ch ;
    printf("Enter any asc  number and  character\n"); // small capital =97 from 122
    scanf("%d %c",&n,&ch);                                         // capital letter =65 from 90
    printf(" ASC ch is %c\n Asc number is %d\n",n, ch);  // digit = 48 from 57(0 -9)
}
void ASCLetterconvert()
{
    /*char lower, upper;
    printf("Enter your upper case and lower case letter "); // right but not right ans
    scanf("%c %c", &upper,&lower);
    printf(" Upper to lower = %c\n lower to upper= %c \n", upper+32, lower-32);*/
    char lower, upper;
    printf("Enter your upper case and lower case letter \n");
    scanf("%c %c", &upper,&lower);
    upper=toupper(lower);
    lower=tolower(upper);
    printf(" Upper to lower = %c\n lower to upper= %c \n", lower,upper);
}
void AUOperator()
{
    //asingment operator
    int x=10;
    x=x+2;
    int y=15;
    y=y*2;
    float z=10;
    z=z/2;
    printf(" Asingment operator  is %d %d %f\n",x, y,z);
//unary  pre and post increment decreament
    int a=10;
    printf(" post increment  %d \n",a++); //10
    printf(" post  increment value  %d\n",a);  //11
    printf("pre increment %d\n",++a); //12
    printf("pre increment valude  %d\n",a); //12
    printf("post decrement %d\n",a--); //12
    printf("post decrement value %d\n",a);//11
    printf("pre decrement %d\n",--a); //10
    printf("Pre decrement value  %d\n",a); //10
    //tarnary operator
    int num1, num2, large;
    printf(" Enter Two number ");
    scanf("%d %d",&num1, &num2);
    large=num1>num2? num1:num2;
    printf(" Large number %d \n", large);
}
void MathFuction()
{
    float x=25, squareroot,cube,ex,Log1,Pow,Sin,Cos,Pall,Log,Floor,Cell ;
    squareroot=sqrt(x);
    cube=cbrt(27);
    ex=exp(1); // e^x
    Log1=log(x);
    Pow=pow(2,3) ;//2 base 3 exponent
    Sin=sin(0.0);
    Cos=cos(0.0);
    Pall=abs(-x);
    Floor=floor(34.4);
    Log=log10(x);
    Cell=ceil(27.4);
    printf("Square is =%f\n cube %f\n  expotential =%f\n log(x)=%f\n Pow=%f \n", squareroot,cube,ex, Log1,Pow);
    printf(" Sin = %f \n Cos=%f \n positive all %f \n floor =%f \n log10 =%f \n Cell =%f\n", Sin, Cos,Pall,Floor,Log,Cell);
}
void VariableMain()
{
    do
    {
        int op;
        printf("\n \a\a**Variable and data type and asc value  and Operator and Math Fuction Menu **\n");
        printf(" 1.Variable1 \n 2.Input variable \n 3.Variable byte \n 4.ASC value \n 5.ASCLetterconvert\
        \n 6.Operator \n 7.Math Function \n 8.Return main menu \n ");
        printf("Enter your option \n");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            Variable1();
            break;
        case 2 :
            inputVariable();
            break;
        case 3 :
            VariableByte();
            break;
        case 4:
            ASCvalue();
            break;
        case 5:
            ASCLetterconvert();
            break;
        case 6:
            AUOperator();
            break;
        case 7:
            MathFuction();
            break;
        case 8 :
            return main();
            break;
                default:
            printf(" \nWorng choice !! Try again later\n");
        }
    }
    while(1);
}
void TwoNumber()
{
//two number sum, sub,  mul, avg, mudu.
    int num1, num2, sum, sub, mul,mudu;
    printf("Enter your two number ");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    float avg=((float)(num1+num2))/2;
    mudu=num1%num2;
    printf(" sum is %d \n",sum);
    printf(" sub is %d\n ",sub);
    printf(" mul is %d\n", mul);
    printf(" avg is %f\n ", avg);
    printf(" modulus  is %d \n ", mudu);
}
AreaAll()
{
    int B=10, H=2, c=10,Area1 ;
    float PI=3.1416,A3,A4,s;
    Area1=(0.5*B*H);
    float A2=PI*H*H;
    s=(B+H+c)/2;
    A3=sqrt(s*(s-B)*(s-H)*(s-c));
    A4=B*H;
    printf("Triangle of area %d\n Circle of area %f\n  Triangle of area %f\n Area of rectangle %f  \n ",Area1, A2,A3,A4);
//Equation
    float  a=2, b=2, C=2,d,x1, x2;
    d=sqrt(b*b- 4*a*C);
    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);
    printf("X1 is %f\n ",x1);
    printf(" x2 is %f\n ",x2);
}
// mini calculator started
void add()
{
    int n,i, sum=0,num[100];
    printf("How many numbers ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+num[i];
    }
    printf(" \nSum is %d\n",sum);
}
void subtract()
{
    double n1, n2,sub;
    printf("Enter your two Number ");
    scanf("%lf %lf",&n1,&n2);
    sub=n1-n2;
    printf("\nsubtraction  is %.2lf\n",sub);
}
void multiplication()
{
    int n,i,num[100],mul=1;
    printf("How many numbers ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0; i<n; i++)
    {
        mul=mul*num[i];
    }
    printf("\n Multification is %d \n",mul);
}
void  Division()
{
    int n1, n2,div,rem1;
    printf("Enter your two Number ");
    scanf("%d %d",&n1,&n2);
    if (n2 == 0)
    {
        printf ("\n Divisor cannot be zero. Please enter another value ");
        scanf ("%d", &n2);
    }
    div=n1/n2;
    printf("\nDivision  is %d\n",div);
    rem1=n1%n2;
    printf("\nRemainder  is %d\n",rem1);
}
void Remainder()
{
    int n1, n2,rem;
    printf("Enter your two Number ");
    scanf("%d %d",&n1,&n2);
    rem=n1%n2;
    printf("Remainder  is %d\n",rem);
}
void calculatePower()
{
    double i, base,exp, result=1;
    printf("Enter your base number ");
    scanf("%lf",&base);
    printf("Enter your expotent  number ");
    scanf("%lf",&exp);
    for(i=1; i<=exp; i++)
    {
        result=result*base;
    }
    //result=pow(base,exp);
    printf("\n The result  is %.2lf\n",result);
}
void squareRoot()
{
    double n1,squR;
    printf("Enter your Number ");
    scanf("%lf",&n1);
    squR=sqrt(n1);
    printf("\nSquare Root is %.2lf\n",squR);
}
void Minicalculator()
{
    {
        int op;
        do
        {
            printf("\n\a\a***Mini calculator ***\n");
            printf("\n1.Addition");
            printf("\n2.Subtraction");
            printf("\n3.Multiplication");
            printf("\n4.Division");
            printf("\n5.Remainder");
            printf("\n6.Calculate Power");
            printf("\n7.Square Root ");
            printf("\n8.Return main menu ");
            printf("\nEnter your choice: ");
            scanf("%d", &op);
            printf("\n");
            switch (op)
            {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                Division();
                break;
            case 5:
                Remainder();
                break;
            case 6 :
                calculatePower();
                break;
            case 7:
                squareRoot();
                break;
            case 8:
                return main();
                break;
            default:
                printf("\nError! please try again later\n");
            }
        }
        while(op);
        getch();
    }
}
void CalculateAll()
{
    do
    {
        int op;
        printf("\n\a\a**CalculateAll Menu **\n");
        printf(" 1.Two numbers (S,M,D) \n 2.Area All \n 3.Mini calculator \n 4.Return main menu \n");
        printf("\nEnter your option \n");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            TwoNumber();
            break;
        case 2:
            AreaAll();
            break;
        case 3:
            Minicalculator();
            break;
              case 4 :
            return main();
            break;
                default:
            printf(" \nWorng choice !! Try again later\n");
        }
    }
    while(1);
}
void Digitconveter()
{
    int number;
    printf(" Decimal number ");
    scanf("%d", &number);
    printf(" Octal number %o\n", number);
    printf(" Hexa number  %x\n",  number);
    int octal;
    printf(" enter your octal number ");
    scanf("%o", &octal);
    printf(" Decimal number %d\n ", octal);
    printf(" Hexa number  %x\n",octal );
    int hexa;
    printf(" Enter hexa number ");
    scanf("%x", &hexa);
    printf(" Octal number %o\n", hexa);
    printf(" Decimal  number %d\n", hexa);
}
void   Temperature()
{
    float farhenhight,farhenhight1, Celsius,Celsius1,kelvin, kelvin1, kelvin2;
    printf(" Enter your Celsius ");
    scanf(" %f", &Celsius);
    farhenhight =(Celsius*1.8)+32;
    kelvin2=(Celsius+273.15);
    printf(" \nFarhenhight is %f \n",farhenhight);
    printf(" kelvin is %f\n\n",kelvin2);
    printf(" Enter your Farhenhight ");
    scanf("%f", &farhenhight);
    Celsius=(farhenhight-32)/1.8;
    kelvin1=((farhenhight-32)/1.8+273.15);
    printf("\nCelsius is %f\n ",Celsius);
    printf(" kelvin is %f\n\n",kelvin1);
    printf("Enter your kelvin ");
    scanf("%f",&kelvin);
    farhenhight1=(kelvin-273.15)*1.8+32;
    Celsius1=(kelvin-273.15);
    printf(" \nFarhenhight is %f \n",farhenhight1);
    printf("Celsius is %f\n ",Celsius1);
}
void Conveter()
{
    do
    {
        int op;
        printf("\n\a\a\a***Conveter Menu ***\n");
        printf("\n 1.Digit Conveter \n 2.Fahrenheiht and Celsius and kelvin \n 3.Return main menu \n ");
        printf("Enter your option \n");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            Digitconveter();
            break;
        case 2 :
            Temperature();
            break;
        case 3:
            return main();
                default:
            printf(" \nWorng choice !! Try again later\n");
        }
    }
    while(1);
}
void oddeven()
{
    int n;
    printf (" Enter your integer number \n ");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf(" number is  Even \n  ");
    }
    else
    {
        printf(" number is odd \n ");
    }
    //voteing
    int year;
    printf("Enter your year ");
    scanf("%d",&year);
    if (year>=18)
    {
        printf(" \n yes \n ");
        printf(" Nuruzzaman please your vote  \n");
    }
    else
    {
        printf(" No voting \n ");
        printf("Thanks\n ");
    }
}
void Relationoperator()
{
    // large small , equal ;
    int num1, num2;
    printf(" Enter two Number ");
    scanf("%d %d", &num1, &num2);
    if (num1>num2)
    {
        printf(" large %d \n", num1);
        printf(" small %d\n ", num2);
    }
    else if (num2> num1 )
    {
        printf(" Large %d \n", num2);
        printf(" small %d \n", num1);
    }
    else
        printf("Number are equal is  =%d =%d\n",num1, num2);
    // if else letterv vowel and consonant
    char ch;
    printf(" Enter one  letter ");
    scanf(" %c", &ch);
    if (ch=='a' || ch =='A' ||  ch=='e'|| ch =='E' ||ch=='I'||  ch =='i'|| ch=='o'|| ch =='O' ||ch =='u'|| ch =='U')
        printf(" Vowel \n ");
    else
        printf(" Consonant \n");
    // capital and small letter
    printf(" Enter any letter ");
    fflush(stdin); //  same data include helping
    scanf("%c", &ch);
    if (ch>='A' && ch<='Z')
        printf("Capital letter\n");
    else if (ch>='a'&& ch<='z')
        printf(" Small letter\n");
    else
        printf(" not  letter \n");

    //grade in mark
    int marks ;
    printf(" Enter your marks ");
    scanf("%d", &marks);
    if(marks>100 || marks<0)
        printf(" invalid  mark\n  ");
    else if(marks>=80 && marks<=100)
        printf("  Grade =A+  \n");
    else if (marks>=70 && marks<=79)
        printf(" Grade = A \n");
    else if (marks>=60 && marks<=69)
        printf("  Grade =  A- \n");
    else if (marks>=50 && marks<=59)
        printf(" Grade =  B \n  ");
    else if (marks>=40 && marks<= 49)
        printf(" Grade =  C \n ");
    else if (marks >=33 && marks<=39)
        printf(" pass and C  grade ");
    else
        printf(" Fail , Marks is %d \n", marks);

}
void Leapyear()
{
//leap year and not leap year
    int year;
    printf(" Enter your Year ");
    scanf(" %d", &year);
    if (year%400==0)
        printf(" Leap year ");
    else if(year%4==0 && year%100!=0)
        printf(" Leap year");
    else
        printf(" Not leap year");

}
void IFelse()
{
    do
    {
        int op;
        printf(" \n\a\a\a*** If Else Menu ***\n");
        printf("1.Odd even \n 2. Relation operator (all) \n 3.Leap year \n 4.Return main menu ");
        printf("\n Enter your number \n");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            oddeven();
            break;
        case 2:
            Relationoperator();
            break;
        case 3:
            Leapyear();
            break;
        case 4:
            return main();
            break;
                default:
            printf(" \nWorng choice !! Try again later\n");
        }
    }
    while(1);
}
void  SwitchCase()
{
    double num1, num2;
    char op;
    printf("Enter Two number : ");
    scanf("%lf %lf", &num1, &num2);
    fflush(stdin); // 2 input problem solve this function
    printf("Enter Your an operator (+, -,*, /)\n ");
    scanf("%c", &op);
    switch(op)
    {
    case '+':
        printf("%lf +%lf = %.2lf\n", num1,num2,num1+num2);
        break;
    case '-':
        printf("%lf -%lf = %.2lf\n", num1,num2,num1-num2);
        break;
    case '*':
        printf("%lf *%lf = %.2lf\n", num1, num2,num1*num2);
        break;
    case '/':
        printf("%lf /%lf = %.2lf\n", num1, num2,num1/num2);
        break;
    default:
        printf("not a valid operator ");
    }
    fflush(stdin);
    char ch;
    printf("Enter Any letter \n");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("\n vowel\n ");
        break;
    default :
        printf(" \nConsonant\n");
    }
}
void loops3()
{
    // 3 loops
    int n;
    printf("Enter your number ");
    scanf("%d", &n);
    int i;
    for(i=1; i<=n; i++)
        printf("I love you  %d\n",i);

   /* int j=1;
    while(j<=n)
    {
        printf("while  loop %d\n",j);
        j++;
    }
    int k=1;
    do
    {
        printf(" do  while loop %d\n", k);
        k++;
    }
    while(k<=n);*/

}
void   satretment()
{

//continue and break and goto statement
    int i, k,n;
    printf("Enter your number ");
    scanf("%d", &n);
    for(i=1; i<n; i++)
    {
        if(i%2==0) // condition match not print
            continue;
        printf(" continue %d\n",i);
        if(i==9)
            break;
    }
nuru:
    printf(" go to %d\n", k);
    k++;
    if(k<=5) //wrong but Why?
        goto nuru;  //label is calling here
}
void NamotarGhor()
{
    while(1)
    {
        int i, num;
        printf(" Enter any number ");
        scanf("%d",&num);
        for(i=1; i<=10; i++)
        {
            int  result=num*i;
            printf("%d x %d =%d\n",num,i,result);
        }
    }
}
void   Factorial()
{
    //factorial
    int n,i,fact=1;
    printf("Enter any positive number ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    printf(" \n%d Factorial is %d\n",n, fact);

}
void primenumber()
{
    int i, num, count=0;
    printf("Enter any number \n");
    scanf("%d",&num);
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        printf("%d prime number\n",num);
    else
        printf("%d not prime number \n",num);
}
void gcdandlcm()
{
    int num1, num2,n1,n2,rem,gcd,lcm;
    printf("Enter two number ");
    scanf("%d %d",&num1,&num2);
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    lcm=(num1*num2)/gcd;
    printf("GCD is %d \n", gcd);
    printf("LCM is %d\n", lcm);
}
void sumofdigits()
{
    int num1, temp,rem,sum=0;
    printf("Enter your digit ");
    scanf("%d",&num1);
    temp=num1;
    while(temp!=0)  // not eual and rem ,sum , div with temp and 10
    {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }

    printf(" Sum of digits %d \n", sum);
}
void reverseandpalindrome()
{
    int num1, temp, rem,rev=0;
    printf("Enter your digit  ");
    scanf("%d", &num1);
    temp=num1;
    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    printf("Reverse of number %d",rev);
    if(num1==rev)
        printf("Number is palindrome \n");
    else
        printf("Number is not palindrome \n");
}
void armstrongnumber()
{
    // 1 from 1000 count
    int i, num1, rem,temp,sum=0;
    printf("Armstrong number  = ");
    for(i=1; i<=1000; i++)
    {
        temp=i;
        while(temp!=0)
        {
            rem=temp%10;
            sum=sum+rem*rem*rem; // 3rem
            temp=temp/10;
        }
        if(sum==i)
            printf("%d\t",i);
        sum=0;
    }
}
void totalnumberofdigits()
{
    int num1,count=0;
    printf("Enter your integer digits ");
    scanf("%d",&num1);
    while(num1!=0)
    {
        num1=num1/10; // not equal pre increment
        ++count;
    }
    printf("\nTotal Number of digits %d\n",count);
}
void strongnumber()
{
    int num, rem, temp, sum=0,fact=1,i;  // factorial ar sum for strong number
    printf("Enter your number ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        for(i=1; i<=rem; i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==num)
        printf(" %d  is a strong number \n",num);
    else
        printf(" %d is not strong number ", num);
}
//end loop
void Loop()
{
    do
    {
        int op;
        printf("\a\a\a\n*** Loop Menu ***\n");
        printf(" 1.3 loop \n 2.statement (CBG) \n 3.Namotar Ghor \n 4. Factorial \n 5.Prime number \n 6.gcd and lcm \
     \n 7.sum of digits \n 8.Reverse and Palindrome \n 9.Armstrong  number \n 10.Total number of digits \n 11.Strong number \n 12.Return main menu  \n");
        printf("Enter your option \n ");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            loops3();
            break;
        case 2:
            satretment();
            break;
        case 3:
            NamotarGhor();
            break;
        case 4:
            Factorial();
            break;
        case 5:
            primenumber();
            break;
        case 6:
            gcdandlcm();
            break;
        case 7:
            sumofdigits();
            break;
        case 8:
            reverseandpalindrome();
            break;
        case  9:
            armstrongnumber();
            break;
        case 10:
            totalnumberofdigits();
            break;
        case 11:
            strongnumber();
            break;
              case 12 :
            return main();
            break;
                default:
            printf(" \nWorng choice !! Try again later\n");
        }
    }
    while(1);
}
void Series1()
{
    int n, sum=0, i;
    printf("\n 1+2+3+. ...\n Enter last number ");
    scanf("%d",&n);
    printf("1+2+3+......+%d",n);
    for(i=1; i<=n; i++)
        sum=sum+i;
    printf(" =%d",sum);
    // gun series
    int n1,j, result=1;
    printf("\n  1x3x5x....\n Enter Your n value \n ");
    scanf("%d",&n1);
    for(j=1; j<=n1; j=j+2)
    {
        printf("%dx",j);
        result=result*j;
    }
    printf(" =%d ",result);
}
void MulSeries()
{
    int n1, n2, sum=0, a=1,b=2;
    printf("1.3+2.5+..\n Enter your values n1 and n2(odd) \n");
    scanf("%d %d",&n1,&n2);
    printf("\n1.3+2.5+.....%d.%d",n1,n2);
    while(a<=n1 && b<=n2)
    {
        sum=sum+a*b;
        a=a+1;
        b=b+2;
    }
    printf(" =%d",sum);
}

void MulSeries1()
{
    int n1,n2,n3,a=1, b=2, c=4, sum=0;
    printf(" \n1.3.4+2.4.5.....\n Enter your n1 , n2 , n3 values ");
    scanf("%d %d %d",&n1, &n2,&n3);
    printf("`1.3.4+2.4.5.....%d.%d.%d",n1,n2,n3);
    while(a<=n1 && b<=n2 && c<=n3)
    {
        sum=sum+a*b*c;
        a=a+1;
        b=b+2;        // not write ans code some problem
        c=c+4;
    }
    printf(" =%d",sum);

}
void PowerSeries()
{
    int i,n,sum=0;
    printf(" \n 1^2+2^2+3^2+.....n^2 \n Enter your n value ");
    scanf("%d",&n);
    printf("1^2+2^2+3^2+.....%d^2",n);
    for(i=1; i<=n; i++)
    {
        sum=sum+i*i;
    }
    printf(" =%d\n",sum);

    //1^3x2^3x3^3x.......n^3
    int n1,j,result=1;
    printf("\n 1^3x2^3x3^3x.......n^3 \nEnter your N value ");
    scanf("%d",&n1);
    printf("1^3+2^3+3^3+.....%d^3",n1);
    for(j=1; j<=n1; j=j+1)
    {
        result=result+j*j*j;
    }
    printf(" = %d",result);
}
void  DividedSeries()
{

    double n,i, sum=0;
    printf("\n 1.0+(1/2.0)+(1/3.0)+(1/4.0)......\n  Enter your n value\n ");
    scanf("%lf",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+(1/i);
        if(i==1)
            printf("%.1lf+",i);
        else if(i==n)
            printf("(1/%.1lf)\n",i);
        else
            printf("(1/%.1lf)+",i);
    }
    printf("\n sum =%0.2lf \n ",sum);

}
void NPseriesfibo()
{
//1-2+3-4+5-6......sum
    int i,n,even=0,odd=0;
    printf("Enter the last term ");
    scanf("%d",&n);
    for(i=1; i<=n; i=i+1)
    {
        if(i%2==0)
            even=even+i;
        else
            odd=odd+i;
    }
    printf("\nsum =%d\n ",odd-even);
//fibonacci  series
    int first=0, second=1,count=0,fibo, sum1=0, n1;
    printf("Enter your Range ");
    scanf("%d",&n1);
    while(count<=n1)
    {
        if(count<=1)
        {
            fibo=count;
        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
            sum1=sum1+fibo;
        }
        printf("%d ",fibo);
        ++count;
    }
    printf(" sum = %d",sum1);
}
void Series()
{
    do
    {
        int op;
        printf("\n \a\a\a**Series Menu** \n");
        printf("1. Series1 \n 2.Multification series \n 3.Multification series2 \n 4.Power Series \n 5.Divided Series \
             \n  6.Sum and Series (Fibonacci)\n 7.Return main menu \n ");
        printf("Enter your option \n");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            Series1();
            break;
        case 2:
            MulSeries();
            break;
        case 3:
            MulSeries1();
            break;
        case 4:
            PowerSeries();
            break;
        case 5:
            DividedSeries();
            break;
        case 6:
            NPseriesfibo();
            break;
              case 7 :
            return main();
            break;
                default:
            printf(" \nWorng choice !! Try again later\n");
        }
    }
    while(1);
}
void Pattern1()
//1 2 3 4 digit
{
    int n,row, col;
    printf("Enter N value ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)        //outer loop row = n value
    {

        for(col=1; col<=row; col++)      //liner loop
        {

            printf("%d",col);
        }
        printf("\n");
    }
}
void Pattern2()
{
// pattern a , b c, row+64=cipital A ..row+96= small a
    int n, row,col;
    printf("Enter your n value ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c",col+96);//row=row value //col=colum value
        }
        printf("\n");
    }

}
void Pattern3()
{
// odd even number 11 00
    int n,row,col;
    printf("Enter your n value ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d",row%2);
        }
        printf("\n");
    }
}
void Pattern4()
// ** print
{
    int n, row, col;
    printf("Enter your  n value ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("*");
            //printf("#");
        }
        printf("\n");
    }
}
void Pattern5()
//olta ractringle
{
    int row, col, n;
    printf(" Enter your N value ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d",col);
            //printf("%d",row);// row use
        }
        printf("\n");
    }
    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d", col);//col use
            //printf("%d",row);
        }
        printf("\n");

    }
}
void Pattern6()
{
    int n, row, col;
    printf("1.Enter your n Value ");
    scanf("%d",&n);
    for(row=1; row<=n; row ++)
    {
        for(col=1; col<=row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
//pattern 5
    int row1, col1, n1;
    printf("2.Enter your N value ");
    scanf("%d",&n1);
    for(row1=1; row1<=n1; row1++)
    {
        for(col1=1; col1<=n-row1; col1++)
        {
            printf(" ");
        }
        for(col1=1; col1<=row1; col1++)
        {
            printf("%d",col1);
        }
        printf("\n");
    }
    int n2,row2,col2;
    printf("3.Enter your N value ");
    scanf("%d",&n2);
    for(row2=n; row2>=1; row2--)
    {
        for(col2=1; col2<=n-row2; col2++)
        {
            printf(" ");
        }
        for(col2=1; col2<=row2; col2++)
        {
            printf("*");
            //printf("%d",col2);
        }
        printf("\n");
    }
//pattern 4
    int n3, col3,row3;
    printf("4.Enter your n value ");
    scanf("%d",&n3);
    for(row3=1; row3<=n3; row3++)
    {
        for(col3=1; col3<=n3-row3; col3++)
            printf(" ");
        for(col3=1; col3<=row3; col3++)
            //printf("%d",col3);
            printf("*");
        printf("\n");
    }
    for(row3=n3-1; row3>=1; row3--)
    {
        for(col3=1; col3<=n3-row3; col3++)
            printf(" ");
        for(col3=1; col3<=row3; col3++)
            //printf("%d",col3);
            printf("*");
        printf("\n");
    }
    int n4, col4,row4;
    printf("5.Enter your n value ");
    scanf("%d",&n4);
    for(row4=1; row4<=n4; row4++)
    {
        for(col4=1; col4<=row4-n4; col4++)
            printf(" ");
        for(col4=1; col4<=row4; col4++)
            //printf("%d",col4);
            printf("* ");
        printf("\n");
    }
    for(row4=n-1; row4>=1; row4--)
    {
        for(col=1; col<=row-n; col++)
            printf(" ");
        for(col4=1; col4<=row4; col4++)
            //printf("%d",col4);
            printf("* ");
        printf("\n");
    }
//row*col pattern 7
    int n5, col5, row5 ;
    printf("6.Enter your value ");
    scanf("%d",&n5);
    for(row5=1; row5<=n5; row5++)
    {
        for(col5=1; col5<=row5; col5++)
            printf("%d ",row5*col5);
        printf("\n");
    }
    int n6, row6, col6;
    printf(" 7.Enter your N value ");
    scanf("%d",&n6);
    for(row6=1; row6<=n6; row6++)
    {
        for(col6=1; col6<=row6; col6++)
            printf("%d ",row6*col6);
        //printf("*");

        printf("\n");
    }
//pattern 8 pyramid
    int n7, row7, col7;
    printf("8.Enter Your n value ");
    scanf("%d",&n7);
    for(row7=n; row7>=1; row7--)
    {
        for(col7=1; col7<=n7-row7; col7++)
            printf(" ");
        for(col7=1; col7<=2*row7-1; col7++)
            //printf("%d",col7);
            printf("*");
        printf("\n");

    }
//pattern 9 piramit
    int n8, row8, col8;
    printf("9.Enter Your n value ");
    scanf("%d",&n8);
    for(row8=1; row8<=n8; row8++)
    {
        for(col8=1; col8<=n8-row8; col8++)
            printf(" ");
        for(col8=1; col8<=2*row8-1; col8++)
            //printf("%d",col8);
            //printf("Alhamdulillah ");
            printf("*");
        printf("\n");
    }
    //pattern 10
    int na, colA, rowA;
    printf("10.Enter your N value ");
    scanf("%d",&na);
    for(rowA=1; rowA<=na; rowA++)
    {
        for(colA=1; colA<=na-rowA; colA++)
            printf(" ");
        for(colA=1; colA<=2*rowA-1; colA++)
            //printf("%d",rowA);
            // printf("%d",colA);
            printf("*");
        printf("\n");
    }
    for(rowA=na-1; rowA>=1; rowA--)
    {
        for(colA=1; colA<=na-rowA; colA++)
            printf(" ");
        for(colA=1; colA<=2*rowA-1; colA++)
            // printf("%d",rowA);
            //  printf("%d",colA);
            printf("*");
        printf("\n");
    }
    //pattern 11 (Rectangle shape)
    int nB, rowB, colB;
    printf("11.Enter Your N value ");
    scanf("%d",&nB);
    for(rowB=1; rowB<=nB; rowB++)
    {
        for(colB=1; colB<=nB; colB++)
        {
            if(rowB==1 || rowB==nB || colB==1 || colB==nB)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    // Daimon pattern 12
    int nC, rowC, colC;
    printf(" 12.Enter your N value ");
    scanf("%d",&nC);
    //uuper part
    for(rowC=1; rowC<=nC; rowC++)
    {
        for(colC=1; colC<=nC-rowC; colC++)
            printf(" ");
        for(colC=1; colC<=rowC; colC++)
            printf("* ");
        printf("\n");
    }
    //lower part
    for(rowC=nC-1; rowC>=1; rowC--)
    {
        for(colC=1; colC<=nC-rowC; colC++)
            printf(" ");
        for(colC=1; colC<=rowC; colC++)
            printf("* ");
        printf("\n");
    }
    //Tringle shape 13
    int nD, rowD, colD;
    printf("13.Enter your N value ");
    scanf("%d",&nD);
    for(rowD=1; rowD<=nD; rowD++)
    {
        for(colD=1; colD<=nD; colD++)
        {
            if(colD==1|| rowD==nD|| colD==rowD)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    //x shape 14
    int nE, rowE, colE;
    printf("14.Enter your N value ");
    scanf("%d",&nE);
    for(rowE=1; rowE<=nE; rowE++)
    {

        for(colE=1; colE<=nE; colE++)
        {
            if(rowE==colE || rowE+colE==nE+1)
                printf("*");
            else
                printf(" ");

        }
        printf("\n");
    }
    //floyds triangle 15
    int nF, rowF, colF,countF=0;
    printf("15.Enter your N value ");
    scanf("%d",&nF);
    for(rowF=1; rowF<=nF; rowF++)
    {
        for(colF=1; colF<=rowF; colF++)
            printf("%d ",++countF);
        printf("\n");
    }
    //pattern 16
    int nG, rowG, colG;
    printf("16.Enter Your value ");
    scanf("%d",&nG);
    for(rowG=1; rowG<=nG; rowG++)
    {
        for(colG=1; colG<=nG-rowG; colG++)
            printf(" ");
        for(colG=1; colG<=rowG; colG++)
            printf("%d",colG);
        for(colG=rowG-1; colG>=1; colG--)
            printf("%d",colG);
        printf("\n");
    }
    //pattern 17
    int nH, colH, rowH;
    printf("17.Enter Your N value ");
    scanf("%d",&nH);
    for(rowH=1; rowH<=nH; rowH++)
    {
        for(colH=1; colH<=nH-rowH; colH++)
            printf(" ");
        for(colH=1; colH<=rowH; colH++)
            //printf("%d",rowH);
            printf("%d",colH);
        for(colH=rowH-1; colH>=1; colH--)
            //printf("%d",rowH);
            printf("%d",colH);
        printf("\n");
    }
    for(rowH=nH-1; rowH>=1; rowH--)
    {
        for(colH=1; colH<=nH-rowH; colH++)
            printf(" ");
        for(colH=1; colH<=rowH; colH++)
            //printf("%d",rowH);
            printf("%d",colH);
        for(colH=rowH-1; colH>=1; colH--)
            //printf("%d",rowH);
            printf("%d",colH);
        printf("\n");
    }
//ended pattern
}
void pattern()
{
    do
    {
        int op;
        printf("\n\a\a **Pattern  Menu** \n");
        printf("1. Pattern1\n 2.Pattern \n 3.Pattern \n 4.Pattern \n5.Pattern\
             \n  6.(All pattern) \n 7.Return main menu \n");
        printf("Enter your option \n");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            Pattern1();
            break;
        case 2 :
            Pattern2();
            break;
        case  3:
            Pattern3();
            break;
        case 4:
            Pattern4();
            break;
        case 5:
            Pattern5();
            break;
        case 6 :
            Pattern6();
            break;
              case 7 :
            return main();
            break;
    default:
            printf(" \nWorng choice !! Try again later\n");
        }
    }
    while(1);
}
void Array1D()
{
    //array sum
    int num[5];
    num[0]=10;
    num[1]=20;
    num[2]=30;
    num[3]=40;
    printf(" First index %d\n",num[0]);
    printf(" 2nd  index %d\n",num[1]);
    printf(" Third index %d\n",num[2]);
    printf(" 4th index %d\n",num[3]);
    int sum=num[0]+num[1]+num[2]+num[3];
    printf(" Sum of Array %d\n",sum);
    //sum
    int num1[ ]= {10,20,30,40};
    printf(" 1st %d\n",num1[0]);
    printf(" 2nd %d\n",num1[1]);
    int sum1=num1[0]+num1[3];
    printf(" Sum is %d\n",sum1);
    //sum and avg
    int a[3],sum2=0,i;
    //or int a[3]={10,20,30}, sum=0, i;
    a[0]=10;
    a[1]=20;
    a[2]=30;
    for(i=0; i<4; i++)
    {
        sum2=sum2+a[i];
    }
    printf("Sum is %d\n",sum2);
    printf("Avarage is %0.2f\n",(float )sum2/3);
    // useger input sum avg
    int a1[1000],j, sum3=0, n;
    printf("How many numbers ");
    scanf("%d",&n);
    for(j=0; j<n; j++)
    {
        scanf("%d",&a1[j]);
    }
    for(j=0; j<n; j++)
    {
        printf("%d ",a1[j]);
        sum3=sum3+a1[j];
    }
    printf("Sum is %d\n", sum3);
    printf("Avarage is %0.2f\n",(float)sum3/n);

}
void Arraytype()
{
    //maximum number
    int num[1000], i,n;
    printf("How many number ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    int max=num[0];
    for(i=1; i<n;  i++)
    {
        if(max<num[i])
            max=num[i];
    }
    printf("Max number is %d",max);
//fibonacci serics
    int num2[1000], n2, j;
    printf("How many numbers ");
    scanf("%d",&n);
    num2[0]=0;
    num2[1]=1;
    for(j=2; j<n; j++)
    {
        num2[j]=num2[j-1]+num2[j-2];
    }
    printf("\n");
    printf("fibonacci series  ");
    for(j=0; j<n; j++)
    {
        printf("%d ",num2[i]);
    }
//copy all elements of an array to another array
    int array1[50],array2[50],k,n1;
    printf("How many numbers ");
    scanf("%d",&n1);
    for(k=0; k<n1; k++)
    {
        scanf("%d",&array1[i]);
    }
    printf("Array1 : ");
    for(k=0; k<n1; k++)
        printf("%d ",array1[k]);
    for(k=0; k<n1; k++)
        array2[k]=array1[k];
    printf("\nArray 2 : ");
    for(k=0; k<n1; k++)
        printf("%d ", array2[k]);
}
void arraylenearsearch()
{
    int num[100],i,n;
    printf("How many numbers ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    printf(" Number arrays values is ");
    for(i=0; i<n; i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n");
    int value,pos=-1;
    printf("Enter the value you want to search ");
    scanf("%d",&value);
    for(i=0; i<n; i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
        printf(" Item is not found ");
    else
        printf("  Item is founded is %d at potision %d",value,pos);

}
void Array2D()
{
    // 2 D array
    int num1[3] [4]= {{13,21,41,51},{31,45,56,32,}, {20,12,23,34} },col1, row1;
    for(row1=0; row1<3; row1++)
    {
        for(col1=0; col1<4; col1++)
        {
            printf("%d ",num1[row1][col1]);
        }
        printf("\n");
    }
    // 2 Dimentional array user defined
    int num[ 100][100],row, col,n1,n2;
    printf("Enter value row and column number\n");
    scanf("%d %d",&n1,&n2);
    for(row=0; row<n1; row++)
    {
        for(col=0; col<n2; col++)
        {
            printf(" please input value num[%d][%d] =",row,col);
            scanf("%d",&num[row][col]);
        }
        printf("\n");
    }
    for(row=0; row<n1; row++)
    {
        for(col=0; col<n2; col++)
        {
            printf("%d ", num[row][col]);
        }
        printf("\n");
    }

}
void Matrixadditionandsubtruction()
{
    int  row, col, n1, n2, A[100][100],B[100][100], S[100][100], sub[100][100];
    printf("Enter  Row and column Number ");
    scanf("%d %d",&n1,&n2);
    for(row=0; row<n1; row++)
    {
        for(col=0; col<n2; col++)
        {
            printf("A[%d][%d]= ", row, col );
            scanf("%d",&A[row][col]);
        }
        printf("\n");
    }
    printf("\nA matrix =\n");
    for(row=0; row<n1; row++)
    {
        for(col=0; col<n2; col++)
        {
            printf("%d ",A[row][col]);
        }
        printf("\n");

    }
    //B matrix
    for(row=0; row<n1; row++)
    {
        for(col=0; col<n2; col++)
        {
            printf("B[%d][%d]= ", row, col );
            scanf("%d",&B[row][col]);
        }

        printf("\n");
    }
    printf("\nB matrix =\n");
    for(row=0; row<n1; row++)
    {
        for(col=0; col<n2; col++)
        {
            printf("%d ",B[row][col]);
        }

        printf("\n");
    }
    //addition
    printf("\nA+B matrix =\n");
    for(row=0; row<n1; row++)
    {
        for(col=0; col<n2; col++)
        {
            S[row][col]=A[row][col]+B[row][col];
            printf("%d ",S[row][col]);
        }

        printf("\n");
    }
    //subtraction
    printf("\nA-B  matrix =\n");
    for(row=0; row<n1; row++)
    {
        for(col=0; col<n2; col++)
        {
            sub[row][col]=A[row][col]-B[row][col];
            printf("%d ",sub[row][col]);
        }

        printf("\n");
    }
}
void matrixmultification()
{
    int  row, col, r1,  r2, c1, c2, nrc,sum=0, First[100][100], Second[100][100], Mul[100][100] ;
    printf("Enter 1st rows and 1st  columns numbers ");
    scanf("%d %d",&r1, &c1);

    printf ("Enter 2nd rows and  2nd columns numbers ");
    scanf("%d %d", &r2,  &c2);
    while(c1!=r2)
    {
        printf("Error !! column of 1st matrix not equal to of  second matrix  row  \n");
        printf("Enter 1st rows and 1st  columns numbers  ");
        scanf("%d %d",&r1, &c1);

        printf ("Enter 2nd rows and  2nd columns numbers ");
        scanf("%d %d", &r2,  &c2);
    }

    for(row=0; row<r1; row++)
    {
        for(col=0; col<c1; col++)
        {
            printf("1st[%d] [%d]= ",row, col);
            scanf("%d",&First[row][col]);
        }
        printf("\n");
    }
    for(row=0; row<r2; row++)
    {
        for(col=0; col<c2; col++)
        {
            printf("2nd[%d][%d] = ",  row, col);
            scanf("%d", &Second[row][col]);
        }
        printf("\n");
    }
    //muljtification matrix
    for(row=0; row<r1; row++)
    {
        for(col=0; col<c2; col++)
        {
            for( nrc=0;  nrc<c1; nrc++ )         //nrc=new row col
            {
                sum=sum+First[row][nrc]*Second[nrc][col];
            }
            Mul[row][col]=sum;
            sum=0;
        }
    }
    printf("\n 1st  matrix  =\n");
    for(row=0; row<r1; row++)
    {
        for( col=0; col<c1;  col++)
        {
            printf("%d ",First[row][col]);
        }
        printf("\n");
    }

    printf("\nSecond  matrix =\n");
    for(row=0; row<r2; row++)
    {
        for( col=0; col<c2;  col++)
        {
            printf("%d ",Second[row][col]);
        }
        printf("\n");
    }
    printf("\n1st * 2nd  matrix =\n");
    for(row=0; row<r1; row++)
    {
        for( col=0; col<c2;  col++)
        {
            printf("%d ",Mul[row][col]);
        }
        printf("\n");
    }
}
void transposematrix()
{
    int row, col, n1, n2, A[100][100], transpose[100][100];
    printf("Enter  Row and column Number ");
    scanf("%d %d",&n1,&n2);
    for(row=0; row<n1; row++)
    {
        for(col=0; col<n2; col++)
        {
            printf("A[%d][%d]= ", row, col );
            scanf("%d",&A[row][col] );
        }
        printf("\n");
    }
    //tranpose converted
    for(row=0; row<n1; row++)
    {
        for(col=0; col<n2; col++)
        {
            transpose[col][row]=A[row][col];
        }
        printf("\n");
    }
    printf("A matrix = \n");
    for(row=0; row<n1; row++)
    {
        for(col=0; col<n2; col++)
        {
            printf("%d ",A[row][col]);
        }
        printf("\n");
    }
    printf("A convart  transpose matrix =\n");
    for(row=0; row<n2; row++)
    {
        for(col=0; col<n1; col++)
        {
            printf("%d ",transpose[row][col]);
        }
        printf("\n");
    }

}

void matrixdiagonalsum()
{
    int row,  col, n1, n2,A[100][100], sum=0;
    printf("Enter your rows and columns ");
    scanf("%d %d", &n1, &n2);
    for(row=0; row<n1; row++)
    {
        for(col=0; col<n2; col++)
        {
            printf("A[%d][%d]= ", row,col);
            scanf("%d",&A[row][col]);
        }
        printf("\n");
    }
    printf("A matrix =\n");
    for(row=0; row<n1; row++)
    {
        for(col=0; col<n2; col++)
        {
            printf("%d ", A[row][col]);
        }
        printf("\n");
    }
    printf(" printing diagonal element = ");
    for(row=0; row<n1; row++)
    {
        for(col=0; col<n2; col++)
        {
            if(row==col)
            {
                printf("%d ",A[row][col]);
                sum=sum+A[row][ col];
            }
        }
    }
    printf("\nsum of diagonal %d\n",sum);
}

void Triangleupperandlowersum()
{
    int  row, col, n1, n2, A[100][100], uppersum=0, lowersum=0;
    printf("Enter your input rows and column numbers ");
    scanf("%d %d",&n1, &n2);
    for(row=0; row<n1; row++)
    {
        for(col=0; col<n2; col++)
        {
            printf("A[%d][%d] =",row, col);
            scanf("%d",&A[row][col]);
        }
        printf("\n");

    }
    printf("\nA matrix is = \n");
    for(row=0; row<n1 ; row++)
    {
        for(col=0; col<n2; col++)
        {
            printf("%d ", A[row][col]);
        }
        printf("\n");
    }
    for(row=0; row<n1; row++)
    {
        for(col=0; col<n2; col++)
        {
            if(row<col)
            {
                uppersum=uppersum+A[row][col];
            }
            if(row>col)
            {
                lowersum=lowersum+A[row][col];
            }
        }
    }
    printf("\nMatrix sum of upper %d\n",uppersum);

    printf("\nMatrix sum of lower %d", lowersum);
}
// ended array 1 and 2 D
void Array()
{
    do
    {
        int op;
        printf("\n\a\a\a * **Array  Menu** \n");
        printf("1.Array1D-Sum  \n 2.Arraytype \n 3.Array lenear search() \n 4.Arrray2D \n 5. Matrix addition subtruction \
       \n 6. Matrix multification \n 7.Transpose matrix \n 8.Matrix diagonal sum \n 9.Triangle upper and lowersum \n 10.Return main menu \n");
        printf("Enter your option \n");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            Array1D();
            break;
        case 2:
            Arraytype();
            break;
        case 3:
            arraylenearsearch();
            break;
        case 4:
            Array2D();
            break;
        case 5:
            Matrixadditionandsubtruction();
            break;
        case 6:
            matrixmultification();
            break;
        case 7:
            transposematrix();
            break;
        case 8:
            matrixdiagonalsum();
            break;
        case 9:
            Triangleupperandlowersum();
            break;
              case 10 :
            return main();
            break;
    default:
            printf(" \nWorng choice !! Try again later\n");
        }
    }
    while(1);
}
void string1()
{

//string function
    char s1[]="Nuruzzaman Nuru";
    int length=strlen(s1);
    printf(" Length= %d\n", length);
    char s[]="Nuruzzamann Nuru";
    int i, len=0 ;
    for(i=0; s[i]!='\0'; i++)
    {
        len++;
    }
    printf("Length loop= %d\n",len);
//srtrpy()
    char source[100]=" C programing ";
    char target[100];
    strcpy(target,source);
    printf(" copy Source is %s \n ", source);
    printf("Target is %s \n", target);
// 2 string add =strcat()
    char s11[]="My name is ";
    char s22[]="Nuruzzaman";
    strcat(s11,s22);
    printf(" S1 is and s2 is  add  = %s\n",s11);
    printf(" S2 is %s \n",s22);
// without srtcat(add string)
    char s13[100]=" My name is ";
    char s23[100]="Nuruzzaman";
    int k=0, len1=0, j=0;
    while(s13[k]!='\0')
    {
        k++;
        len1++;
    }
    while(s23[k]!='\0')
    {
        s1[len1+j]=s23[j];
        j++;
    }
    printf(" add loop S1 = %s\n",s13);
    printf(" s2=  %s ",s23);

// string compare
    char s14[ ]="Nuruzzaman ";
    char s24[ ]="Nuruzzaman ";
    int d=strcmp(s14,s24);
    if(d==0)
        printf("String is equal\n ");
    else
        printf(" String  is not equal\n");
    //string reverse =strrev();
    char s15[]="Nuruzzaman ";
    strrev(s15);
    printf(" String reverse %s\n ",s15);
}
void string2()
{
    char s1[30]="Nuruzzaman";
    char s2[30];
    int i, len=0,j=0;
    for(i=0; s1[i]!='\0'; i++)
    {
        len++;
    }
    for(j=0, i=len-1; i>=0; i--, j++)
    {
        s2[j]=s1[i];
    }
    s2[j]='\0';
    printf(" S1 =%s\n",s1);
    printf("S2 swapping  =%s\n",s2);
}
void palindromeandnotpalindrome()
{
    char s1[30]="Nuruzzaman";
    char s2[30];
    int i, len=0,j=0;
    for(i=0; s1[i]!='\0'; i++)
    {
        len++;
    }
    for(j=0, i=len-1; i>=0; i--, j++)
    {
        s2[j]=s1[i];
    }
    s2[j]='\0';
    printf(" S1 =%s\n",s1);
    printf("S2 =%s\n",s2);
    int d=strcmp(s1, s2);
    if (d==0)
        printf("string is palindrome");
    else
        printf(" String is not palindrome");
}
void uppercaselower()
{
    char  s1[1000]=" My name is Nuruzzaman Nuru \
    I studying at green university of Bangladesh  in CSE. I come from Dinajpur \
    I live at present  Dhaka ";
    char s2[100]="Nuruzzamamn Nuru ";
    strupr(s1);
    strlwr(s2);
    printf(" s1 upper string  %s \n",s1);
    printf(" s2 lower string  %s ",s2);
}
void  swappingstrcpy()
{
    // swapping strcpy= copy
    char s1[100]="Bangladersh";
    char s2[100]="India";
    char temp[100];
    printf(" *Before Swapping** \n");
    printf("S1 is %s \n ",s1);
    printf("S2 is %s ",s2);
    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);
    printf(" \n\n*After Swapping** \n");
    printf("S1 is %s \n ",s1);
    printf("S2 is %s ",s2);
}
void countofstring()
{
    char s12[100], ch;
    printf("Enter a string ");
    fflush(stdin);
    gets(s12);
    int i, vowels, consonants, words, Digits, others;
    i=vowels=consonants=words=Digits=others=0;
    while((ch=s12[i])!='\0')
    {
        if(ch=='a' || ch=='e'  || ch == 'i'  || ch=='o'  || ch=='u' ||ch=='A' || ch=='E' || ch == 'I'  || ch=='O' || ch=='U' )
            vowels++;
        else if((ch>='a'&& ch<='z') || (ch>='A'&& ch<='Z'))
            consonants++;
        else if(ch>='0'&& ch<='9')
            Digits++;
        else if( ch==' ')
            words++;
        else
            others++;
        i++;
    }
    words++;
    printf(" i=%d\n Number of  vowels =%d \n  consonants =%d \n words =%d\n digits =%d \n others =%d\n ",i, vowels, consonants, words, Digits, others );

    //count string of asc values
    char S[100];
    int m, capital, small, digit, other, word;
    m=capital=small=digit=other=word=0;
    printf("Enter a string ");
    gets(S);
    while(S[m]!='\0')
    {
        if(S[m]>=65 && S[m]<=90)
            capital++;
        else if(S[m]>=97 && S[m] <=122)
            small++;
        else if(S[m]>=48 && S[m]<=57)
            digit++;
        else if (S[m]==' ')
            word++;
        else
            other++;
        m++;
    }
    word++;
    printf(" Capital letter numbers %d \n",capital );
    printf(" Small letter numbers %d \n",small );
    printf(" Digits  numbers %d \n",digit );
    printf(" other = %d \n", other);
    printf("word =%d ", word);
    //End string
}
void String(){
do{
     int op;
        printf("\n\a\a\a ** String  Menu** \n");
        printf(" 1.string1  \n 2.Swapping loop \n 3. palindrome \n 4.upper case lower \n 5. swappingstrcpy\
     \n  6.countofstring \n 7.Return main menu \n");
        printf("\nEnter your option \n");
        scanf("%d",&op);
        switch(op){
    case 1 :
string1();
        break;
    case 2:
        string2();
        break;
    case 3:
         palindromeandnotpalindrome();
         break;
    case 4:
        uppercaselower();
        break;
    case 5:
         swappingstrcpy();
         break;
    case 6:
        countofstring();
        break;
        case 7:
            return main();
            break;
                default:
            printf(" \nWorng choice !! Try again later\n");
        }
}while(1);

}
 void structure1(){
    struct person{
      char name[100];
       int age;
       float salary;
     };
      struct person person1, person2;
      person1.age=25;
      person1.salary=12500;
     strcpy(person1.name,"nuruzzaman");
      person2.age=30;
      person2.salary=17000;
      strcpy(person2.name,"nuru");

      printf("\nPerson1 Details\n");
      printf("Name  is %s\n",person1.name);
      printf("Age is %d\n",person1.age);
      printf("Salary is %.2f\n",person1.salary);


      printf("\n\nPerson2 Deitails\n ");
      printf("Name  is %s\n",person2.name);
      printf("Age is %d\n", person2.age);
      printf("Salary is %.2f\n", person2.salary);
      }
    void inputstruct(){
    struct person
      {
          char name[1000];
          int age;
          float salary;
      };

struct person person1, person2;        //input
    /* struct person person1={ "nuruzzaman", 27, 34555.34}; // initalaization of array
     struct person person2={ "Nuru nur "};
         struct person person3;
     person2.age=28;
     person2.salary=745623.5;*/       //2 initalaization

     //person3=person2;        // copy
//input
     printf("Enter your name1 ");
     fflush(stdin);
     gets(person1.name);
      printf(" Enter age1 ");
      scanf("%d",&person1.age);
      printf(" Enter salary1 ");
      scanf("%f",&person1.salary);

      printf("Enter your name ");
      fflush(stdin);
     gets(person2.name);
      printf("Enter  age ");
      scanf("%d",&person2.age);
      printf("Enter salary ");
      scanf("%f",&person2.salary);
      printf("\nInformation person 1\n");
      printf("Name is %s\n",person1.name);
      printf("Age is %d\n",person1.age);
      printf("salary is %.2f\n",person1.salary);


      printf("\nInformation person 2\n");
      printf(" Name is %s\n",person2.name);
      printf("Age is %d\n",person2.age);
      printf("salary is %.2f\n",person2.salary);

    /*printf(" Copy2 Information person 3 \n");
    printf("Name is %s\n",person3.name);
    printf("Age is %d \n",person3.age);
    printf("salary is %.2f\n",person3.salary);*/
//  structure comparision
    struct Person  {
     int Age;
      float Salary;
     };
    struct Person person11={40, 550300};
    struct Person person22={30, 450300};
    if(person11.Age==person22.Age && person11.Salary==person22.Salary)
        printf(" \nperson1 equal person 2 \n");
    else
        printf(" \nperson1 not equal person2\n ");
        }
void  structureforloop(){
     struct person {
        char name[100];
    int age ;
    float salary;
    };
    struct person person1[100];
    int i,n;
    printf(" How many Numbers ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
    printf("\n Enter information for person %d\n",i+1);
    printf("Enter Name ");
    fflush(stdin);
    gets(person1[i].name);
    printf("Enter age :\n");
    scanf("%d",&person1[i].age);
    printf("Enter salary : \n");
     scanf("%f",&person1[i].salary);
    }
    for(i=0; i<n; i++){
        printf("\nInformation person %d\n",i+1);
        printf("Name is =%s\n ",person1[i].name);
    printf("Age is =%d\n", person1[i].age);
    printf("salary is =%.2f\n",person1[i].salary);
    }
        }
   void Structure(){
do{
     int op;
        printf("\n\a\a \n\n** Structure  Menu** \n");
        printf("\a\a1.structure1 \n 2.Input structure  \n 3. structure for loop \n 4.Return main Menu \n");
        printf("Enter your option \n");
        scanf("%d",&op);
        switch(op){
    case 1 :
        structure1();
        break;
    case 2 :
        inputstruct();
        break;
        case 3:
            structureforloop();
          case 4 :
            return main();
            break;
    default:
            printf(" \nWorng choice !! Try again later\n");
        }
}while(1);

}

void    Pointer(){

// starting pointer
    int x=120;
    int y=130;
    int *p;
    p=&x;
     printf(" X value %d\n",x);   // value number
    printf(" x Adress %u\n",&x); // all time positive %u
    printf(" P Adress for x  %d\n",p); // x adress jake point krbe
    printf(" P content(x values)  %d\n",*p); // x values print jake point krbe //
    printf(" P adress of p  %d\n",&p); // &= adress

// ading two numbers using poitner
// same way sub mul , div, rem
    int x1 =30;
    int y1=20;
    int  *ptr1,*ptr2,sum;
    ptr1=&x1;
    ptr2=&y1;
    sum=*ptr1+ *ptr2;
            printf(" Sum is %d\n",sum);
            // swapping two numbers using
            int x2=30, y2=20;
            int *ptr11, *ptr22, temp;
            ptr11=&x2;
            ptr22=&y2;
            temp=*ptr11;
            *ptr11=*ptr22;
            *ptr22=temp;
printf("X swapping %d\n",x2);
printf("Y swapping %d\n",y2);
// swapping with function
// access array using pointer
int a[5]={10,20, 30, 40, 50};
int *ptr13, i;
ptr13=&a[0];
printf("Array list ");
for(i=0; i<5; i++){
    printf(" %d ",*ptr13);
    ptr13++;
}
printf("\n");
//end pointer
}
void Uniontypedef(){
    // union structure  =same memory location
     union test{
     int x , y;
     };
     union test t1;
     t1.x=10;
     printf("T1,x value %d\n",t1.x);
     printf("T1,y  value %d\n",t1.y);
     t1.x=20;
     printf("T1,x value %d\n",t1.x);
     printf("T1,y  value %d\n",t1.y);
     union test1
     {
         int x2, y2;
     };
     union test2
     {
         char ch2;
         float f2;
     };
     union test3
     {
         char ch[30]; //char problem but Why?
         double d;
     };
     struct test4
     {
         int in;
         float f2;
       double d1;
     };
     union test1 t21;
     union test2 t2;
     union test3 t3;
     struct test4 t4;
     printf(" size 1of %d\n",sizeof(t21));
     printf(" size2 of %d\n",sizeof(t2));
     printf(" size 3 of %d\n",sizeof(t3));
     printf(" size 4 of %d\n",sizeof(t4));
    // enum / enumeration
     enum days_of_week
     {
         sat, sun, mon, tue, wed, thu, fri
     };
     enum days_of_week day, day1, day2;
     day=mon;
     day1=tue;
     day2=fri;
     int  diff=day2- day1;
     printf(" Day %d \n",day+1); // index number print  0 so 1 plus then week defined day
     printf(" Day different  %d \n",diff);
    // typedef == typedeffenation  data type changing name your wish
    typedef char letter;
    letter ch;
    ch='N';
    printf("ch =%c\n",ch);
    struct book {
    char name[100];
    int age;
    };
    typedef struct book book1;  // book book1 change
    book1 b ={"Nuru" , 23};
    printf(" type Name is %s \n",b.name);
    printf(" type Age  is %d \n",b.age);
}
void File(){

//starting file
   FILE *file;
   char name[30]="nuruzzaman ";
   int len=strlen(name);
   int i;

file=fopen(" test.txt", "a");
if(file==NULL)
    printf(" File does n't Exist ");
else
    printf("file is open ");
    for(i=0; i<len; i++){
        fputc(name[i],file);
    }
    printf("\nFile written successfully \n");
fclose(file);

// input file
FILE  *file1;
char name1[200];
file1=fopen("test.nfile ", " a"); // w=made file
//file=fopen("test.nfile ", " a");  // a = apparnt(add) overrite file =befoe writeing exit // r=read
if(file1==NULL)
    printf("File doesn't exist ");
else
{
    printf("\nFile is open\n");
    printf("Enter your full name\n ");
    fflush(stdin);
    gets(name);
    fputs(name1,file1);
    fputs("\n",file1);
    printf("File is written successfully");
    fclose(file1);
}
// fgetc( ) with file read for all ducument
FILE *file2;
char ch6;
file2=fopen("text.n1file","r");
if(file2==NULL)
    printf("File doesn't exist ");
else
{
    printf("\nFile is open\n ");
   while(!feof(file2) ){
        ch6=fgetc(file); // fgetc= read
   printf("%c",ch6);
   }
    fclose(file2);
}
// fprintf(filepointer, format specifers, variables) with file
// fprint (filepointer , format specifers , variables with file

FILE *file3 ;
char nameA[200];
int age;
file3=fopen("test.mohona", "a");
if(file3==NULL)
    printf("File doesn't exist ");
else
{
    printf("\nFile is open\n ");
    printf("Enter your sister name ");
    gets(nameA);
    printf("Enter your age ");
    scanf("%d",&age);
    fprintf(file, "My sister name is = %s  age is =%d \n",nameA,age);
    printf("File is written succeesfully");
    fclose( file3);
}
// a file using fscanf()
FILE *file4;
char fname[100];
char lname[200];
double age1;
file4=fopen("text.scan", "r");
if(file4==NULL)
    printf("File is does n't exist ");
else
{
    printf("\nFile is open \n");
     fscanf(file,"%s %s %lf", &fname,&lname,&age1);
     printf(" %s %s %.2lf\n ",fname,lname,age1);
    fclose(file);
}
// student details with file
FILE *file5;
char name7[100];
int age5, phoneN , n, j;
file5=fopen("student.txt", "a");
if(file5==NULL)
    printf("File doesn't exist ");
else
{
    printf("file is open \n");
    printf("Enter numbers of students ");
    scanf("%d",&n);
    for(j=1; j<=n; j++){
    printf("Enter your name ");
    fflush(stdin);
    gets(name7);
    printf("Enter your age ");
    scanf("%d",&age1);
    printf("Enter your phone numbers ");
    scanf("%d",&phoneN);
    fprintf(file,"\n%s \t\t %d\t%d\n",name,age,phoneN);
    }
    fclose(file5);
}
//end file
}
void Preprocessor(){
 // last topic in c #define preprocessor
 printf(" Name=%s\n",name5);
 printf(" Name =%s\n",name6);
 printf(" pi=%f\n",pi);
 GUB                    // print with define \]
 printf("\n");
// end c programing
}
void Exit()
{
      system("cls");
    getchar();
    printf("\n\t\tAre You Sure Want to Exit? Press y/Y=yes and No=Any word  : ");
    char YesOrNO;

    scanf("%c",&YesOrNO);
    if(YesOrNO == 'Y' || YesOrNO == 'y')
    {
        system("cls");
        char ThankYou[200] = "=====Thanks For Using this project Made by Nuruzzaman  =====\n";
        char SeeYouSoon[100] = "=====See You Soon=====\n";
        int i=0;
        printf("\n\n\t\t\t\t");
        for(i=0; i<strlen(ThankYou); i++)
        {
            printf("%c",ThankYou[i]);
            Sleep(50);
        }
        printf("\n \t\t\t\t\t");
        for(i=0; i<strlen(SeeYouSoon); i++)
        {
            printf("%c",SeeYouSoon[i]);
            Sleep(50);
        }
 //isRunning =  false;
    }
}
void Home(){
 printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t############          All c code included                      ############");
    printf("\n\t\t\t############             made by Nuruzzaman                    ############");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t----------***--------------------*****---------------------------***------\n");

        printf("\a\a\a\n1.Variable and data type and asc value and Operator and Math Function \n 2.calculate all\
                \n 3.Conveter \n 4.if else \n 5.Switch case \n 6.Loop \n 7.Series \n 8.pattern \n 9.Array \  \n 10.String \
   \n 11.Structure \n 12.Pointer \n 13.Union, Enum,typedef \n 14.File \n 15.Preprocessor.\n 16.Exit\n \n");
        printf("\nEnter your choice\n \a");
}
int main()
{
   // main switch case
  system("color 2");
system("cls");
    do
    {
        Home();
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
        case 1 :
            VariableMain();
            break;
        case 2 :
            CalculateAll();
            break;
        case 3:
            Conveter();
            break;
        case 4:
            IFelse();
            break;
        case 5:
            SwitchCase();
            break;
        case 6:
            Loop();
            break;
        case 7:
            Series();
            break;
        case 8:
            pattern();
            break;
        case 9:
            Array();
            break;
        case 10 :
            String();
            break;
        case 11:
            Structure();
            break;
        case 12 :
            Pointer();
            break;
        case 13:
            Uniontypedef();
            break;
        case 14:
            File();
            break;
        case 15 :
            Preprocessor();
            break;
        case 16 :
            Exit();
            break;

        default:
            printf(" \nWorng choice !! Try again later\n");
        }

    }
    while(1);

}
