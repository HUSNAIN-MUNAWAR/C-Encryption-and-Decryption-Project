#include<iostream>
using namespace std;
int main()
{
	int m,password,i;
    cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"Enter The Password ";
	cin>>password;
	cout<<"Enter The Number of Your Massage ";
	cin>>m;
	int a[m];
	cout<<"Enter The Mesage one by one ";
	for(int j=0; j<m; j++)
	{
		cout<<"\n";
		cin>>a[j];
		a[j]=a[j]-password;
	}
	for(i=0; i<m; i++)
	{
     if(a[i]==62)
     {
    	cout<<"a";
	 }
     if(a[i]==27)
     {
    	cout<<"b";
	 }
     if(a[i]==02)
     {
    	cout<<"c";
	 }
     if(a[i]==92)
     {
    	cout<<"d";
 	}
     if(a[i]==42)
     {
    	cout<<"e";
	 }
     if(a[i]==82)
     {
    	cout<<"f";
 	}
     if(a[i]==79)
     {
    	cout<<"g";
  	}
     if(a[i]==89)
     {
    	cout<<"h";
 	}
     if(a[i]==59)
     {
    	cout<<"i";
 	}
     if(a[i]==29)
     {
    	cout<<"j";
 	}
      if(a[i]==69)
     {
     cout<<"k";
 	}
     if(a[i]==07)
     {
    	cout<<"l";
 	}
     if(a[i]==49)
     {
    	cout<<"m";
 	}
     if(a[i]==39)
     {
    	cout<<"n";
 	}
     if(a[i]==19)
     {
    	cout<<"o";
 	}
     if(a[i]==97)
     {
    	cout<<"p";
 	}
     if(a[i]==04)
     {
    	cout<<"q";
 	}
     if(a[i]==54)
     {
    	cout<<"r";
 	}
     if(a[i]==74)
     {
    	cout<<"s";
 	}
     if(a[i]==47)
     {
    	cout<<"t";
 	}
     if(a[i]==24)
     {
    	cout<<"u";
 	}
     if(a[i]==84)
     {
    	cout<<"v";
 	}
     if(a[i]==64)
     {
     cout<<"w";
 	}
     if(a[i]==94)
     {
     	cout<<"x";
  	}
     if(a[i]==34)
     {
    	cout<<"y";
 	}
     if(a[i]==14)
     {
    	cout<<"z";
 	}
	 if(a[i]==91)
     {
    	cout<<"A";
 	}
 	 if(a[i]==51)
     {
    	cout<<"B";
 	}
	 if(a[i]==81)
     {
    	cout<<"C";
 	}
	 if(a[i]==17)
     {
    	cout<<"D";
  	}
	 if(a[i]==31)
     {
    	cout<<"E";
 	}
	 if(a[i]==71)
     {
    	cout<<"F";
 	}
	 if(a[i]==44)
     {
    	cout<<"G";
 	}
	 if(a[i]==11)
     {
    	cout<<"H";
 	}
	 if(a[i]==06)
     {
    	cout<<"I";
 	}
	 if(a[i]==66)
     {
    	cout<<"J";
 	}
	 if(a[i]==88)
     {
    	cout<<"K";
  	}
	 if(a[i]==22)
     {
    	cout<<"L";
 	}
 	 if(a[i]==99)
     {
      	cout<<"M";
 	}
	 if(a[i]==55)
     {
    	cout<<"N";
 	}
	 if(a[i]==77)
     {
    	cout<<"O";
 	}
	 if(a[i]==33)
     {
    	cout<<"P";
 	}
	 if(a[i]==95)
     {
    	cout<<"Q";
 	}
	 if(a[i]==65)
     {
    	cout<<"R";
 	}
	 if(a[i]==35)
     {
    	cout<<"S";
 	}
	 if(a[i]==15)
     {
    	cout<<"T";
 	}
	 if(a[i]==75)
     {
    	cout<<"U";
 	}
	 if(a[i]==45)
     {
    	cout<<"V";
 	}
 	 if(a[i]==25)
     {
    	cout<<"W";
 	}
	 if(a[i]==57)
     {
    	cout<<"X";
 	}
	 if(a[i]==85)
     {
      	cout<<"Y";
 	}
     if(a[i]==05)
     {
    	cout<<"Z ";
 	}
     if(a[i]==98)
     {
    	cout<<"0";
 	}
     if(a[i]==10)
     {
    	cout<<"1";
 	}
     if(a[i]==20)
     {
    	cout<<"2";
 	}
     if(a[i]==30)
     {
    	cout<<"3";
 	}
     if(a[i]==40)
     {
    	cout<<"4";
 	}
     if(a[i]==50)
     {
    	cout<<"5";
 	}
     if(a[i]==60)
     {
    	cout<<"6";
 	 }
 	if(a[i]==70)
 	{
 	cout<<"7";	
 	}
     if(a[i]==80)
     {
    	cout<<"8";
 	}
     if(a[i]==90)
     {
     	cout<<"9";
 	}
 	if (a[i]==96)
 	{
		cout<<"?";
 	}
 	if (a[i]==93)
 	{
		cout<<" ";
 	}
    }
}
