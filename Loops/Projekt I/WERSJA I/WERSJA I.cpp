#include <iostream>
#include <cstdlib>
#include<string>

using namespace std ; 
string projekt = "Sumowanie dowolnych liczb" ; 
string nazwa = "Krystian Kozlowski" ; 
string data = "08.07.2018" ; 
float funkcja1(float a , float b) ; 
float a , b = 0  , suma = 0 ;
int main()
{
	cout<<"Autor : \t\t\t\t"<<nazwa<<endl ; 
	cout<<"Nazwa Projektu :\t\t\t"<<projekt<<endl ; 
	cout<<"Data : \t\t\t\t\t"<<data<<endl<<endl<<endl ; 
	cout<<"Jezeli wpiszesz wartosc 0 . Program zakonczy swoje dzialanie i wypisze dotychczasowa sume cyfr"<<endl ;
    funkcja1(a ,b) ;
	cout<<"Wpisales wartosc 0 , wiec nastapil koniec programu\n" ;   
    cout<<"Suma wszystkich twoich liczb wynosi "<<suma ; 
    return 0;
}
float funkcja1(float c , float d)
{
	bool sukces ;
	c = 1 ;
	d = 0 ; 
	while(c != 0)
	{   
		cout<<"Podaj "<<d+1<<" liczbe"<<endl ; 
		cin.clear() ; 
		cin.sync() ; 
		cin>>c ; 
		d++ ;
		sukces = cin.good() ; 
		if(sukces == true)
		{
			suma+=c ; 
		}
		else
		{
			cout<<"Podales zla wartosc liczby.Sprobuj ponownie"<<endl ;
	        cout<<"Podaj "<<d+1<<" liczbe"<<endl ; 
		    cin.clear() ; 
		    cin.sync() ; 
		    cin>>c ; 
		    d++ ;
		    sukces = cin.good() ; 
		    if(sukces == true)
		    {
			    suma+=c ; 
		    }
		    else
		    {
			    cout<<"Podales zla wartosc liczby(Znak albo napis).Sprobuj ponownie"<<endl ;
		    }    
		}
	}
}
