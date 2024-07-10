#include<iostream>
using namespace std;
int main()
{   
    //All The Vriable Are declare Here. 

	char msg[16];                                      // This Is Use For  Message Store In [Encryption].   
	long int a[40];                                   // This Is Use to Store Encrypted Message In [Encryption].
    long int password=0,password2=0,m=0;             // "Password" is for [Encryption] and "Password 2" is for [Decryption].
    long int i,j,k,s=0;                         // [i] is use as for loop in Encryption and [j] is use as for loop in in Decryption.
	int mainmsg;

	//This Is choice Section [1 for Encryption] and [2 for Decryption].
	
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"                                Press 1 For Encryption ";
	cout<<"\n";
	cout<<"                                Press 2 For Decryption ";cin>>mainmsg;
	cout<<"\n";
	
    // This Section Is For Encryption  Only. 

	if(mainmsg==1)

   {
	 cout<<"\n";
     cout<<"\n";
	 cout<<"\n";
	 cout<<"\n";
	 cout<<"\n";
	 cout<<"\n";
  	 cout<<"                         Enter The Secreat Message  ";
	 cout<<"  ";cin>>msg;
	 cout<<"\n";
     cout<<"                         Enter Password  ";
	 cout<<"  ";cin>>password;
 	for ( i=0; i<40; i++)
	 {
 
		if (msg[i]=='a')
		{
			a[i]=62;
			s=s+1;
		cout<<password+a[i]<<",";
		}
	    if (msg[i]=='b')
		{
			a[i]=27;
			s=s+1;
		cout<<password+a[i]<<",";
		}
		if (msg[i]=='c')
		{
			a[i]=02;
			s=s+1;
		cout<<password+a[i]<<",";
		}
		if (msg[i]=='d')
		{
		    a[i]=92;
		    s=s+1;
		  cout<<password+a[i]<<",";
		}
		if (msg[i]=='e')
		{
			a[i]=42;
			s=s+1;
		cout<<password+a[i]<<",";
		}
		if (msg[i]=='f')
		{
	    	a[i]=82;
	    	s=s+1;
	    cout<<password+a[i]<<",";
		}
		if (msg[i]=='g')
		{
			a[i]=79;
			s=s+1;
		cout<<password+a[i]<<",";
		}
		if (msg[i]=='h')
		{
			a[i]=89;
			s=s+1;
		cout<<password+a[i]<<",";
		}
		if (msg[i]=='i')
		{
	    	a[i]=59;
	    	s=s+1;
		cout<<password+a[i]<<",";	
		}
		if (msg[i]=='j')
		{
			a[i]=29;
			s=s+1;
		cout<<password+a[i]<<",";
		}
		if (msg[i]=='k')
		{
	    	a[i]=69; 
	    	s=s+1;
	    cout<<password+a[i]<<",";	
		}
		if (msg[i]=='l')
		{
		    a[i]=07;
		    s=s+1;
		   cout<<password+a[i]<<","; 
		}
		if (msg[i]=='m')
		{
			a[i]=49;
			s=s+1;
		cout<<password+a[i]<<",";
		}
		if (msg[i]=='n')
		{
		    a[i]=39;
		    s=s+1;
		cout<<password+a[i]<<",";		
		}
		if (msg[i]=='o')
		{
		   a[i]=19;
		   s=s+1;
		   cout<<password+a[i]<<",";
		}
		if (msg[i]=='p')
		{
			a[i]=97;
			s=s+1;
		cout<<password+a[i]<<",";
		}
		if (msg[i]=='q')
		{
	    	a[i]=04;
	    	s=s+1;
	    cout<<password+a[i]<<",";
		}
		if (msg[i]=='r')
		{
			a[i]=54;
			s=s+1;
		cout<<password+a[i]<<",";
		}
		if (msg[i]=='s')
		{
			a[i]=74;
			s=s+1;
		cout<<password+a[i]<<",";
		}
		if (msg[i]=='t')
		{
			a[i]=47;
			s=s+1;
		cout<<password+a[i]<<",";
		}
		if (msg[i]=='u')
		{
			a[i]=24;
			s=s+1;
		cout<<password+a[i]<<",";
		}
		if (msg[i]=='v')
		{
			a[i]=84;
			s=s+1;
			cout<<password+a[i]<<",";
		}
		if (msg[i]=='w')
		{
			a[i]=64;
			s=s+1;
		cout<<password+a[i]<<",";
		}
		if (msg[i]=='x')
		{
			a[i]=94;
			s=s+1;
			cout<<password+a[i]<<",";
		}
		if (msg[i]=='y')
		{
			a[i]=34;
			s=s+1;
			cout<<password+a[i]<<",";
		}
		if (msg[i]=='z')
		{
			a[i]=14;
			s=s+1;
		cout<<password+a[i]<<",";
		}
		if (msg[i]=='A')
		{
			a[i]=91;
			s=s+1;
		cout<<password+a[i]<<",";
		} 
		if (msg[i]=='B')
		{
			a[i]=51;
			s=s+1;
		cout<<password+a[i]<<",";
		} 

		if (msg[i]=='C') 
		{
			a[i]=81;
			s=s+1;
		cout<<password+a[i]<<",";
		} 

		if (msg[i]=='D') 
		{
			a[i]=17;
			s=s+1;
		cout<<password+a[i]<<",";
		}
	
		if (msg[i]=='E') 
		{
			a[i]=31;
			s=s+1;
		cout<<password+a[i]<<",";
		}

		if (msg[i]=='F') 
		{
			a[i]=71;
			s=s+1;
		cout<<password+a[i]<<",";
		} 

		if (msg[i]=='G')
		{
			a[i]=44;
			s=s+1;
		cout<<password+a[i]<<",";
		}

		if (msg[i]=='H') 
		{
			a[i]=11;
			s=s+1;
		cout<<password+a[i]<<",";
		}

		if (msg[i]=='I')
		{
			a[i]=06;
			s=s+1;
		cout<<password+a[i]<<",";	
		} 

		if (msg[i]=='J') 
		{
			a[i]=66;
			s=s+1;
		cout<<password+a[i]<<",";
    	}
        if ( msg[i]=='K') 
		{
			a[i]=88;
			s=s+1;
		cout<<password+a[i]<<",";	
		}

		if (msg[i]=='L') 
		{
			a[i]=22;
			s=s+1;
		cout<<password+a[i]<<",";
		} 
	
		if (msg[i]=='M') 
		{
			a[i]=99;
			s=s+1;
		cout<<password+a[i]<<",";	
		} 

		if (msg[i]=='N') 
		{
			a[i]=55;
			s=s+1;
		cout<<password+a[i]<<",";	
		} 
	
		if (msg[i]=='O') 
		{
			a[i]=77;
			s=s+1;
		cout<<password+a[i]<<",";
		}
	
		if (msg[i]=='P') 
		{
			a[i]=33;
			s=s+1;
		cout<<password+a[i]<<",";
		}
	
		if (msg[i]=='Q') 
		{
			a[i]=95;
			s=s+1;
		cout<<password+a[i]<<",";
		}

		if (msg[i]=='R') 
		{
			a[i]=65;
			s=s+1;
		cout<<password+a[i]<<",";
		}

		if (msg[i]=='S') 
		{
			a[i]=35;
			s=s+1;
		cout<<password+a[i]<<",";
		}
	
		if (msg[i]=='T') 
		{
			a[i]=15;
			s=s+1;
		cout<<password+a[i]<<",";
		}
	
		if (msg[i]=='U') 
		{
			a[i]=75;
			s=s+1;
		cout<<password+a[i]<<",";
		}

		if (msg[i]=='V') 
		{
			a[i]=45;
			s=s+1;
		cout<<password+a[i]<<",";
		}
	
		if (msg[i]=='W') 
		{
			a[i]=25;
			s=s+1;
			cout<<password+a[i]<<",";
		}
	
		if (msg[i]=='X') 
		{
			a[i]=57;
			s=s+1;
		cout<<password+a[i]<<",";
		}
	
		if (msg[i]=='Y') 
		{
			a[i]=85;
			s=s+1;
		cout<<password+a[i]<<",";
		}
	
		if (msg[i]=='Z') 
		{
			a[i]=05;
			s=s+1;
			cout<<password+a[i]<<",";
		} 
	
		if(msg[i]==' ')
		{
		    a[i]=93;
		    s=s+1;
			cout<<password+a[i]<<",";	
		}
			if(msg[i]=='?')
		{
		    a[i]=96;
		    s=s+1;
			cout<<password+a[i]<<",";	
		}
		if (msg[i]=='0')	
		{
			a[i]=98;
			s=s+1;
		cout<<password+a[i]<<",";
		}
		if(msg[i]=='1')
		{	
		    a[i]=10;
		    s=s+1;
		    cout<<password+a[i]<<",";
		}
		if (msg[i]=='2')
		{
			a[i]=20;
			s=s+1;
			cout<<password+a[i]<<",";
		}
		if (msg[i]=='3')
		{
			a[i]=30;
			s=s+1;	
		cout<<password+a[i]<<",";
		}
		if (msg[i]=='4')
		{
			a[i]=40;
			s=s+1;
		cout<<password+a[i]<<",";
		}
		if (msg[i]=='5')
		{
			a[i]=50;
			s=s+1;
			cout<<password+a[i]<<",";
		}
		if (msg[i]=='6')
		{
			a[i]=60;
			s=s+1;
			cout<<password+a[i]<<",";
		}
		if (msg[i]=='7')
		{
		   a[i]=70;
		   s=s+1;
		  cout<<password+a[i]<<",";  
		}
		if (msg[i]=='8')
		{
			a[i]=80;
			s=s+1;
			cout<<password+a[i]<<",";
		}
		if (msg[i]=='9')
		{
			a[i]=90;
			s=s+1;	
		cout<<password+a[i]<<",";
		}	
	  }
 	cout<<"\n";
 	cout<<"\n";
 	cout<<"Total Number of Message = "<<s;
    }     //End of Encryption Section.
    
    
    // This Section Is For Decryption  Only. 
    
 if(mainmsg==2)
 
{
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"                                     Enter The Password ";
	cin>>password2;
	cout<<"                       Enter The Number of Your Massage ";
	cin>>m;
	int b[m];
	cout<<"Enter The Mesage one by one ";
	for( k=0; k<m; k++)
	{
		cout<<"\n";
		cin>>b[k];
		b[k]=b[k]-password2;
	}
	for( j=0; j<m; j++)
	{
     if(b[j]==62)
     {
    	cout<<"a";
	 }
     if(b[j]==27)
     {
    	cout<<"b";
	 }
     if(b[j]==02)
     {
    	cout<<"c";
	 }
     if(b[j]==92)
     {
    	cout<<"d";
 	}
     if(b[j]==42)
     {
    	cout<<"e";
	 }
     if(b[j]==82)
     {
    	cout<<"f";
 	}
     if(b[j]==79)
     {
    	cout<<"g";
  	}
     if(b[j]==89)
     {
    	cout<<"h";
 	}
     if(b[j]==59)
     {
    	cout<<"i";
 	}
     if(b[j]==29)
     {
    	cout<<"j";
 	}
      if(b[j]==69)
     {
     cout<<"k";
 	}
     if(b[j]==07)
     {
    	cout<<"l";
 	}
     if(b[j]==49)
     {
    	cout<<"m";
 	}
     if(b[j]==39)
     {
    	cout<<"n";
 	}
     if(b[j]==19)
     {
    	cout<<"o";
 	}
     if(b[j]==97)
     {
    	cout<<"p";
 	}
     if(b[j]==04)
     {
    	cout<<"q";
 	}
     if(b[j]==54)
     {
    	cout<<"r";
 	}
     if(b[j]==74)
     {
    	cout<<"s";
 	}
     if(b[j]==47)
     {
    	cout<<"t";
 	}
     if(b[j]==24)
     {
    	cout<<"u";
 	}
     if(b[j]==84)
     {
    	cout<<"v";
 	}
     if(b[j]==64)
     {
     cout<<"w";
 	}
     if(b[j]==94)
     {
     	cout<<"x";
  	}
     if(b[j]==34)
     {
    	cout<<"y";
 	}
     if(b[j]==14)
     {
    	cout<<"z";
 	}
	 if(b[j]==91)
     {
    	cout<<"A";
 	}
 	 if(b[j]==51)
     {
    	cout<<"B";
 	}
	 if(b[j]==81)
     {
    	cout<<"C";
 	}
	 if(b[j]==17)
     {
    	cout<<"D";
  	}
	 if(b[j]==31)
     {
    	cout<<"E";
 	}
	 if(b[j]==71)
     {
    	cout<<"F";
 	}
	 if(b[j]==44)
     {
    	cout<<"G";
 	}
	 if(b[j]==11)
     {
    	cout<<"H";
 	}
	 if(b[j]==06)
     {
    	cout<<"I";
 	}
	 if(b[j]==66)
     {
    	cout<<"J";
 	}
	 if(b[j]==88)
     {
    	cout<<"K";
  	}
	 if(b[j]==22)
     {
    	cout<<"L";
 	}
 	 if(b[j]==99)
     {
      	cout<<"M";
 	}
	 if(b[j]==55)
     {
    	cout<<"N";
 	}
	 if(b[j]==77)
     {
    	cout<<"O";
 	}
	 if(b[j]==33)
     {
    	cout<<"P";
 	}
	 if(b[j]==95)
     {
    	cout<<"Q";
 	}
	 if(b[j]==65)
     {
    	cout<<"R";
 	}
	 if(b[j]==35)
     {
    	cout<<"S";
 	}
	 if(b[j]==15)
     {
    	cout<<"T";
 	}
	 if(b[j]==75)
     {
    	cout<<"U";
 	}
	 if(b[j]==45)
     {
    	cout<<"V";
 	}
 	 if(b[j]==25)
     {
    	cout<<"W";
 	}
	 if(b[j]==57)
     {
    	cout<<"X";
 	}
	 if(b[j]==85)
     {
      	cout<<"Y";
 	}
     if(b[j]==05)
     {
    	cout<<"Z ";
 	}
     if(b[j]==98)
     {
    	cout<<"0";
 	}
     if(b[j]==10)
     {
    	cout<<"1";
 	}
     if(b[j]==20)
     {
    	cout<<"2";
 	}
     if(b[j]==30)
     {
    	cout<<"3";
 	}
     if(b[j]==40)
     {
    	cout<<"4";
 	}
     if(b[j]==50)
     {
    	cout<<"5";
 	}
     if(b[j]==60)
     {
    	cout<<"6";
 	 }
 	if(b[j]==70)
 	{
 	cout<<"7";	
 	}
     if(b[j]==80)
     {
    	cout<<"8";
 	}
     if(b[j]==90)
     {
     	cout<<"9";
 	}
 	if (b[j]==96)
 	{
		cout<<"?";
 	}
 	if (b[j]==93)
 	{
		cout<<" ";
 	}
     }
    } //End of Decryption Section.
}

