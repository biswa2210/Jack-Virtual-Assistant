#include<iostream>
#include<string.h>
#include<windows.h>
#include<ctype.h>
using namespace std;
int main()
{
    system("title JACK");
	cout<<"\n\n\n\n\n"<<"               please turn off capslock  ";
	Sleep(1000);
	cout<<"\n\n            "<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177);
    Sleep(2000);
	cout<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177);
	    Sleep(1000);
	cout<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177);
	    Sleep(1000);
	cout<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177)<<char(177);
	 Sleep(1000);
	system("cls");
    system("mode 1000");
	while(1)
	{
		string a;
        getline(cin,a);
    char sub2[10000]="hellow";
        int pos,i2,f2=0;
        for (int i2=1;(pos=a.find(sub2)) != -1 ;i2++)
        {
                a=a.substr(++pos);
                f2++;
        }
		if(f2==1 ||  f2>1)
		{
		cout<<"\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
		system("cls");
		system("color a");
		cout<<"\n\nhello sir"<<"\n\nI AM JACK . I  AM  YOUR  VIRTUAL  ASISTANT."<<"\n\nhow can I help you?\n\n";
        Sleep(5000);
		}
        char sub3[10000]="jack";
        int pos2,i3,f3=0;
        for (int i3=1;(pos2=a.find(sub3)) != -1 ;i3++)
        {
                a=a.substr(++pos2);
                f3++;
        }
	  if(f3==1 || f3>1)
        {
        cout<<"\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
		system("cls");
            cout<<"hello sir ....\n\n\n";
            cout<<"what is your name sir???\n\n";
            string s;
            getline(cin,s);
            char w[100]="Biswa";
            int pos8,f8=0;
          for(int i10=1;(pos8=s.find(w))!=-1;i10++)
          {
              s=s.substr(++pos8);
              f8++;
          }

            if(f8==1 || f8>1)
            {
                system("cls");
                system("color d");
                cout<<"\n********HELLO  BOSS********\n\n";
                cout<<"\n many many thanks BOSS for creating me \n\n love you BOSS\n\n";
                cout<<"BOSS, please give me a order.....\n\n\n";
            }
                        char w1[100]="BISWA";
            int pos9,f9=0;
          for(int i9=1;(pos9=s.find(w1))!=-1;i9++)
          {
              s=s.substr(++pos9);
              f9++;
          }

            if(f9==1 || f9>1)
            {
                system("cls");
                system("color d");
                cout<<"\n********HELLO  BOSS********\n\n";
                cout<<"\n many many thanks BOSS for creating me \n\n love you BOSS\n\n";
                cout<<"BOSS, please give me a order.....\n\n\n";
            }
                                    char w2[100]="biswa";
            int posi,g=0;
          for(int l=1;(posi=s.find(w2))!=-1;l++)
          {
              s=s.substr(++posi);
              g++;
          }

            if(g==1 || g>1)
            {
                system("cls");
                system("color d");
                cout<<"\n********HELLO  BOSS********\n\n";
                cout<<"\n many many thanks BOSS for creating me \n\n love you BOSS\n\n";
                cout<<"BOSS, please give me a order.....\n\n\n";
            }
            if(g==0 && f9==0 && f8==0)
            {
                cout<<"\n\nhello sir.....\n\n";
                cout<<"how can I help you??\n\n\n";
            }
        }
        char sub[10000]="fibonacci";
        int pos3,i4,f=0;
        for (int i4=1;(pos3=a.find(sub)) != -1 ;i4++)
        {
                a=a.substr(++pos3);
                f++;
        }
		 if(f==1 || f>1)
		{
        cout<<"\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
		system("cls");
		    cout<<"\n\n"<<"sure.....\n";
		    int n,i,f=0,s=1,ans;
            cout<<"\n\nenter the number of terms=";
            cin>>n;
            system("cls");
            system("color b");
            cout<<"\nFIBONACCI SERIZE";
            cout<<"\n******************\t";
            cout<<"\ncalculating.";
		    Sleep(1000);
		    cout<<"..";
		    Sleep(1000);
		    cout<<".";
		    Sleep(1000);
		    cout<<".";
		    Sleep(1000);
for(i=0;i<=n;i++)
{
 if(i<=1)
 {
 	ans=i;
 }
 else
 {
 ans=(f+s);
 f=s;
 s=ans;
 Sleep(1000);
}

 cout<<endl<<" "<<ans;
 }
		    cout<<"\n\n\n";
   system("pause");
		system("cls");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
		}
       char sub5[10000]="bye";
        int pos5,i5,f5=0;
        for (int i5=1;(pos5=a.find(sub)) != -1 ;i5++)
        {
                a=a.substr(++pos5);
                f5++;
        }
		 if(f5==1 || f5>1)
		{
		    cout<<"\n\ngood bye....have a nice day sir";
			exit(0);
		}
		       char sub6[10000]=" even ";
        int pos6,i6,f6=0;
        for (int i6=1;(pos6=a.find(sub6)) != -1 ;i6++)
        {
                a=a.substr(++pos6);
                f6++;
        }
		if(f6==1 || f6>1)
        {
            cout<<"\n\nmy pleasure to obey your order sir";
            int q;
            cout<<"\n\nsir,enter your number=";
            cin>>q;
            if(q%2==0)
            {
                cout<<"\n\nit's even number";
            }
            else
                {
                    cout<<"\n\n it's odd number";
                }
                                	char z1[1000];
	cout<<"\n\nARE YOU WANT TO CALCULATE IN RANGE(yes or no)=  ";
	cin>>z1;
	char k1[1000]="yes";
	if(strcmp(k1,z1)==0)
    {
		int a,b,c,n;
	cout<<"ENTER THE RANGE=";
	cin>>n;
    cout<<"\n";
	cout<<"EVEN AND ODD NUMBERS=";
    cout<<"\n#######################################";
	cout<<"\n";
    for(c=1;c<=n;c++)
	{
		if(c%2==0)
        {
            cout<<"THE EVEN NUMBER IS="<<c<<endl;
        }
        else
            {
            cout<<"THE ODD NUMBER IS="<<c<<endl;
        }

	}
    cout<<"\n\n\n";
   system("pause");
		system("cls");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
    }
    else
    {
			    cout<<"\n\n\n";
   system("pause");
		system("cls");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
    }

        }
        		       char sub7[10000]="odd";
        int pos7,i7,f7=0;
        for (int i7=1;(pos7=a.find(sub7)) != -1 ;i7++)
        {
                a=a.substr(++pos7);
                f7++;
        }
		if(f7==1 || f7>1)
        {
            cout<<"\n\nmy pleasure to obey your order sir";
            int q;
            cout<<"\n\nsir,enter your number=";
            cin>>q;
            if(q%2==0)
            {
                cout<<"\n\nit's even number";
            }
            else
                {
                    cout<<"\n\n it's odd number";
                }
                	char z1[1000];
	cout<<"\n\nARE YOU WANT TO CALCULATE IN RANGE(yes or no)=  ";
	cin>>z1;
	char k1[1000]="yes";
	if(strcmp(k1,z1)==0)
    {
		int a,b,c,n;
	cout<<"ENTER THE RANGE=";
	cin>>n;
    cout<<"\n";
	cout<<"EVEN AND ODD NUMBERS=";
    cout<<"\n#######################################";
	cout<<"\n";
    for(c=1;c<=n;c++)
	{
		if(c%2==0)
        {
            cout<<"THE EVEN NUMBER IS="<<c<<endl;
        }
        else
            {
            cout<<"THE ODD NUMBER IS="<<c<<endl;
        }

	}
    cout<<"\n\n\n";
   system("pause");
		system("cls");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
    }
    else
    {
			    cout<<"\n\n\n";
   system("pause");
		system("cls");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
    }

        }
                		       char word[10000]="thanks";
        int position,constant,flag=0;
        for (int constant=1;(position=a.find(word)) != -1 ;constant++)
        {
                a=a.substr(++position);
                flag++;
        }
        if(flag==1 || flag>1)
        {
            system("cls");
            system("color b");
            cout<<"\t   ";
            cout<<"w";
            Sleep(1000);
            cout<<"e";
            cout<<"l";
            Sleep(1000);
            cout<<"l";
                       Sleep(1000);
            cout<<"c";
                       Sleep(1000);
            cout<<"o";
                               Sleep(1000);
            cout<<"m";
            cout<<"e\n\n\n";
              Sleep(1000);

        int i,j;
        	for(i=15/2;i<=15;i+=2)
	{
		for(j=1;j<(15-i);j+=2)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"#";
		}
		for(j=1;j<(15-i);j++)
		{
			cout<<" ";
		}
		for(j=1; j<=i;j++)
		{
			cout<<"#";
		}
		cout<<"\n";
	}
	for(i=15;i>=1;i--)
    {

    for(j=i;j<15;j++)
    {
        cout<<" ";
    }
    for(j=1;j<=(i*2)-1;j++)
    {
        cout<<"#";
    }
    cout<<"\n";
    }

    cout<<"\n\n\n\t MY PLEASURE SIR";
    system("color a");
       cout<<"\n\n\n";
   system("pause");
    system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
        }
        char word1[1000]="autopolymorphic";
        int position1,flag1=0;
        for(int i=1;(position1=a.find(word1))!=-1;i++)
        {
            a=a.substr(++position1);
            flag1++;
        }
        if(flag1==1 || flag1>1)
        {
            system("cls");
	int a;
	cout<<"\nENTER THE no=";
	cin>>a;
		if((a*a)%10==a)
		{
		cout<<endl<<a<<" = is a autopollymorphic number";
		}
	else
	{
	cout<<endl<<a<<" = is not a autopollymorphic number";
	}
	char z[1000];
	cout<<"\n\nARE YOU WANT TO CALCULATE IN RANGE(yes or no)=   ";
	cin>>z;
	char k[1000]="yes";
	if(strcmp(k,z)==0)
    {
		int a,b,c,n;
	cout<<"ENTER THE RANGE=";
	cin>>n;
    cout<<"\n";
	cout<<"AUTOPOLYMORPHIC NUMBERS=";
    cout<<"\n#############################";
	cout<<"\n";
    for(c=1;c<=n;c++)
	{
		if((c*c)%10==c)
		cout<<"THE AUTOPOLYMORPHIC NUMBER IS="<<c<<endl;
	}
    cout<<"\n\n\n";
   system("pause");
		system("cls");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
    }
    else
    {
			    cout<<"\n\n\n";
   system("pause");
		system("cls");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
    }

        }
                char word2[1000]="addition";
        int position2,flag2=0;
        for(int i=0;(position2=a.find(word2))!=-1;i++)
        {
            a=a.substr(++position2);
            flag2++;
        }
        if(flag2==1 || flag2>1)
        {
            int a,b,t,sum=0;
    cout<<"\n\nenter the number of terms to addition: ";
    cin>>a;
    cout<<"\n\n ";
    for(int b=1;b<=a;b++)
    {

    	cin>>t;
    	cout<<"+";
    	sum=t+sum;
	}
	cout<<"\n-----------------";
    cout<<"\naddition result : "<<sum;
            cout<<"\n\n\n";
   system("pause");
    system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
        }
                        char word3[1000]="add";
        int position3,flag3=0;
        for(int g9=1;(position3=a.find(word3))!=-1;g9++)
        {
            a=a.substr(++position3);
            flag3++;
        }
        if(flag3==1 || flag3>1)
        {
            int a,b,t,sum=0;
    cout<<"\n\nenter the number of terms to addition: ";
    cin>>a;
    cout<<"\n\n ";
    for(int b=1;b<=a;b++)
    {

    	cin>>t;
    	cout<<"+";
    	sum=t+sum;
	}
	cout<<"\n-----------------";
    cout<<"\naddition result : "<<sum;
            cout<<"\n\n\n";
   system("pause");
    system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
        }

                        char word4[1000]="add";
        int position4,flag4=0;
        for(int g19=1;(position4=a.find(word4))!=-1;g19++)
        {
            a=a.substr(++position4);
            flag4++;
        }
        if(flag4==1 || flag4>1)
        {
            int a,b,t,sum=0;
    cout<<"\n\nenter the number of terms to addition: ";
    cin>>a;
    cout<<"\n\n ";
    for(int b=1;b<=a;b++)
    {

    	cin>>t;
    	cout<<"+";
    	sum=t+sum;
	}
	cout<<"\n-----------------";
    cout<<"\naddition result : "<<sum;
          cout<<"\n\n\n";
   system("pause");
    system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
        }
    	                char word5[1000]="thank";
        int position5,flag5=0;
        for(int i15=0;(position5=a.find(word5))!=-1;i15++)
        {
            a=a.substr(++position5);
            flag5++;
        }
        if(flag5==1 || flag5>1)
        {
                        system("cls");
            system("color b");
            cout<<"\t   ";
            cout<<"w";
            Sleep(1000);
            cout<<"e";
            cout<<"l";
            Sleep(1000);
            cout<<"l";
                       Sleep(1000);
            cout<<"c";
                       Sleep(1000);
            cout<<"o";
                               Sleep(1000);
            cout<<"m";
            cout<<"e\n\n\n";
              Sleep(1000);

        int i,j;
        	for(i=15/2;i<=15;i+=2)
	{
		for(j=1;j<(15-i);j+=2)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"#";
		}
		for(j=1;j<(15-i);j++)
		{
			cout<<" ";
		}
		for(j=1; j<=i;j++)
		{
			cout<<"#";
		}
		cout<<"\n";
	}
	for(i=15;i>=1;i--)
    {

    for(j=i;j<15;j++)
    {
        cout<<" ";
    }
    for(j=1;j<=(i*2)-1;j++)
    {
        cout<<"#";
    }
    cout<<"\n";
    }

    cout<<"\n\n\n\t MY PLEASURE SIR";
    system("color a");
        cout<<"\n\n\n";
   system("pause");
    system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
        }
                                char word9[1000]="sum";
        int position9,flag9=0;
        for(int g29=1;(position9=a.find(word9))!=-1;g29++)
        {
            a=a.substr(++position9);
            flag9++;
        }
        if(flag9==1 || flag9>1)
        {
                    cout<<"\n\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
            int a,b,t,sum=0;
    cout<<"\n\nenter the number of terms to addition: ";
    cin>>a;
    cout<<"\n\n ";
    for(int b=1;b<=a;b++)
    {

    	cin>>t;
    	cout<<"+";
    	sum=t+sum;
	}
	cout<<"\n-----------------";
    cout<<"\naddition result : "<<sum;
          cout<<"\n\n\n";
   system("pause");
    system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
        }
        char subs[1022]="morning";
        int posit,flag6=0;
                for(int x=1;(posit=a.find(subs))!=-1;x++)
        {
            a=a.substr(++posit);
            flag6++;
        }
        if(flag6==1 || flag6>1)
        {
                                cout<<"\n\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
system("cls");
Sleep(1000);
cout<<"\n\n";
    int D, R;
    int len2;
char name[50]="       VERY VERY GOOD MORNING SIR        ";
    len2 = strlen(name);
system("color a");
    len2 = strlen(name);
    // Print upper part of the heart shape
    for(D=25/2; D<=25; D+=2)
    {
        for(R=1; R<25-D; R+=2)
        {

            cout<<" ";
        }

        for(R=1; R<=D; R++)
        {

            cout<<"*";
        }

        for(R=1; R<=25-D; R++)
        {
            cout<<" ";
        }

        for(R=1; R<=D; R++)
        {

            cout<<"*";
        }

        cout<<"\n";
    }

    // Prints lower triangular part of the pattern
    for(D=25; D>=1; D--)
    {
        for(R=D; R<25; R++)
        {

            cout<<" ";
        }

        // Print the name
        if(D== 25)
        {
            for(R=1; R<=(25* 2-len2)/2; R++)
            {

                cout<<"*";
            }

           cout<<name;

            for(R=1; R<(25*2-len2)/2; R++)
            {

                cout<<"*";
            }
        }
        else
        {
            for(R=1; R<=(D*2)-1; R++)
            {

                cout<<"*";
            }
        }

        cout<<"\n";
    }
      cout<<"\n\n\n";
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";


        }
        char subs1[1022]="evening";
        int posit1,flag7=0;
                for(int x=1;(posit1=a.find(subs1))!=-1;x++)
        {
            a=a.substr(++posit1);
            flag7++;
        }
        if(flag7==1 || flag>1)
        {

                                            cout<<"\n\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
system("cls");
Sleep(1000);
cout<<"\n\n";
    int D, R;
    int len2;
char name[50]="      VERY VERY GOOD EVENING SIR      ";
    len2 = strlen(name);
system("color b");
    len2 = strlen(name);
    // Print upper part of the heart shape
    for(D=25/2; D<=25; D+=2)
    {
        for(R=1; R<25-D; R+=2)
        {

            cout<<" ";
        }

        for(R=1; R<=D; R++)
        {

            cout<<"*";
        }

        for(R=1; R<=25-D; R++)
        {
            cout<<" ";
        }

        for(R=1; R<=D; R++)
        {

            cout<<"*";
        }

        cout<<"\n";
    }

    // Prints lower triangular part of the pattern
    for(D=25; D>=1; D--)
    {
        for(R=D; R<25; R++)
        {

            cout<<" ";
        }

        // Print the name
        if(D== 25)
        {
            for(R=1; R<=(25* 2-len2)/2; R++)
            {

                cout<<"*";
            }

           cout<<name;

            for(R=1; R<(25*2-len2)/2; R++)
            {

                cout<<"*";
            }
        }
        else
        {
            for(R=1; R<=(D*2)-1; R++)
            {

                cout<<"*";
            }
        }

        cout<<"\n";
    }
       cout<<"\n\n\n";
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";

        }
        char subs2[1022]="night";
        int posit2,flag8=0;
                for(int x=1;(posit2=a.find(subs2))!=-1;x++)
        {
            a=a.substr(++posit2);
            flag8++;
        }
        if(flag8==1 || flag>1)
        {

                                            cout<<"\n\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
system("cls");
Sleep(1000);
cout<<"\n\n";
    int D, R;
    int len2;
char name[50]="     GOOD NIGHT  & SWEET DREAMS     ";
    len2 = strlen(name);
system("color 5");
    len2 = strlen(name);
    // Print upper part of the heart shape
    for(D=25/2; D<=25; D+=2)
    {
        for(R=1; R<25-D; R+=2)
        {

            cout<<" ";
        }

        for(R=1; R<=D; R++)
        {

            cout<<"*";
        }

        for(R=1; R<=25-D; R++)
        {
            cout<<" ";
        }

        for(R=1; R<=D; R++)
        {

            cout<<"*";
        }

        cout<<"\n";
    }

    // Prints lower triangular part of the pattern
    for(D=25; D>=1; D--)
    {
        for(R=D; R<25; R++)
        {

            cout<<" ";
        }

        // Print the name
        if(D== 25)
        {
            for(R=1; R<=(25* 2-len2)/2; R++)
            {

                cout<<"*";
            }

           cout<<name;

            for(R=1; R<(25*2-len2)/2; R++)
            {

                cout<<"*";
            }
        }
        else
        {
            for(R=1; R<=(D*2)-1; R++)
            {

                cout<<"*";
            }
        }

        cout<<"\n";
    }
        cout<<"\n\n\n";
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";

        }
        char subs3[1022]="afternoon";
        int posit3,flag10=0;
        for(int x=1;(posit3=a.find(subs3))!=-1;x++)
        {
            a=a.substr(++posit3);
            flag10++;
        }

        if(flag10==1 || flag10>1)
        {

                                            cout<<"\n\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
system("cls");
Sleep(1000);
cout<<"\n\n";
    int D, R;
    int len2;
char name[50]="      GOOD AFTERNOON SIR      ";
    len2 = strlen(name);
system("color a");
    len2 = strlen(name);
    // Print upper part of the heart shape
    for(D=25/2; D<=25; D+=2)
    {
        for(R=1; R<25-D; R+=2)
        {

            cout<<" ";
        }

        for(R=1; R<=D; R++)
        {

            cout<<"*";
        }

        for(R=1; R<=25-D; R++)
        {
            cout<<" ";
        }

        for(R=1; R<=D; R++)
        {

            cout<<"*";
        }

        cout<<"\n";
    }

    // Prints lower triangular part of the pattern
    for(D=25; D>=1; D--)
    {
        for(R=D; R<25; R++)
        {

            cout<<" ";
        }

        // Print the name
        if(D== 25)
        {
            for(R=1; R<=(25* 2-len2)/2; R++)
            {

                cout<<"*";
            }

           cout<<name;

            for(R=1; R<(25*2-len2)/2; R++)
            {

                cout<<"*";
            }
        }
        else
        {
            for(R=1; R<=(D*2)-1; R++)
            {

                cout<<"*";
            }
        }

        cout<<"\n";
    }
    cout<<"\n\n\n";
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";

        }
        char subs4[1022]="home";
        int posit4,flag11=0;
        for(int x=1;(posit4=a.find(subs4))!=-1;x++)
        {
            a=a.substr(++posit4);
            flag11++;
        }
        if(flag11==1 || flag11>1)
        {
            system("cls");
        }
                char subs5[1022]="hi ";
        int posit5,flag12=0;
        for(int x=1;(posit5=a.find(subs5))!=-1;x++)
        {
            a=a.substr(++posit5);
            flag12++;
        }
        if(flag12==1 || flag12>1)
        {
        cout<<"\n\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
            system("cls");
        system("color a");
		cout<<"\n\nhello sir"<<"\n\nI AM JACK . I  AM  YOUR  VIRTUAL  ASISTANT."<<"\n\nhow can I help you?\n\n";
        Sleep(5000);
        }

                char subs6[1022]="yo ";
        int posit6,flag13=0;
        for(int x=1;(posit6=a.find(subs6))!=-1;x++)
        {
            a=a.substr(++posit6);
            flag13++;
        }
        if(flag13==1 || flag13>1)
        {
        cout<<"\n\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
            system("cls");
        system("color a");
		cout<<"\n\nhello sir"<<"\n\nI AM JACK . I  AM  YOUR  VIRTUAL  ASISTANT."<<"\n\nhow can I help you?\n\n";
        Sleep(5000);
        }
                char subs7[1022]="love you";
        int posit7,flag14=0;
        for(int x=1;(posit7=a.find(subs7))!=-1;x++)
        {
            a=a.substr(++posit7);
            flag14++;
        }
        if(flag14==1 || flag14>1)
        {
        cout<<"\n\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
            system("cls");
        system("color d");
Sleep(1000);
cout<<"\n\n";
    int D, R;
    int len2;
char name[50]="     ....#....I  LOVE YOU TOOO....#....      ";
    len2 = strlen(name);
system("color b");
    len2 = strlen(name);
    // Print upper part of the heart shape
    for(D=25/2; D<=25; D+=2)
    {
        for(R=1; R<25-D; R+=2)
        {

            cout<<" ";
        }

        for(R=1; R<=D; R++)
        {

            cout<<"*";
        }

        for(R=1; R<=25-D; R++)
        {
            cout<<" ";
        }

        for(R=1; R<=D; R++)
        {

            cout<<"*";
        }

        cout<<"\n";
    }

    // Prints lower triangular part of the pattern
    for(D=25; D>=1; D--)
    {
        for(R=D; R<25; R++)
        {

            cout<<" ";
        }

        // Print the name
        if(D== 25)
        {
            for(R=1; R<=(25* 2-len2)/2; R++)
            {

                cout<<"*";
            }

           cout<<name;

            for(R=1; R<(25*2-len2)/2; R++)
            {

                cout<<"*";
            }
        }
        else
        {
            for(R=1; R<=(D*2)-1; R++)
            {

                cout<<"*";
            }
        }

        cout<<"\n";
    }
    cout<<"\n\n\n";
system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";

        }

                        char subs8[1022]="google";
        int posit8,flag15=0;
        for(int x=1;(posit8=a.find(subs8))!=-1;x++)
        {
            a=a.substr(++posit8);
            flag15++;
        }
        if(flag15==1 || flag15>1)
        {
            HWND hwnd=GetDesktopWindow();
            ShellExecuteA(hwnd,"open","http://www.google.com",NULL,NULL,NULL);
               system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
        }

                        char subs9[1022]="multiplication table";
        int posit9,flag16=0;
        for(int x=1;(posit9=a.find(subs9))!=-1;x++)
        {
            a=a.substr(++posit9);
            flag16++;
        }
   if(flag16==1 || flag16>1)
        {

        cout<<"\n\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
		system("cls");
int i,n,k;
cout<<"\nEnter the no=";
cin>>n;
for(i=0;i<=100;i++)
{
k=n*i;
cout<<"\n"<<n<<"*"<<i<<"="<<k;
}
        system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
        }
                                char subs10[1022]="calculator";
        int posit10,flag17=0;
        for(int x=1;(posit10=a.find(subs10))!=-1;x++)
        {
            a=a.substr(++posit10);
            flag17++;
        }
   if(flag17==1 || flag17>1)
        {

                    cout<<"\n\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
		 system("cls");
            char a9;
cout<<"             MENU\n********************\n\na) BUSINESS\nb)SCIENTIFIC\n\n\n";
cout<<"type your choice(a or b)::  ";
cin>>a9;
if(a9=='a')
{
    system("cls");
    char op;
    int num1,num2;
    cout<<"\nNOW THIS CALCULATOR USED FOR 2 OPARANDS\n";
    cout << "\n\nEnter operator either + or - or * or /: ";
    cin >> op;
    cout << "\n\nEnter two operands(1st>2nd):  ";
    cin >> num1 ;
    cout<<"\t";
    cin>> num2;
    switch(op)
    {
        case '+':
            cout <<"\n\nResult :  " <<num1+num2;
            break;

        case '-':
            cout << "\n\nResult :  "<<num1-num2;
            break;

        case '*':
            cout << "\n\nResult :  "<<num1*num2;
            break;

        case '/':
            cout << "\n\nResult :  "<< num1/num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "\n\n\nError! operator is not correct";
            break;
		}
    cout<<"\n\n\n";
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
if(a9=='b')
{
    system("cls");
    HINSTANCE result;
    result=ShellExecute(NULL,NULL,"c:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Accessories\\calculator",NULL,NULL,SW_SHOWDEFAULT);

    cout<<"\n\n\n";
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
}
        char subs11[1022]="factorial";
        int posit11,flag18=0;
        for(int x=1;(posit11=a.find(subs11))!=-1;x++)
        {
            a=a.substr(++posit11);
            flag18++;
        }
   if(flag18==1 || flag18>1)
   {
       system("cls");
       cout<<"\n\ncalculating....\n\n\n";
       		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
		    cout<<"\n\n\n";
		    int i,a,l=1;
cout<<"enter the no=";
cin>>a;
if(a!=0)
{
for(i=1;i<=a;i++)
{
l=l*i;
cout<<"*"<<i;
}
cout<<"="<<l;
}
else if(a==0)
{
	cout<<a<<"!=1";
}
else if(a<0)
{
cout<<"this no is not applicable";
}
		    cout<<"\n\n\n";
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
   }


        char subs12[1022]="how are you";
        int posit12,flag19=0;
        for(int x=1;(posit12=a.find(subs12))!=-1;x++)
        {
            a=a.substr(++posit12);
            flag19++;
        }
   if(flag19==1 || flag19>1)
   {
       system("cls");
		    cout<<"\n\n\n\n\n\n";
		     cout<<"..............I AM WORKING PERFECTLY NOW..................";
		     cout<<"\n\n\n";
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
   }

           char subs13[1022]="youtube";
        int posit13,flag29=0;
        for(int x=1;(posit13=a.find(subs13))!=-1;x++)
        {
            a=a.substr(++posit13);
            flag29++;
        }
   if(flag29==1 || flag29>1)
   {
       system("cls");
		    cout<<"\n\n\n\n\n\n";
		     cout<<"open..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
		     HWND hwnd=GetDesktopWindow();
		     ShellExecuteA(hwnd,"OPEN","http://www.youtube.com",NULL,NULL,NULL);
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
   }

              char subs15[1022]="films";
        int posit15,flag59=0;
        for(int x=1;(posit15=a.find(subs15))!=-1;x++)
        {
            a=a.substr(++posit15);
            flag59++;
        }
   if(flag59==1 || flag59>1)
   {
       system("cls");
       string s1;
       cout<<"online or offline :  "<<endl<<"##################"<<endl<<endl;
       cout<<"type your choice :  ";
       getline(cin,s1);
       char u[1000]="online";
       int posit18,mark=0;
       for(int r=1;(posit18=s1.find(u))!=-1;r++)
       {
           s1=s1.substr(++posit18);
           mark++;
       }
       if(mark==1 || mark >1)
       {
		    cout<<"\n\n\n\n\n\n";
		     cout<<"open..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
		     HWND hwnd=GetDesktopWindow();
		     ShellExecuteA(hwnd,"OPEN","https://www.1377x.to/movie-library/2/",NULL,NULL,NULL);
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
       else
       {
           cout<<"\n\n";
           HINSTANCE result;
           result = ShellExecute(NULL,NULL,"e:\\FILMS",NULL,NULL,SW_SHOWDEFAULT);
        system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
   }

                 char subs16[1022]="movies";
        int posit16,flag69=0;
        for(int x=1;(posit16=a.find(subs16))!=-1;x++)
        {
            a=a.substr(++posit16);
            flag69++;
        }
   if(flag69==1 || flag69>1)
   {
        system("cls");
       string s1;
       cout<<"online or offline :  "<<endl<<"##################"<<endl<<endl;
       cout<<"type your choice :  ";
       getline(cin,s1);
       char u[1000]="online";
       int posit18,mark=0;
       for(int r=1;(posit18=s1.find(u))!=-1;r++)
       {
           s1=s1.substr(++posit18);
           mark++;
       }
       if(mark==1 || mark >1)
       {
		    cout<<"\n\n\n\n\n\n";
		     cout<<"open..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
		     HWND hwnd=GetDesktopWindow();
		     ShellExecuteA(hwnd,"OPEN","https://www.1377x.to/movie-library/2/",NULL,NULL,NULL);
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
       else
       {
           cout<<"\n\n";
           HINSTANCE result;
           result = ShellExecute(NULL,NULL,"e:\\FILMS",NULL,NULL,SW_SHOWDEFAULT);
        system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
   }
                 char subs14[1022]="movie";
        int posit14,flag49=0;
        for(int x=1;(posit14=a.find(subs14))!=-1;x++)
        {
            a=a.substr(++posit14);
            flag49++;
        }
   if(flag49==1 || flag49>1)
   {
       system("cls");
       string s1;
       cout<<"online or offline :  "<<endl<<"##################"<<endl<<endl;
       cout<<"type your choice :  ";
       getline(cin,s1);
       char u[1000]="online";
       int posit18,mark=0;
       for(int r=1;(posit18=s1.find(u))!=-1;r++)
       {
           s1=s1.substr(++posit18);
           mark++;
       }
       if(mark==1 || mark >1)
       {
		    cout<<"\n\n\n\n\n\n";
		     cout<<"open..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
		     HWND hwnd=GetDesktopWindow();
		     ShellExecuteA(hwnd,"OPEN","https://www.1377x.to/movie-library/2/",NULL,NULL,NULL);
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
       else
       {
           cout<<"\n\n";
           HINSTANCE result;
           result = ShellExecute(NULL,NULL,"e:\\FILMS",NULL,NULL,SW_SHOWDEFAULT);
        system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
   }

                    char subs17[1022]=" games";
        int posit17,flag79=0;
        for(int x=1;(posit17=a.find(subs17))!=-1;x++)
        {
            a=a.substr(++posit14);
            flag79++;
        }
   if(flag79==1 || flag79>1)
   {
       system("cls");
       string s1;
       cout<<"online or offline :  "<<endl<<"##################"<<endl<<endl;
       cout<<"type your choice :  ";
       getline(cin,s1);
       char u[1000]="online";
       int posit18,mark=0;
       for(int r=1;(posit18=s1.find(u))!=-1;r++)
       {
           s1=s1.substr(++posit18);
           mark++;
       }
       if(mark==1 || mark >1)
       {
		    cout<<"\n\n\n\n\n\n";
		     cout<<"open..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
		     HWND hwnd=GetDesktopWindow();
		     ShellExecuteA(hwnd,"OPEN","https://rgmechanicsgames.com/",NULL,NULL,NULL);
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
        else
       {
           system("cls");
           char k;
            cout<<"\n\nSir, \nAre you want to play \n\n<a>PC GAME\tor\t<b>INBUILD GAME" ;
            cout<<"\n\n\ntype your choice(a or b):  ";
            cin>>k;
            if(k=='a')
            {
                HINSTANCE result;
                result=ShellExecute(NULL,NULL,"c:\\Program Files\\Microsoft Games",NULL,NULL,SW_SHOWMAXIMIZED);
                            system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
            }
            else
            {
                system("cls");
                system("color e");
                cout<<"\n\nAVAILABLE NOW\n**************\n\n(1)SANKE\n\n" ;
                char a;
cout<<"ARE YOU WANT TO PLAY THIS  (Y or N ) :       ";
cin>>a;
if(a=='Y')
{
                HINSTANCE result;
                 result=ShellExecute(NULL,NULL,"e:\\snake",NULL ,NULL,SW_SHOWDEFAULT);
    system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
else
{
        system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
            }

       }
   }
                    char subs18[1022]=" game";
        int posit18,flag89=0;
        for(int x=1;(posit18=a.find(subs18))!=-1;x++)
        {
            a=a.substr(++posit18);
            flag89++;
        }
   if(flag89==1 || flag89>1)
   {
       system("cls");
       string s1;
       cout<<"online or offline :  "<<endl<<"##################"<<endl<<endl;
       cout<<"type your choice :  ";
       getline(cin,s1);
       char u[1000]="online";
       int posit18,mark=0;
       for(int r=1;(posit18=s1.find(u))!=-1;r++)
       {
           s1=s1.substr(++posit18);
           mark++;
       }
       if(mark==1 || mark >1)
       {
		    cout<<"\n\n\n\n\n\n";
		     cout<<"open..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
		     HWND hwnd=GetDesktopWindow();
		     ShellExecuteA(hwnd,"OPEN","http://oceanofgames.com/",NULL,NULL,NULL);
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
        else
       {
           system("cls");
           char k;
            cout<<"\n\nSir, \nAre you want to play \n\n<a>PC GAME\tor\t<b>INBUILD GAME" ;
            cout<<"\n\n\ntype your choice(a or b):  ";
            cin>>k;
            if(k=='a')
            {
                HINSTANCE result;
                result=ShellExecute(NULL,NULL,"c:\\Program Files\\Microsoft Games",NULL,NULL,SW_SHOWMAXIMIZED);
                            system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
            }
            else
            {
                system("cls");
                system("color e");
                cout<<"\n\nAVAILABLE NOW\n**************\n\n(1)SANKE\n\n ";
                char a;
cout<<"ARE YOU WANT TO PLAY THIS  (Y or N ) :       ";
cin>>a;
if(a=='Y')
{
                HINSTANCE result;
                 result=ShellExecute(NULL,NULL,"e:\\snake",NULL ,NULL,SW_SHOWDEFAULT);
    system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
else
{
        system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
            }

       }
   }

                       char subs110[1022]="games";
        int posit110,flag991=0;
        for(int x=1;(posit110=a.find(subs110))!=-1;x++)
        {
            a=a.substr(++posit110);
            flag991++;
        }
   if(flag991==1 || flag991>1)
   {
       system("cls");
       string s1;
       cout<<"online or offline :  "<<endl<<"##################"<<endl<<endl;
       cout<<"type your choice :  ";
       getline(cin,s1);
       char u[1000]="online";
       int posit18,mark=0;
       for(int r=1;(posit18=s1.find(u))!=-1;r++)
       {
           s1=s1.substr(++posit18);
           mark++;
       }
       if(mark==1 || mark >1)
       {
		    cout<<"\n\n\n\n\n\n";
		     cout<<"open..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
		     HWND hwnd=GetDesktopWindow();
		     ShellExecuteA(hwnd,"OPEN","https://rgmechanicsgames.com/",NULL,NULL,NULL);
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
       else
       {
           system("cls");
           char k;
            cout<<"\n\nSir, \nAre you want to play \n\n<a>PC GAME\tor\t<b>INBUILD GAME" ;
            cout<<"\n\n\ntype your choice(a or b):  ";
            cin>>k;
            if(k=='a')
            {
                HINSTANCE result;
                result=ShellExecute(NULL,NULL,"c:\\Program Files\\Microsoft Games",NULL,NULL,SW_SHOWMAXIMIZED);
                            system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
            }
            else
            {
                system("cls");
                system("color e");
                cout<<"\n\nAVAILABLE NOW\n**************\n\n(1)SANKE\n\n ";
                char a;
cout<<"ARE YOU WANT TO PLAY THIS  (Y or N ) :       ";
cin>>a;
if(a=='Y')
{
                HINSTANCE result;
                 result=ShellExecute(NULL,NULL,"e:\\snake",NULL ,NULL,SW_SHOWDEFAULT);
    system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
else
{
        system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
            }

       }
   }


                       char subs111[1022]="game";
        int posit111,flag111=0;
        for(int x=1;(posit111=a.find(subs111))!=-1;x++)
        {
            a=a.substr(++posit111);
            flag111++;
        }
   if(flag111==1 || flag111>1)
   {
       system("cls");
       string s1;
       cout<<"online or offline :  "<<endl<<"##################"<<endl<<endl;
       cout<<"type your choice :  ";
       getline(cin,s1);
       char u[1000]="online";
       int posit18,mark=0;
       for(int r=1;(posit18=s1.find(u))!=-1;r++)
       {
           s1=s1.substr(++posit18);
           mark++;
       }
       if(mark==1 || mark >1)
       {
		    cout<<"\n\n\n\n\n\n";
		     cout<<"open..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
		     HWND hwnd=GetDesktopWindow();
		     ShellExecuteA(hwnd,"OPEN","http://oceanofgames.com/",NULL,NULL,NULL);
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
       else
       {
           system("cls");
           char k;
            cout<<"\n\nSir, \nAre you want to play \n\n<a>PC GAME\tor\t<b>INBUILD GAME" ;
            cout<<"\n\n\ntype your choice(a or b):  ";
            cin>>k;
            if(k=='a')
            {
                HINSTANCE result;
                result=ShellExecute(NULL,NULL,"c:\\Program Files\\Microsoft Games",NULL,NULL,SW_SHOWMAXIMIZED);
                            system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
            }
            else
            {
                system("cls");
                system("color e");
                cout<<"\n\nAVAILABLE NOW\n**************\n\n(1)SANKE\n\n ";
                char a;
cout<<"ARE YOU WANT TO PLAY THIS  (Y or N ) :       ";
cin>>a;
if(a=='Y')
{
                HINSTANCE result;
                 result=ShellExecute(NULL,NULL,"e:\\snake",NULL ,NULL,SW_SHOWDEFAULT);
    system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
else
{
        system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
}
            }

       }
   }


        char subs333[1022]="krishnamurti number";
        int posit333,flag333=0;
        for(int x=1;(posit333=a.find(subs333))!=-1;x++)
        {
            a=a.substr(++posit333);
            flag333++;
        }
   if(flag333==1 || flag333>1)
   {
       system("cls");
int n,rem=0,h=1,sum=0,p,i;
cout<<"enter the no= ";
cin>>n;
p=n;
while(n!=0)
{
rem=n%10;
for(i=1;i<=rem;i++)
{
h=h*i;
}
sum=h+sum;
n=n/10;
h=1;
}
if(p==sum)
cout<<p<<" is krishnamurthy no";
else
cout<<"boro carrow";

	char z3[1000];
	cout<<"\n\nARE YOU WANT TO CALCULATE IN RANGE(yes or no)=   ";
	cin>>z3;
	char k3[1000]="yes";
	if(strcmp(k3,z3)==0)
    {
        		    cout<<"\n\n\n\n\n\n";
		     cout<<"calculating..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
int n,rem=0,h=1,sum=0,p,i,fi,la,g;
cout<<"enter the uper limit=  ";
cin>>fi;
cout<<"enter the lower limit=  ";
cin>>la;
for(g=fi;g<=la;g++)
{
rem=0;
sum=0;
    p=g;
    while(p!=0)
        {
                 rem=p%10;
                for(i=1;i<=rem;i++)
                    {
                        h=h*i;
                    }
                   sum=h+sum;
                   p=p/10;
                   h=1;
        }
                        if(sum==g)
                       cout<<g<<",";
                        continue;
}
    cout<<"\n\n\n";
   system("pause");
		system("cls");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
       else
       {
            system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
   }


                 char subs444[1022]="shopping";
        int posit444,flag444=0;
        for(int x=1;(posit444=a.find(subs444))!=-1;x++)
        {
            a=a.substr(++posit444);
            flag444++;
        }
   if(flag444==1 || flag444>1)
   {
       system("cls");
		    cout<<"\n\n\n\n\n\n";
		     cout<<"open..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
		     HWND hwnd=GetDesktopWindow();
		     ShellExecuteA(hwnd,"OPEN","https://www.amazon.com",NULL,NULL,NULL);
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
   }


        char subs555[1022]="buy";
        int posit555,flag555=0;
        for(int x=1;(posit555=a.find(subs555))!=-1;x++)
        {
            a=a.substr(++posit555);
            flag555++;
        }
   if(flag555==1 || flag555>1)
   {
       system("cls");
		    cout<<"\n\n\n\n\n\n";
		     cout<<"open..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
		     HWND hwnd=GetDesktopWindow();
		     ShellExecuteA(hwnd,"OPEN","https://www.amazon.com",NULL,NULL,NULL);
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
   }


        char subs666[1022]="buying";
        int posit666,flag666=0;
        for(int x=1;(posit666=a.find(subs666))!=-1;x++)
        {
            a=a.substr(++posit666);
            flag666++;
        }
   if(flag666==1 || flag666>1)
   {
       system("cls");
		    cout<<"\n\n\n\n\n\n";
		     cout<<"open..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
		     HWND hwnd=GetDesktopWindow();
		     ShellExecuteA(hwnd,"OPEN","https://www.amazon.com",NULL,NULL,NULL);
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
   }


   char alphabate[1000]="multiplication";
   int positions,mark3=0;
   for(int y=1;(positions=a.find(alphabate))!=-1;y++)
        {
       a=a.substr(++positions);
       mark3++;
   }
   if(mark3==1 || mark3>1)
   {
       system("cls");
       int i,n,numbers,mul=1;
       cout<<"enter the no of terms to multiplication ==> ";
       cin>>n;
       cout<<"\n\n";
       for(i=1;i<=n;i++)
       {
           cin>>numbers;
           mul=mul*numbers;
       }
       cout<<"\n\nMultiplication result is =  "<<mul;
       system("pause");
       Beep(500,6000);
        system("cls");
		system("color b");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";

   }



           char subs777[1022]="amstrong";
        int posit777,flag777=0;
        for(int x=1;(posit777=a.find(subs777))!=-1;x++)
        {
            a=a.substr(++posit777);
            flag777++;
        }
   if(flag777==1 || flag777>1)
   {
       system("cls");
int n,s=0,d,rem=0;
cout<<"Enter The Number=";
cin>>n;
d=n;
for(;n!=0;n=n/10)
{
rem=n%10;
s=s+(rem*rem*rem);
}
if(s==d)
{
cout<<"it is a amstrong no";
}
else
cout<<"it is not a amstrong no";

	char z3[1000];
	cout<<"\n\nARE YOU WANT TO CALCULATE IN RANGE(yes or no)=   ";
	cin>>z3;
	char k3[1000]="yes";
	if(strcmp(k3,z3)==0)
    {
        		    cout<<"\n\n\n\n\n\n";
		     cout<<"calculating..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
  int num1, num2, i, num, digit, sum;

  cout << "Enter upper limit: ";
  cin >> num1;

  cout << "Enter lower limit: ";
  cin >> num2;

  cout << "Armstrong numbers between " << num1 << " and " << num2 << " are: " << endl<<endl;
  for(i = num1; i <= num2; i++)
  {
        sum = 0;
        num = i;

        for(; num > 0; num /= 10)
        {
            digit = num % 10;
            sum = sum + digit * digit * digit;
        }

        if(sum == i)
        {
            cout << i << endl<<endl;
        }

}
    cout<<"\n\n\n";
   system("pause");
   Beep(500,6000);
		system("cls");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
       else
       {
            system("pause");
            Beep(500,6000);
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
   }

           char subs888[1022]="vowel";
        int posit888,flag888=0;
        for(int x=1;(posit888=a.find(subs888))!=-1;x++)
        {
            a=a.substr(++posit888);
            flag888++;
        }
   if(flag888==1 || flag888>1)
{
system("cls");
 char str[100];
   int vowelCounter = 0, consonantCounter = 0;
   cout << "Enter any string: ";
   cin.getline(str, 150);
   //'\0 represent end of string
   for(int i = 0; str[i]!='\0'; i++)
    {
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
         str[i]=='o' || str[i]=='u' || str[i]=='A' ||
         str[i]=='E' || str[i]=='I' || str[i]=='O' ||
         str[i]=='U')
      {
         vowelCounter++;
      }
      else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
      {
         consonantCounter++;
      }
   }
   cout << "\n\nVowels in String: " << vowelCounter << endl;
   cout << "\nConsonants in String: " << consonantCounter << endl;
cout<<"\n\n";
system("pause");
Beep(500,6000);
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


           char subs999[1022]="consonant";
        int posit999,flag999=0;
        for(int x=1;(posit999=a.find(subs999))!=-1;x++)
        {
            a=a.substr(++posit999);
            flag999++;
        }
   if(flag999==1 || flag999>1)
{
system("cls");
 char str[100];
   int vowelCounter = 0, consonantCounter = 0;
   cout << "Enter any string: ";
   cin.getline(str, 150);
   //'\0 represent end of string
   for(int i = 0; str[i]!='\0'; i++)
    {
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
         str[i]=='o' || str[i]=='u' || str[i]=='A' ||
         str[i]=='E' || str[i]=='I' || str[i]=='O' ||
         str[i]=='U')
      {
         vowelCounter++;
      }
      else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
      {
         consonantCounter++;
      }
   }
   cout << "\n\nVowels in String: " << vowelCounter << endl;
   cout << "\nConsonants in String: " << consonantCounter << endl;
cout<<"\n\n";
Beep(500,6000);
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

           char subst111[1022]="consonants";
        int positi111,flago111=0;
        for(int x=1;(positi111=a.find(subst111))!=-1;x++)
        {
            a=a.substr(++positi111);
            flago111++;
        }
   if(flago111==1 || flago111>1)
{
system("cls");
 char str[100];
   int vowelCounter = 0, consonantCounter = 0;
   cout << "Enter any string: ";
   cin.getline(str, 150);
   //'\0 represent end of string
   for(int i = 0; str[i]!='\0'; i++) {
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
         str[i]=='o' || str[i]=='u' || str[i]=='A' ||
         str[i]=='E' || str[i]=='I' || str[i]=='O' ||
         str[i]=='U')
      {
         vowelCounter++;
      }
      else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
      {
         consonantCounter++;
      }
   }
   cout << "\n\nVowels in String: " << vowelCounter << endl;
   cout << "\nConsonants in String: " << consonantCounter << endl;
cout<<"\n\n";
Beep(500,6000);
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

           char subst222[1022]="vowel";
        int positi222,flago222=0;
        for(int x=1;(positi222=a.find(subst222))!=-1;x++)
        {
            a=a.substr(++positi222);
            flago222++;
        }
   if(flago222==1 || flago222>1)
{
system("cls");
 char str[100];
   int vowelCounter = 0, consonantCounter = 0;
   cout << "Enter any string: ";
   cin.getline(str, 150);
   //'\0 represent end of string
   for(int i = 0; str[i]!='\0'; i++) {
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
         str[i]=='o' || str[i]=='u' || str[i]=='A' ||
         str[i]=='E' || str[i]=='I' || str[i]=='O' ||
         str[i]=='U')
      {
         vowelCounter++;
      }
      else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
      {
         consonantCounter++;
      }
   }
   cout << "\n\nVowels in String: " << vowelCounter << endl;
   cout << "\nConsonants in String: " << consonantCounter << endl;
   return 0;
cout<<"\n\n";
Beep(500,6000);
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


           char subst333[1022]="palinedrome string";
        int positi333,flago333=0;
        for(int x=1;(positi333=a.find(subst333))!=-1;x++)
        {
            a=a.substr(++positi333);
            flago333++;
        }
   if(flago333==1 || flago333>1)
{
system("cls");

	char x1[1000];
int i,len,j,f=0;
cout<<"ENTER YOUR STRING:    ";
cin>>x1;
len=strlen(x1);
for(i=0,j=len-1;i<=j;i++,j--)
{
	if(x1[i]!=x1[j])
	{
		f=1;
		break;
	}
}
if(f==0)
{
	cout<<endl<<x1<<" is pallindrome string";
}
else
{
		cout<<endl<<x1<<" is not pallindrome string";
}

cout<<"\n\n";
Beep(500,6000);
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


  char subst444[1022]="majic number";
        int positi444,flago444=0;
        for(int x=1;(positi444=a.find(subst444))!=-1;x++)
        {
            a=a.substr(++positi444);
            flago444++;
        }
   if(flago444==1 || flago444>1)
        {

int n,s=0,r,p,q=0,t,w=0,f,e=0;
cout<<"CHEAK MAGIC NUMBER(MAXIMUM FOUR DIGITS NUMBERS)\n";
cout<<"***********************************************************\n";
cout<<"Enter the number=";
cin>>n;
while(n!=0)
{
	r=n%10;
	s=s+r;
	n=n/10;
	}
while(s!=0)
{
	p=s%10;
	q=q+p;
	s=s/10;
}
while(q!=0)
{
	t=q%10;
	w=w+t;
	q=q/10;
}
while(w!=0)
{
	f=w%10;
	e=e+f;
	w=w/10;
}
if(e==1)
cout<<"IT IS MAGIC NUMBER";
else
cout<<"IT IS NOT A MAGIC NUMBER";

cout<<"\n\n";
Beep(500,6000);
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}
char words[1000]="sab tv";
int red,blue=0;
for(int t=1;(red=a.find(words))!=-1;t++)
{
    a=a.substr(++red);
    blue++;
}
if( blue==1 || blue>1 )
{
    cout<<"opening...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
    HWND hwnd=GetDesktopWindow();
    ShellExecuteA(hwnd,"open","https://www.sonyliv.com/",NULL,NULL,NULL);
    Beep(500,6000);
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char words1[1000]="zee tv";
int red1,blue1=0;
for(int t=1;(red1=a.find(words1))!=-1;t++)
{
    a=a.substr(++red1);
    blue1++;
}
if( blue1==1 || blue1>1 )
{
    cout<<"opening...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
    HWND hwnd=GetDesktopWindow();
    ShellExecuteA(hwnd,"open","https://www.zee5.com/",NULL,NULL,NULL);
    Beep(500,6000);
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char words2[1000]="zee5";
int red2,blue2=0;
for(int t=1;(red2=a.find(words2))!=-1;t++)
{
    a=a.substr(++red2);
    blue2++;
}
if( blue2==1 || blue2>1 )
{
    cout<<"opening...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
    HWND hwnd=GetDesktopWindow();
    ShellExecuteA(hwnd,"open","https://www.zee5.com/",NULL,NULL,NULL);
    Beep(500,6000);
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char words3[1000]="sab";
int red3,blue3=0;
for(int t=1;(red3=a.find(words3))!=-1;t++)
{
    a=a.substr(++red3);
    blue3++;
}
if( blue3==1 || blue3>1 )
{
    cout<<"opening...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
    HWND hwnd=GetDesktopWindow();
    ShellExecuteA(hwnd,"open","https://www.sonyliv.com/",NULL,NULL,NULL);
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char words4[1000]="film";
int red4,blue4=0;
for(int t=1;(red4=a.find(words4))!=-1;t++)
{
    a=a.substr(++red4);
    blue4++;
}
if(blue4==1 || blue>1 )
{
       system("cls");
       string s1;
       cout<<"online or offline :  "<<endl<<"##################"<<endl<<endl;
       cout<<"type your choice :  ";
       getline(cin,s1);
       char u[1000]="online";
       int posit18,mark=0;
       for(int r=1;(posit18=s1.find(u))!=-1;r++)
       {
           s1=s1.substr(++posit18);
           mark++;
       }
       if(mark==1 || mark >1)
       {
		    cout<<"\n\n\n\n\n\n";
		     cout<<"open..";
		     Sleep(1000);
		     cout<<"..";
		     Sleep(1000);
		     cout<<".....";
		     cout<<"\n\n\n";
		     HWND hwnd=GetDesktopWindow();
		     ShellExecuteA(hwnd,"OPEN","https://www.1377x.to/movie-library/2/",NULL,NULL,NULL);
   system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
       else
       {
           cout<<"\n\n";
           HINSTANCE result;
           result = ShellExecute(NULL,NULL,"e:\\FILMS",NULL,NULL,SW_SHOWDEFAULT);
        system("pause");
       system("cls");
		system("color e");
		cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
		cout<<"please type your next command......\n\n\n";
       }
	}


	char words5[1000]="notepad";
int red5,blue5=0;
for(int t=1;(red5=a.find(words5))!=-1;t++)
{
    a=a.substr(++red5);
    blue5++;
}
if( blue5==1 || blue5>1 )
{
    cout<<"opening...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
    HINSTANCE open;
   open= ShellExecute(NULL,NULL,"c:\\Windows\\notepad",NULL,NULL,SW_SHOWDEFAULT);
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char words6[1000]="microsoft office";
int red6,blue6=0;
for(int t=1;(red6=a.find(words6))!=-1;t++)
{
    a=a.substr(++red6);
    blue6++;
}
if( blue6==1 || blue6>1 )
{
    cout<<"opening...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
    HINSTANCE open;
   open= ShellExecute(NULL,NULL,"c:\\Program Files\\Microsoft Office\\Office12\\WINWORD",NULL,NULL,SW_SHOWDEFAULT);
   cout<<"\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char words7[1000]="facebook";
int red7,blue7=0;
for(int t=1;(red7=a.find(words7))!=-1;t++)
{
    a=a.substr(++red7);
    blue7++;
}
if( blue7==1 || blue7>1 )
{
    cout<<"opening...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
    HWND hnwd=GetDesktopWindow();
    ShellExecuteA(hnwd,"open","https://www.facebook.com/",NULL,NULL,NULL);
   cout<<"\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char words8[1000]="prime minister";
int red8,blue8=0;
for(int t=1;(red8=a.find(words8))!=-1;t++)
{
    a=a.substr(++red8);
    blue8++;
}
if( blue8==1 || blue8>1 )
{
    cout<<"\n\nfinding...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
   cout<<"\n\n";
   cout<<"-------------------------------->    Narendra Modi";
   cout<<"\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char words9[1000]="hobbies";
int red9,blue9=0;
for(int t=1;(red9=a.find(words9))!=-1;t++)
{
    a=a.substr(++red9);
    blue9++;
}
if( blue9==1 || blue9>1 )
{
    cout<<"\n\nsearching...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
   cout<<"\n\n\n";
   cout<<"I am a computer program,I have no feeling\nI have no hobby.....";
   cout<<"\n\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char words10[1000]="hobby";
int red10,blue10=0;
for(int t=1;(red10=a.find(words10))!=-1;t++)
{
    a=a.substr(++red10);
    blue10++;
}
if( blue10==1 || blue10>1 )
{
    cout<<"\n\nsearching...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
   cout<<"\n\n\n";
   cout<<"I am a computer program(created by BISWA(my BOSS)),I have no feeling\nSo,I have no hobby.....";
   cout<<"\n\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char words11[1000]="boss";
int red11,blue11=0;
for(int t=1;(red11=a.find(words11))!=-1;t++)
{
    a=a.substr(++red11);
    blue11++;
}
if( blue11==1 || blue11>1 )
{
    cout<<"\n\nsearching...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
   cout<<"\n\n\n";
   cout<<"My boss name is Biswarup Bhattarcharjee...he is a student,\n";
   cout<<"he is recently passed out HS exam,\nhe will joined in UEM(University Engineering Management)\nhis favourite language is   C++ &  JAVA &  #C....";
   cout<<"\n\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char words12[1000]="secret";
int red12,blue12=0;
for(int t=1;(red12=a.find(words12))!=-1;t++)
{
    a=a.substr(++red12);
    blue12++;
}
if( blue12==1 || blue12>1 )
{
    cout<<"\n\nsearching...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
   cout<<"\n\n\n";
   cout<<"BISWA'S(my BOSS) GIRLFRIEND NAME IS ROMI";
   cout<<"\n\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char words122[1000]="BOSS";
int red122,blue112=0;
for(int t=1;(red122=a.find(words122))!=-1;t++)
{
    a=a.substr(++red122);
    blue112++;
}
if( blue112==1 || blue112>1 )
{
    cout<<"\n\nsearching...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
   cout<<"\n\n\n";
   cout<<"My boss name is Biswarup Bhattarcharjee...he is a student,\n";
   cout<<"he is recently passed out HS exam,\nhe will joined in UEM(University Engineering Management)\nhis favourite language is   C++ &  JAVA &  #C....";
   cout<<"\n\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char words1222[1000]="desktop";
int red1222,blue1222=0;
for(int t=1;(red1222=a.find(words1222))!=-1;t++)
{
    a=a.substr(++red1222);
    blue1222++;
}
if( blue1222==1 || blue1222>1 )
{
    cout<<"\n\nsearching...";
    Sleep(1000);
    cout<<"....";
    Sleep(1000);
    cout<<"..";
   cout<<"\n\n\n";
   HINSTANCE result;
   result=ShellExecute(NULL,NULL,"c:\\Users\\Biswa\\Desktop",NULL,NULL,SW_SHOWMAXIMIZED);
   cout<<"\n\n\n";
system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char restart[1000]="shutdown";
int red12226,blue12226=0;
for(int t=1;(red12226=a.find(restart))!=-1;t++)
{
    a=a.substr(++red12226);
    blue12226++;
}
if( blue12226==1 || blue12226>1 )
{
char a;
cout<<"\n\nARE YOU SURE  (Y or N ) :       ";
cin>>a;
if(a=='Y')
{
	system("C:\\Windows\\System32\\shutdown.exe /s");
}
}

char romi[1200]="ASCII";
int mark4=0,po;
for(int v=1;(po=a.find(romi))!=-1;v++)
{
    a=a.substr(++po);
    mark4++;
}
if(mark4==1 || mark4>1)
{
    system("cls");
    char ch;
    int i;
    for(i=1;i<255;i++)
    {
        ch=i;
        cout<<i<<"->"<<ch<<"\n";
    }
    system("pause");
system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";

}

char restart1[1000]="restart";
int red122261,blue122261=0;
for(int t=1;(red122261=a.find(restart1))!=-1;t++)
{
    a=a.substr(++red122261);
    blue122261++;
}
if( blue122261==1 || blue122261>1 )
{
char a;
cout<<"\n\nARE YOU SURE  (Y or N ) :       ";
cin>>a;
if(a=='Y')
{
	system("C:\\Windows\\System32\\shutdown.exe /r");
}
}
char restart17[1000]="bye";
int red1222617,blue1222617=0;
for(int t=1;(red1222617=a.find(restart17))!=-1;t++)
{
    a=a.substr(++red1222617);
    blue1222617++;
}
if( blue1222617==1 || blue1222617>1 )
{
cout<<"\n\n\n\n\n\n\t\t\t*** BYE BYE SIR,TALK YOU LATER SIR*****\n\n\n\n\n\n ";
Sleep(1000);
exit(0);
}



char restart179[1000]="date";
int red12226179,blue12226179=0;
for(int t=1;(red12226179=a.find(restart179))!=-1;t++)
{
    a=a.substr(++red12226179);
    blue12226179++;
}
if( blue12226179==1 || blue12226179>1 )
{
    system("cls");
    cout<<"\n\n";
system("echo %date%");
cout<<"\n\n\n";
system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char restart1797[1000]="time";
int red122261797,blue122261797=0;
for(int t=1;(red122261797=a.find(restart1797))!=-1;t++)
{
    a=a.substr(++red122261797);
    blue122261797++;
}
if( blue122261797==1 || blue122261797>1 )
{
    system("cls");
    cout<<"\n\n";
system("echo %time%");
cout<<"\n\n\n";
system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char restart17972[1000]="chumu";
int red1222617972,blue1222617972=0;
for(int t=1;(red1222617972=a.find(restart17972))!=-1;t++)
{
    a=a.substr(++red1222617972);
    blue1222617972++;
}
if( blue1222617972==1 || blue1222617972>1 )
{
    system("cls");
    cout<<"\n\n\n";
  cout<<"Amake Chumu Dewar Jnno Dhonnobaadh "<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3);
cout<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3)<<char(3);
;
cout<<"\n\n\n\n\n\n\n\t\t\t\t";
system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}



char restart179721[1000]="who are you";
int red12226179721,blue12226179721=0;
for(int t=1;(red12226179721=a.find(restart179721))!=-1;t++)
{
    a=a.substr(++red12226179721);
    blue12226179721++;
}
if( blue12226179721==1 || blue12226179721>1 )
{
    system("cls");

Sleep(2000);
cout<<"\n\nI am a Computer Program.\n\nI am designed by c++ \n\nMy BOSS is Biswa";
cout<<"\n\n\n\n\n\n\n\t\t\t\t";
system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char restart1797216[1000]="cmd";
int red122261797216,blue122261797216=0;
for(int t=1;(red122261797216=a.find(restart1797216))!=-1;t++)
{
    a=a.substr(++red122261797216);
    blue122261797216++;
}
if( blue122261797216==1 || blue122261797216>1 )
{
system("cls");
Sleep(2000);
HINSTANCE result;
result=ShellExecute(NULL,NULL,"c:\\Windows\\system32\\cmd",NULL,NULL,SW_SHOWDEFAULT);
system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char restart17972167[1000]="command prompt";
int red1222617972167,blue1222617972167=0;
for(int t=1;(red1222617972167=a.find(restart17972167))!=-1;t++)
{
    a=a.substr(++red1222617972167);
    blue1222617972167++;
}
if( blue1222617972167==1 || blue1222617972167>1 )
{
system("cls");
Sleep(2000);
HINSTANCE result;
result=ShellExecute(NULL,NULL,"c:\\Windows\\system32\\cmd",NULL,NULL,SW_SHOWDEFAULT);
system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char kutta[1100]="digit";
int suyar,chagol=0;
for(int i=1;(suyar=a.find(kutta))!=-1;i++)
{
    a=a.substr(++suyar);
    chagol++;
}
if(chagol>0)
{
    system("cls");
    cout<<"\n\nreading...\n\n";
    Sleep(3000);
    system("cls");
   string str;
   int digitCounter = 0;
   cout << "\nEnter any string: ";
   getline(cin, str);
   cout<<"\n\nDigits are\n**********************************************************************************\n\n";
  for(int i = 0; str[i]!='\0'; i++)
    {
     if(isdigit(str[i])!=0)
      {
        digitCounter++;
        cout<<str[i];
        cout<<"\n";
     }
  }
  cout<<"\n**********************************************************************************";
  cout<<endl;
  cout << "\n\nDigits in String: " << digitCounter << endl<<"\n\n\n\n";
  system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char kutta1[1100]="alphabet";
int suyar1,chagol1=0;
for(int i=1;(suyar1=a.find(kutta1))!=-1;i++)
{
    a=a.substr(++suyar1);
    chagol1++;
}
if(chagol1>0)
{
    system("cls");
    cout<<"\n\nreading...\n\n";
    Sleep(3000);
    system("cls");
   string str1;
   int alphaCounter = 0;
   cout << "\nEnter any string: ";
   getline(cin, str1);
   cout<<"\n\n";
   cout<<"Alphabets are\n**********************************************************************************";
   cout<<"\n\n";
  for(int i = 0; str1[i]!='\0'; i++)
    {
     if(isalpha(str1[i])!=0)
      {
        alphaCounter++;
        cout<<str1[i];
        cout<<"\n";
     }
  }
  cout<<"\n**********************************************************************************";
  cout<<endl;
  cout << "\n\nAlphabets in String: " << alphaCounter << endl<<"\n\n\n\n";
  system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char kutta2[5000]="space";
int suyar2,chagol2=0;
for(int i=1;(suyar2=a.find(kutta2))!=-1;i++)
{
    a=a.substr(++suyar2);
    chagol2++;
}
if(chagol2>0)
{
    system("cls");
    cout<<"reading...";
    Sleep(2000);
    system("cls");
    string str3;
    int spacecount=0;
    cout<<"enter the paragraph  :";
    getline(cin,str3);
    for(int y=0;str3[y]!='\0';y++)
    {
        if(isspace(str3[y])!=0)
        {
            spacecount++;
        }
    }
    cout<<"\n\n\n";
    cout<<"Result ->  "<<spacecount<<"  spaces are present in your paragraph\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char kutta3[5000]="reverse";
int suyar3,chagol3=0;
for(int i=1;(suyar3=a.find(kutta3))!=-1;i++)
{
    a=a.substr(++suyar3);
    chagol3++;
}
if(chagol3>0)
{
    system("cls");
    cout<<"reading...";
    Sleep(2000);
    system("cls");
    cout<<"\n\nsay again apply for string or number\n*********************************************";
    string str4;
    cout<<"\n\n\n\n\n\n\nenter the choice :";
    getline(cin,str4);
    char d[100]="string";
    int suyarer,chagoler=0;
    for(int r=1;(suyarer=str4.find(d))!=-1;r++)
  {
    str4=str4.substr(++suyarer);
    chagoler++;
  }
  char f[100]="number";
    int suyareer,chagoleer=0;
    for(int r=1;(suyareer=str4.find(f))!=-1;r++)
  {
    str4=str4.substr(++suyareer);
    chagoleer++;
  }
  if(chagoler>0)
  {
      char s[1000];
      system("cls");
      cout<<"enter your string for reverse :";
      cin>>s;
      cout<<"\n\nReverse String :  "<<strrev(s);
        cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
  }

  if(chagoleer>0)
  {
      int s,rem=0,rev=0;
      system("cls");
      cout<<"enter your number for reverse :";
      cin>>s;
   while(s!=0)
      {
          rem=s%10;
          rev=(rev*10)+rem;
          s=s/10;
      }
         cout<<"\n\nReverse number :  "<<rev;
        cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
  }
}


char kutta4[5000]="graph";
int suyar4,chagol4=0;
for(int i=1;(suyar4=a.find(kutta4))!=-1;i++)
{
    a=a.substr(++suyar4);
    chagol4++;
}
if(chagol4>0)
{
    system("cls");
    cout<<"reading...";
    Sleep(2000);
    system("cls");
    char a;
    cout<<"ARE YOU CHECK GRAPHIC CHARATERS IN\n\n(a)SENTENCE OR PARAGRAPH\t\t(b)CHARACTER";
    cout<<"\n\n\nenter your choice(type 'a' or 'b') :  ";
    cin>>a;
    if(a=='a')
    {
        system("cls");
        string stringg;
        int q=0;
        cout<<"Sir,enter your topic :   ";
        cin>>stringg;
        cout<<"\n\n*********************************************************************\n\n";
        for(int w=0;stringg[w]!='\0';w++)
        {
            if(isgraph(stringg[w])!=0)
            {
                q++;
                cout<<stringg[w];
            }
        }
             cout<<"\n\n*********************************************************************\n\n";
             cout<<q<<" graphic characters are present.\n\n\n";
                 cout<<"Are you print all 'GRAPHIC CHARACTERS' ???\t\t";
    string s22;
    Sleep(5000);
    system("cls");
    cout<<"\n\n\nenter your choice(type 'yes' or 'no') :  ";
    cin>>s22;
    char kuttaa[5000]="yes";
int suyarr,chagoleeer=0;
for(int i=1;(suyarr=s22.find(kuttaa))!=-1;i++)
{
    s22=s22.substr(++suyarr);
    chagoleeer++;
}
    if(chagoleeer>0)
    {
        system("cls");
    cout<<"ALL GRAPHIC CHARACTERS ARE===>>\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
    for(int o=1;o<=127;o++)
    {
        if(isgraph(o)!=0)
        {
            cout<<o<<endl;
        }
    }
            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }
        char kuttaaa[5000]="no";
int suyarrr,chagoleeerr=0;
for(int i=1;(suyarrr=s22.find(kuttaaa))!=-1;i++)
{
    s22=s22.substr(++suyarrr);
    chagoleeerr++;
}
    if(chagoleeerr>0)
    {
            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }

    }
    if(a=='b')
    {
        system("cls");
        char ch;
        cout<<"enter your character :";
        cin>>ch;
        if(isgraph(ch)==0)
        {
             cout<<"\n\nIT IS NOT A GRAPHIC CHARACTER";
        }
        else
            {
                cout<<"\n\nIT IS A GRAPHIC CHARACTER";
            }

               cout<<"\n\nAre you print all 'GRAPHIC CHARACTERS' ???\t\t";
    string s22;
    Sleep(5000);
    system("cls");
    cout<<"\n\n\nenter your choice(type 'yes' or 'no') :  ";
    cin>>s22;
    char kuttaa[5000]="yes";
int suyarr,chagoleeer=0;
for(int i=1;(suyarr=s22.find(kuttaa))!=-1;i++)
{
    s22=s22.substr(++suyarr);
    chagoleeer++;
}
    if(chagoleeer>0)
    {
        system("cls");
    cout<<"ALL GRAPHIC CHARACTERS ARE===>>\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
    for(int o=1;o<=127;o++)
    {
        if(isgraph(o)!=0)
        {
            cout<<o<<endl;
        }
    }
            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }
         char kuttaaa[5000]="no";
int suyarrr,chagoleeerr=0;
for(int i=1;(suyarrr=s22.find(kuttaaa))!=-1;i++)
{
    s22=s22.substr(++suyarrr);
    chagoleeerr++;
}
    if(chagoleeerr>0)
    {
            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }
        }
    }


char kutta5[5000]="punctuation";
int suyar5,chagol5=0;
for(int i=1;(suyar5=a.find(kutta5))!=-1;i++)
{
    a=a.substr(++suyar5);
    chagol5++;
}
if(chagol5>0)
{
    system("cls");
    cout<<"reading...";
    Sleep(2000);
    system("cls");
    char a;
    cout<<"ARE YOU CHECK PUNCTUATION CHARATERS IN\n\n(a)SENTENCE OR PARAGRAPH\t\t(b)CHARACTER";
    cout<<"\n\n\nenter your choice(type 'a' or 'b') :  ";
    cin>>a;
    if(a=='a')
    {
        system("cls");
        string stringg;
        int q=0;
        cout<<"Sir,enter your topic :   ";
        cin>>stringg;
        cout<<"\n\n*********************************************************************\n\n";
        for(int w=0;stringg[w]!='\0';w++)
        {
            if(ispunct(stringg[w])!=0)
            {
                q++;
                cout<<stringg[w];
            }
        }
             cout<<"\n\n*********************************************************************\n\n";
             cout<<q<<" punction characters are present.\n\n\n";
            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";

    }

    if(a=='b')
    {
        system("cls");
        char ch;
        cout<<"enter your character :";
        cin>>ch;
        if(ispunct(ch)==0)
        {
             cout<<"\n\nIT IS NOT A PUNCTUATION CHARACTER";
        }
        else
            {
                cout<<"\n\nIT IS A PUNCTUATION CHARACTER";
            }
            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }

    }
char kutta6[5000]="control";
int suyar6,chagol6=0;
for(int i=1;(suyar6=a.find(kutta6))!=-1;i++)
{
    a=a.substr(++suyar6);
    chagol6++;
}
if(chagol6>0)
{
    system("cls");
    cout<<"reading...";
    Sleep(2000);
    system("cls");
    char a;
    cout<<"ARE YOU CHECK CONTROL CHARATERS IN\n\n(a)SENTENCE OR PARAGRAPH\t\t(b)CHARACTER";
    cout<<"\n\n\nenter your choice(type 'a' or 'b') :  ";
    cin>>a;
    if(a=='a')
    {
        system("cls");
        string stringg;
        int q=0;
        cout<<"Sir,enter your topic :   ";
        cin>>stringg;
        cout<<"\n\n*********************************************************************\n\n";
        for(int w=0;stringg[w]!='\0';w++)
        {
            if(iscntrl(stringg[w])!=0)
            {
                q++;
                cout<<stringg[w];
            }
        }
             cout<<"\n\n*********************************************************************\n\n";
             cout<<q<<" control characters are present.\n\n\n";
            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }
    if(a=='b')
    {
        system("cls");
        char ch;
        cout<<"enter your character :";
        cin>>ch;
        if(iscntrl(ch)==0)
        {
             cout<<"\n\nIT IS NOT A CONTROL CHARACTER";
        }
        else
            {
                cout<<"\n\nIT IS A CONTROL CHARACTER";
            }


            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }
    }

char kutta7[5000]="printable";
int suyar7,chagol7=0;
for(int i=1;(suyar7=a.find(kutta7))!=-1;i++)
{
    a=a.substr(++suyar7);
    chagol7++;
}
if(chagol7>0)
{
    system("cls");
    cout<<"reading...";
    Sleep(2000);
    system("cls");
    char a;
    cout<<"ARE YOU CHECK PRINTABLE CHARATERS IN\n\n(a)WORD\t\t(b)CHARACTER";
    cout<<"\n\n\nenter your choice(type 'a' or 'b') :  ";
    cin>>a;
    if(a=='a')
    {
        system("cls");
        string stringg;
        int q=0;
        cout<<"Sir,enter your topic :   ";
        cin>>stringg;
        cout<<"\n\n*********************************************************************\n\n";
        for(int w=0;stringg[w]!='\0';w++)
        {
            if(isprint(stringg[w])!=0)
            {
                q++;
                cout<<stringg[w];
            }
        }
             cout<<"\n\n*********************************************************************\n\n";
             cout<<q<<" printable characters are present.\n\n\n";
            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }
    if(a=='b')
    {
        system("cls");
        char ch;
        cout<<"enter your character :";
        cin>>ch;
        if(isprint(ch)==0)
        {
             cout<<"\n\nIT IS NOT A PRINTABLE CHARACTER";
        }
        else
            {
                cout<<"\n\nIT IS A PRINTABLE CHARACTER";
            }


            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }
    }

    char kutta8[5000]="alphanumeric";
int suyar8,chagol8=0;
for(int i=1;(suyar8=a.find(kutta8))!=-1;i++)
{
    a=a.substr(++suyar8);
    chagol8++;
}
if(chagol8>0)
{
    system("cls");
    cout<<"reading...";
    Sleep(2000);
    system("cls");
    char a;
    cout<<"ARE YOU CHECK ALPHANUMERIC CHARATERS IN\n\n(a)SENTENCE OR PARAGRAPH\t\t(b)CHARACTER";
    cout<<"\n\n\nenter your choice(type 'a' or 'b') :  ";
    cin>>a;
    if(a=='a')
    {
        system("cls");
        string stringg;
        int q=0;
        cout<<"Sir,enter your topic :   ";
        cin>>stringg;
        cout<<"\n\n*********************************************************************\n\n";
        for(int w=0;stringg[w]!='\0';w++)
        {
            if(isalnum(stringg[w])!=0)
            {
                q++;
                cout<<stringg[w];
            }
        }
             cout<<"\n\n*********************************************************************\n\n";
             cout<<q<<" ALPHANUMERIC characters are present.\n\n\n";
            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }
    if(a=='b')
    {
        system("cls");
        char ch;
        cout<<"enter your character :";
        cin>>ch;
        if(isalnum(ch)==0)
        {
             cout<<"\n\nIT IS NOT A ALPHANUMERIC CHARACTER";
        }
        else
            {
                cout<<"\n\nIT IS A ALPHANUMERIC CHARACTER";
            }


            cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
    }
    }



char kutta9[5000]="palinedrome";
int suyar9,chagol9=0;
for(int i=1;(suyar9=a.find(kutta9))!=-1;i++)
{
    a=a.substr(++suyar9);
    chagol9++;
}
if(chagol9>0)
{
    system("cls");
    cout<<"reading...";
    Sleep(2000);
    system("cls");
    cout<<"\n\nsay again apply for string or number\n*********************************************";
    string str4;
    cout<<"\n\n\n\n\n\n\nenter the choice :";
    getline(cin,str4);
    char d[100]="string";
    int suyarer,chagoler=0;
    for(int r=1;(suyarer=str4.find(d))!=-1;r++)
  {
    str4=str4.substr(++suyarer);
    chagoler++;
  }
  char f[100]="number";
    int suyareer,chagoleer=0;
    for(int r=1;(suyareer=str4.find(f))!=-1;r++)
  {
    str4=str4.substr(++suyareer);
    chagoleer++;
  }
  if(chagoler>0)
  {
      system("cls");
	char x[1000],y[1000];
int i,len,j,f=0;
cout<<"ENTER YOUR STRING FOR CHECKING :";
cin>>x;
len=strlen(x);
strcpy(y,x);
for(i=0,j=len-1;i<=j;i++,j--)
{
	if(x[i]!=x[j])
	{
		f=1;
		break;
	}
}
cout<<"\n\n\nReverse String :"<<strrev(x);
if(f==0)
{
	cout<<"\n\n"<<y<<"is pallindrome string";
}
else
{
		cout<<"\n\n"<<y<<" is not pallindrome string";
}
        cout<<"\n\n";
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
  }

  if(chagoleer>0)
  {
      int s,rem=0,rev=0,j;
      system("cls");
      cout<<"enter your number for checking :";
      cin>>s;
      j=s;
   while(s!=0)
      {
          rem=s%10;
          rev=(rev*10)+rem;
          s=s/10;
      }
         cout<<"\n\nReverse number :  "<<rev;
        cout<<"\n\n";
        if(rev==j)
        {
            cout<<"IT IS PALINEDROME NUMBER";
        }
        else
            {
            cout<<"IT IS NOT A PALINEDROME NUMBER";
        }
      system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
  }
}

char kutta91[5000]="remove";
int suyar91,chagol91=0;
for(int i=1;(suyar91=a.find(kutta91))!=-1;i++)
{
    a=a.substr(++suyar91);
    chagol91++;
}
if(chagol91>0)
{
char a[100000],b;
int i;
system("cls");
cout<<"reading";
 Sleep(5000);
system("cls");
cout<<"ENTER YOUR WORD IS= ";
cin>>a;
cout<<"\n\nenter the character which you need to REMOVE= ";
cin>>b;
for(i=0;a[i]!='\0';i++)
{
if(a[i]==b)
{
    a[i]=' ';
}
}
cout<<"\n\n\nupdated string is  :\n\n"<<a<<"\n\n\n";
system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


char restart179721675[1000]="split";
int red12226179721675,blue12226179721675=0;
for(int t=1;(red12226179721675=a.find(restart179721675))!=-1;t++)
{
    a=a.substr(++red12226179721675);
    blue12226179721675++;
}
if( blue12226179721675==1 || blue12226179721675>1 )
{
system("cls");
cout<<"reading....";
Sleep(2000);
system("cls");
  char str[100] ;
  char  *point ;
  cout<<"\nenter the paragraph : ";
  cin.getline(str,1000);
  point = strtok (str," ,.!&$#()[{]}");
  system("cls");
  cout<<"\n";
  cout<<"spliting........";
  Sleep(4000);
  cout<<"\n\n";
  system("cls");
  cout<<"\n\n";
  while (point!= NULL)
  {
    cout<<"\t"<<point<<"\n\n";
    point = strtok (NULL, " ,.!&$#()[{]}");
  }
  cout<<"\n\n\n\n";
system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

char haram[200]="replace";
int p,flaggg=0;
for(int y=1;(p=a.find(haram))!=-1;y++)
{
    a=a.substr(++p);
    flaggg++;
}
if(flaggg>0)
{
    system("cls");
    cout<<"reading......";
    Sleep(1000);
    cout<<"\n\n\n\nSIR, You mean replacing words..";
    Sleep(7000);
    system("cls");
    string main;
    char sub1[5000];
    char sub2[6000];
    cout<<"\nenter  your  paragraph :  ";
    getline(cin,main);
    cout<<"\n\nenter your word which is present in your paragraph to search :  ";
    cin>>sub1;
    cout<<"\n\nenter your replacing word : ";
    cin>>sub2;
    for(int r=1;(p=main.find(sub1))!=-1;r++)
    {
       main.replace(p,strlen(sub2),sub2);
    }
    cout<<"\n\n\nupdated string : "<<main;
    system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}


 char sub2yyy[10000]="hello";
        int posyyy,i2yyy,f2yyy=0;
        for (int i2yyy=1;(posyyy=a.find(sub2yyy)) != -1 ;i2yyy++)
        {
                a=a.substr(++posyyy);
                f2yyy++;
        }

		if(f2yyy==1 ||  f2yyy>1)
		{
		cout<<"\nreading";
		cout<<"...";
		cout<<"...";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
        Sleep(1000);
		cout<<".";
		system("cls");
		system("color a");
		cout<<"\n\nhello sir"<<"\n\nI AM JACK . I  AM  YOUR  VIRTUAL  ASISTANT."<<"\n\nhow can I help you?\n\n";
        Sleep(5000);
		}


char haram1[200]="biswa";
int p111,flaggg1=0;
for(int y=1;(p111=a.find(haram1))!=-1;y++)
{
    a=a.substr(++p111);
    flaggg1++;
}
if(flaggg1>0)
{
system("cls");
cout<<"\n\n\t\t*** HELLO  BOSS  ***"<<"\n\t\t_______________________";
cout<<"\n\n\ngive me any order sir..............\n\n\n\n";
}

char haram11[200]="fashion";
int p1111,flaggg11=0;
for(int y=1;(p1111=a.find(haram11))!=-1;y++)
{
    a=a.substr(++p1111);
    flaggg11++;
}
if(flaggg11>0)
{
system("cls");
HWND hwnd=GetDesktopWindow();
    ShellExecuteA(hwnd,"open","https://Myntra.com",NULL,NULL,SW_SHOWMAXIMIZED);
    system("pause");
  system("cls");
system("color e");
cout<<"\n\n I think , sir you are satisfied for my answer"<<"\n\n";
cout<<"please type your next command......\n\n\n";
}

   }
return 0;
}

