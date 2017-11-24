     #include<stdio.h>
     #include<conio.h>
     #include<windows.h>
     void gotoxy(int x, int y)
{
	    COORD xy;
        xy.X = x;
		 xy.Y = y; // X and Y coordinates
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), xy);
}

     int getmonth(int,int);
     int main()
	 {
                   int yr, x, y, z, month;
                   system("COLOR B9");
                   printf("Enter an year to show the calendar :" );
                   scanf("%d",&yr);
                   x = ((yr-1)%400) / 100;
                   y = (((yr-1)%400) % 100) / 4;
                   z = (((yr-1)%400) % 100) - (((yr-1)%400) % 100) / 4;
				   month = (x*5+y*2+z+1) % 7;
                   gotoxy(30,3);
                   printf("JANUARY\n\n");
                   month=getmonth(31,month);
                   printf("\n\n\n Press any key to display next month . . .");
                   getch();
				   system("cls");
                   gotoxy(30,3);
                   printf("FEBRUARY\n\n");
                   if((yr)%4==0)
                   month=getmonth(29,month);
                   else
                   month=getmonth(28,month);
                   printf("\n\n\n Press any key to display next month . . .");
                   getch();
                   system("cls");
                   gotoxy(30,3);
                   printf("MARCH\n\n");
                   month=getmonth(31,month);
                   printf("\n\n\n Press any key to display next month . . .");
                   getch();
                   system("cls");
                   gotoxy(30,3);
                   printf("APRIL\n\n");
                   month=getmonth(30,month);
                   printf("\n\n\n Press any key to display next month . . .");
                   getch();
                   system("cls");
                   gotoxy(30,3);
                   printf("MAY\n\n");
                   month=getmonth(31,month);
                   printf("\n\n\n Press any key to display next month . . .");
                   getch();
                   system("cls");
                   gotoxy(30,3);
                   printf("JUNE\n\n");
                   month=getmonth(30,month);
                   printf("\n\n\n Press any key to display next month . . .");
                   getch();
                   system("cls");
                   gotoxy(30,3);
                   printf("JULY\n\n");
                   month=getmonth(31,month);
                   printf("\n\n\n Press any key to display next month . . .");
                   getch();
                   system("cls");
                   gotoxy(30,3);
                   printf("AUGUST\n\n");
                   month=getmonth(31,month);
                   printf("\n\n\n Press any key to display next month . . .");
                   getch();
                   system("cls");
                   gotoxy(30,3);
                   printf("SEPTEMBER\n\n");
                   month=getmonth(30,month);
                   printf("\n\n\n Press any key to display next month . . .");
                   getch();
                   system("cls");
                   gotoxy(30,3);
                   printf("OCTOBER\n\n");
                   month=getmonth(31,month);
                   printf("\n\n\n Press any key to display next month . . .");
                   getch();
                   system("cls");
                   gotoxy(30,3);
                   printf("NOVEMBER\n\n");
                   month=getmonth(30,month);
                   printf("\n\n\n Press any key to display next month . . .");
                   getch();
                   system("cls");
                   gotoxy(30,3);
                   printf("DECEMBER\n\n");
                   month=getmonth(31,month);
      getch();
      }
      int getmonth(int p,int q)
      {
                    int a,b,c;
                    printf("\n\tSun\tMon\tTue\tWed\tThu\tFri\tSat\n");
                    for(a=0;a<=q;a++)
                    if(a>=q)
                    {
                    for(b=1;b<=p;b++)
                    {
                     if((a % 7) == 0)
                     printf("\n");
                     printf("\t%d",b);
                     a++;
                     }
                     }
                     else
                     printf("\t");
                     c=(p+q)%7;
     return(c);
     }



