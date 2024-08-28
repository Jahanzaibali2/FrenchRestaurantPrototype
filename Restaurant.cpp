#include<iostream>
#include<string>
#include<fstream>

using namespace std;
int cnt;
int bill(string ch);
int prices[100];
string names[100];

struct date{
	int dd,mm,yy;	 
};

string getname(){
	cout<<"\t\t\t\t\tWELCOME TO OUR RESERVATION PROGRAM \n\n";
	string n;
	cout<<"Enter Your Full Name: ";
	getline(cin,n);
	return n; 
}

date day(){
	int rep;
 	date temp;
 	cout<<"Enter reservation (day/month/year): ";
	do{
	cin>>temp.dd;
	cin>>temp.mm;
	cin>>temp.yy;
	if((temp.dd>31 ||temp.dd<1)||(temp.mm>12 ||temp.mm<1)||(temp.yy<2022)){
	cout<<"Invalid Date!\n""Enter reservation (day/month/year): ";	
	rep = -1;
	}
	else rep = 1;
	}
	while(rep==-1);
	system("CLS");
	return temp;
 }
 
int time()
{
	int t;
	char c;
	x:   	
	cout<<"Enter your time (in 24 hour format [eg. 0300 for 3am]) for reservation: ";
	cin>>t;
	if(t<0 || t>2400){
		cout<<"Invalid Time!!!\n";
		goto x;
	}
	if (t<=1800 && t>=0600){
		cout<<"Restaurant closed. Reservation not possible.\nWould you like to visit another time?(y/n): ";
		cin>>c;
		if(c == 'y')
		{
			goto x;
		}
		else{
			exit(0);
		}	
	}
	system("CLS");
	return t;	
 	
 }
  
 
void MENU()
{	
	string ch;
	cnt = 0;
	while(ch != "0")
	{	
		cout<<"======================================================="<<endl;
		cout<<" 			  MENU"<<endl;
		cout<<"=======================================================\n\n"<<endl;
	cout<<" 			STARTERS \n\n";
	cout<<"1. Cheese sticks - 799		| 2. Walnut soup - 1299\n";
	cout<<"3. Mushroom stew - 1499		| 4. Ukrainian Salad - 699\n"<<endl;
	cout<<" 			MAIN COURSE \n\n"	;	
	cout<<"5. Bouillabaisse - 1799		| 6. Chicken confit - 1999\n";
	cout<<"7. Ratatoullie - 1499		| 8. Boeuf Bourguignon - 2699\n\n"<<endl;
	cout<<" 			DESSERTS \n\n";
	cout<<"9. Hazelnut dacquoise - 2599	| 10. Paris-brest - 3999\n";
	cout<<"11. Croquembouche  - 2999	| 12. Tarte tatin - 3699\n\n"<<endl;
	cout<<" 			BEVERAGES \n\n";
	cout<<"13. L'eau - 599			| 14. Diabolo - 999\n";
	cout<<"15. Perrier  - 999		| 16. Breizh Cola - 699\n\n"<<endl;
	cout<<" 			HOT BEVERAGES \n\n";
	cout<<"17. Le Th� - 399		| 18. La Tisane - 899\n";
	cout<<"19. Un Petit Caf�  - 1299	| 20. Un Th� Vert - 299\n\n"<<endl;
	cout<<"Note: Press 0 to exit menu"<<endl;
	cout<<"Enter the S.no of item from the menu to place it on cart: "<<endl;
	cin >> ch;
	system("CLS");
	bill(ch);
	}
	
}

int bill(string ch){
	
	
	if (ch == "1")
	{
		names[cnt] = "Cheese sticks";
		prices[cnt] = 799;
	}
	else if (ch == "2")
	{
		names[cnt] = "Walnut soup";
		prices[cnt] = 1299;
	}	
	else if (ch == "3")
	{
		names[cnt] = "Mushroom stew";
		prices[cnt] = 1499;
	}
	else if (ch == "4")
	{
		names[cnt] = "Ukrainian Salad";
		prices[cnt] = 699;
	}
	else if (ch == "5")
	{
		names[cnt] = "Bouillabaisse";
		prices[cnt] = 1799;
	}
	else if (ch == "6")
	{
		names[cnt] = "Chicken confit";
		prices[cnt] = 1999;
	}
	else if (ch == "7") 
	{
		names[cnt] = "Ratatoullie";
		prices[cnt] = 1499;
	}
	else if (ch == "8")
	{
		names[cnt] = "Boeuf Bourguignon";
		prices[cnt] = 2699;
	}
	else if (ch == "9")
	{
		names[cnt] = "Hazelnut dacquoise";
		prices[cnt] = 2599;
	}
	else if (ch == "10")
	{
		names[cnt] = "Paris-brest";
		prices[cnt] = 3999;
	}
	else if (ch == "11")
	{
		names[cnt] = "Croquembouche";
		prices[cnt] = 2999;
	}
	else if (ch == "12")
	{
		names[cnt] = "Tarte tatin ";
		prices[cnt] = 3699;
	}
	else if (ch == "13")
	{
		names[cnt] = "L'eau";
		prices[cnt] = 599;
	}
	else if (ch == "14")
	{
		names[cnt] = "Diabolo";
		prices[cnt] = 999;
	}
	else if (ch == "15")
	{
		names[cnt] = "Perrier";
		prices[cnt] = 999;
	}
	else if (ch == "16")
	{
		names[cnt] = "Breizh Cola";
		prices[cnt] = 699;
	}
	else if (ch == "17")
	{
		names[cnt] = "Le Th�";
		prices[cnt] = 399;
	
	}
	else if (ch == "18")
	{
		names[cnt] = "La Tisane";
		prices[cnt] = 899;
	
	}
	else if (ch == "19")
	{
		names[cnt] = "Un Petit Caf�";
		prices[cnt] = 1299;
		
	}
	else if (ch == "20")
	{
		names[cnt] = "Un Th� Vert";
		prices[cnt] = 299;
		
	}
	else if(ch == "0")
	{
		goto here;
	}
	cnt++;
	here:
	return 0;	
}

	char Restaurant()
	{
	char c='7';
	cout<<"Select the Restaurant you want to book: \n";
	cout<<"1. Bon App�tit Paris\n2. Le Fouquet's\n3. Affinite\n";
	cout<<"Press the S.no of following Restaurant you want to Order from. ";
	while (c != '1' && c != '2' && c != '3')
	{
	cin>>c;
	if (c != '1' && c != '2' && c != '3')
	{
		cout<<"Restaurant not found!!!\n";
	} 
	}
	system("CLS");
	return c;
}

void RECEIPT(string name, date d, int time, char res)
{
	system("CLS");
	int total = 0;
	
	if(res == '1')
	{
		cout<<"\t\tBon Appetit Paris"<<endl<<endl<<endl;
	}
	else if(res == '2')
	{
		cout<<"\t\tLe Fouquet's"<<endl<<endl<<endl;
	}
	else if(res == '3')
	{
		cout<<"\t\tAffinite"<<endl<<endl<<endl;
	}
	cout<<"Date: "<<d.dd<<"/"<<d.mm<<"/"<<d.yy<<endl<<endl;
	cout<<"Reservation Time: "<<time<<endl<<endl;
	cout<<"Customer Name: "<<name<<endl<<endl<<endl;

	cout<<"ITEMS                       	  PRICE\n"<<endl;
	for(int i=0;i<cnt;i++)
	{
	total = total + prices[i];
		cout<<names[i]<<"                         "<<prices[i]<<endl<<endl;
	}
	cout<<"\n\nTOTAL:  $"<<total<<endl<<endl;
	cout<<"THANK YOU FOR ORDERING\n"<<endl;
	cout<<"VISIT OUR WEBSITE www.abcdefgh.com.fr\n"<<endl;
	
}
int main ()
 {	
 	string name;
	date d;
	int tym;
	char res;
	name = getname();
	d = day();
	tym = time();
	res = Restaurant();
	MENU();
	RECEIPT(name,d,tym,res);
			
}