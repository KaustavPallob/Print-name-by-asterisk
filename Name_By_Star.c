#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
#include<windows.h>


COORD C;

int l,x=0,y=10;


d_fun()
{
    int r,c;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
            if(c==1||((r==0||r==6)&&(c>1&&c<5))||(c==5&&r!=0&&r!=6))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {
                C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+9;
}

e_fun()
{
    int r,c;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
            if(c==1||((r==0||r==6)&&(c>1&&c<6))||(r==3&&c>1&&c<5))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {
                C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+9;
}

f_fun()
{
    int r,c;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
            if(c==1||(r==0&&c>1&&c<6)||(r==3&&c>1&&c<5))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+9;
}

g_fun()
{
    int r,c;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
            if((c==1&&r!=0&&r!=6)||((r==0||r==6)&&c>1&&c<5)||(r==3&&c>2&&c<6)||(c==5&&r!=0&&r!=2&&r!=6))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+9;
}

h_fun()
{
    int r,c;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
            if((c==1||c==5)||(r==3&&c>1&&c<6))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+9;
}

i_fun()
{
    int r,c;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
            if(c==3||(r==0&&c>0&&c<6)||(r==6&&c>0&&c<6))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+9;
}

j_fun()
{
    int r,c;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
            if((c==4&&r!=6)||(r==0&&c>2&&c<6)||(r==6&&c==3)||(r==5&&c==2))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+9;
}

k_fun()
{
    int r,c,i,j;
    j=5;
    i=0;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
            if(c==1||((r==c+1)&&c!=0))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else if(r==i&&c==j)
            {
                C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
                i++;
                j--;
            }
            else
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
        printf("\n");
    }
    x=x+9;
}

l_fun()
{
    int r,c;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
            if(c==1||(r==6&&c!=0&&c<6))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+9;
}

m_fun()
{
    int r,c;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
            if(c==1||c==5||(r==2&&(c==2||c==4))||(r==3&&c==3))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+9;
}

n_fun()
{
    int r,c;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
            if(c==1||c==5||(r==c&&c!=0&&c!=6))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+9;
}

o_fun()
{
    int r,c;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
            if(((c==1||c==5)&&r!=0&&r!=6)||((r==0||r==6)&&c>1&&c<5))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+9;
}

p_fun()
{
    int r,c;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
            if(c==1||((r==0||r==3)&&c>0&&c<5)||(c==5&&(r==1||r==2)))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+9;
}

q_fun()
{
	int r,c;
	for(r=0;r<7;r++)
	{
		for(c=0;c<7;c++)
		{
	if((c==1&&r!=0&&r!=6)||(r==0&&c>1&&c<5)||(c==5&&r!=0&&r!=5)||(r==6&&c>1&&c<4)||(c==r-1&&r>3))
			{   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
			else
			{   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
		}
      printf("\n");
	}
	x=x+9;
}

r_fun()
{
    int r,c;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
    if(c==1||((r==0||r==3)&&c>1&&c<5)||(c==5&&r!=0&&r<3)||(c==r-1&&r>2))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+9;
}

s_fun()
{
    int r,c;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
    if(((r==0||r==3||r==6)&&c>1&&c<5)||(c==1&&(r==1||r==2||r==6))||(c==5&&(r==0||r==4||r==5)))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+9;
}

t_fun()
{
    int r,c;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
    if(c==3||(r==0&&c>0&&c<6))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+9;
}


u_fun()
{
    int r,c;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
    if(((c==1||c==5)&&r!=6)||(r==6&&c>1&&c<5))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+9;
}

v_fun()
{
    int r,c;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
    if(((c==1||c==5)&&r<5)||(r==6&&c==3)||(r==5&&(c==2||c==4)))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+9;
}

w_fun()
{
    int r,c;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
    if(((c==1||c==5)&&r<6)||((r==5||r==4)&&c==3)||(r==6&&(c==2||c==4)))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+9;
}

x_fun()
{
    int r,c;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
    if(((c==1||c==5)&&(r>4||r<2))||r==c&&c>0&&c<6||(c==2&&r==4)||(c==4&&r==2))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+9;
}


y_fun()
{
    int i,j;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(i<=4)
            {
                if(j==i || j==10-i)
                {   C.X = j+x;
                    C.Y = i+y;
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                    printf("*");
                }
                else
                {   C.X = j+x;
                    C.Y = i+y;
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                    printf(" ");
                }
            }
            else if(i>=5 && j==5)
            {   C.X = j+x;
                C.Y = i+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = j+x;
                C.Y = i+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+12;
}

z_fun()
{
    int i,j;
    for(i=1;i<9;i++)
    {
        for(j=1;j<9;j++)
        {
            if(i==1 || i==8)
            {   C.X = j+x;
                C.Y = i+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else if(i<=8 && j==(9-i))
            {   C.X = j+x;
                C.Y = i+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = j+x;
                C.Y = i+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+12;
}



c_fun()
{
    int r,c;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
            if((c==1&&(r!=0&&r!=6))||((r==0||r==6)&&(c>1&&c<5))||(c==5&&(r==1||r==5)))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+9;
}



b_fun()
{
    int r,c;
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
            if(c==1||((r==0||r==3||r==6)&&(c<5&&c>1))||(c==5&&(r!=0&&r!=3&&r!=6)))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
      printf("\n");
    }
    x=x+9;
}

a_fun()
{
    int r,c;

    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
            if(((c==1||c==5)&&r!=0)||((r==0||r==3)&&(c>1&&c<5)))
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf("*");
            }
            else
            {   C.X = c+x;
                C.Y = r+y;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
                printf(" ");
            }
        }
        printf("\n");
    }
    x=x+9;
}

print_name(char *c)
{
    char ch=c;
 // printf("\nReceiving character: %c\n",ch);
    if (isalpha(ch) )
    {
        if (ch>=97 && ch<=122)
        {
            ch = ch-32;
            //printf ("\n Uppercase of Entered character is %c\n", ch);
        }
        else
        {
            //printf("\n You Already Entered Uppercase Character");
        }
    }
    else if(ch == ' ')
        {
           /* C.X = x+4;
            C.Y = y;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
            printf("__");*/

            //printf("\n  S     u      r       n       a       m       e   --->\n\n\n");
        }
        else
        {
            printf("\nThe name contain Extra Symbol\n\n\n");
        }
    do{
        switch(ch)
        {
            case ' ':printf("    ");
            break;

            case 'A': printf("\n\n");a_fun();
            break;

            case 'B': printf("\n\n");b_fun();
            break;

            case 'C': printf("\n\n");c_fun();
            break;

            case 'D': printf("\n\n");d_fun();
            break;

            case 'E': printf("\n\n");e_fun();
            break;

            case 'F': printf("\n\n");f_fun();
            break;

            case 'G': printf("\n\n");g_fun();
            break;

            case 'H': printf("\n\n");h_fun();
            break;

            case 'I': printf("\n\n");i_fun();
            break;

            case 'J': printf("\n\n");j_fun();
            break;

            case 'K': printf("\n\n");k_fun();
            break;

            case 'L': printf("\n\n");l_fun();
            break;

            case 'M': printf("\n\n");m_fun();
            break;

            case 'N': printf("\n\n");n_fun();
            break;

            case 'O': printf("\n\n");o_fun();
            break;

            case 'P': printf("\n\n");p_fun();
            break;

            case 'Q': printf("\n\n");q_fun();
            break;

            case 'R': printf("\n\n");r_fun();
            break;

            case 'S': printf("\n\n");s_fun();
            break;

            case 'T': printf("\n\n");t_fun();
            break;

            case 'U': printf("\n\n");u_fun();
            break;

            case 'V': printf("\n\n");v_fun();
            break;

            case 'W': printf("\n\n");w_fun();
            break;

            case 'X': printf("\n\n");x_fun();
            break;

            case 'Y': printf("\n\n");y_fun();
            break;

            case 'Z': printf("\n\n");z_fun();
            break;

            default: printf("Horrible Name Can't print..Sorry!");
                        exit(0);
        }
    }while(0);
}


int main()
{
    int i,c=1,j,k=0,d=0,m=0;
    char name[100],ch;

    printf("\nEnter Your Name Please: \n");
    gets(name);

    l=strlen(name);

    printf("Your name contain: %d characters \n",l);
    printf("\n\t\t\t\t\t.....................................");
    printf("\n\t\t\t\t\t......N     A       M       E........");
    printf("\n\t\t\t\t\t......_     _       _       _........\n");

    for(i=0;i<l;i++)
    {
        print_name(name[i]);
    }

    printf("\n\n\n\t\t\t\t Software is developed by K@ust@v_P20......Thank u For Using");

    printf("\n\n Enter X For close : ");
    scanf("%c",ch);
    if(ch=='x')
    {
        exit(0);
    }

return 0;
}
