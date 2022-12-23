#include <iostream>
#include<conio.h>
using namespace std;
int acsii = 178;
char ch= acsii,i=0;

struct Stock
{
int id;
float price,expiry;
string name, manufacturer;
}stock[20];
//Heading function
 void headline(){
 	cout<<"\n";
    for (int m = 1; m < 26; m++)
    {
        cout<<ch;
	}
	cout<<" SUPERMART STOCK RECORD";
        for (int i = 1; i < 26; i++)
    {
        cout<<ch;
    }
 }
 
//Insert Item in Stock
void insert()
{
	system("cls");
	headline();
	cout<<"\n\n Enter Product's ID ->";
	cin>>stock[i].id;
	cout<<"\n\n Enter Product's name ->";
	cin>>stock[i].name;
	cout<<"\n\n Enter Product's Manufacturere Name' ->";
	cin>>stock[i].manufacturer;
	cout<<"\n\n Enter Product's Price' ->";
	cin>>stock[i].price;
	cout<<"\n\n Enter Product's Expiry Date ->";
	cin>>stock[i].expiry;
	i++;
	 cout<<"\n\n "<<ch<<ch<<"Product inserted in Stock record !"<<ch<<ch;
}
//Searching the Item
void search()
{
	system("cls");
	headline();
	if(i ==0)
	{
		cout<<"\n\n "<<ch<<ch<<"Record is Empty !"<<ch<<ch;
	}
	else {
		int p_id,found=0;
			cout<<"\n\n "<<ch<<ch<<"Enter Product ID for Search ->"<<ch<<ch;
			cin>>p_id;
			
			for(int position=0;position<i;position++){
				if(p_id == stock[position].id){
					cout<<"\n\n "<<ch<<ch<<"Product Found !"<<ch<<ch;
					cout<<"\n\n Product Name ->"<<stock[position].name;
					cout<<"\n\n Product's Manufacturer Name ->"<<stock[position].manufacturer;
					cout<<"\n\n Product's Price ->"<<stock[position].price;
					cout<<"\n\n Product's Expiry Date ->"<<stock[position].expiry;
					found++;
					break;
				}
			}
			if(found == 0){
				cout<<"\n\n "<<ch<<ch<<"Product Not found !"<<ch<<ch;
			}
	}
}
//Update Item
void update()
{
	system("cls");
	headline();
	if(i ==0)
	{
		cout<<"\n\n "<<ch<<ch<<"Record is Empty !"<<ch<<ch;
	}
	else {
		int p_id,found=0;
			cout<<"\n\n "<<ch<<ch<<"Enter Product ID for Update ->"<<ch<<ch;
			cin>>p_id;
			
			for(int position=0;position<i;position++){
				if(p_id == stock[position].id){
					cout<<"\n\n "<<ch<<ch<<"Product Found !"<<ch<<ch;
					cout<<"\n\n Enter Product's name ->";
					cin>>stock[position].name;
					cout<<"\n\n Enter Product's Manufacturere Name' ->";
					cin>>stock[position].manufacturer;
					cout<<"\n\n Enter Product's Price' ->";
					cin>>stock[position].price;
					cout<<"\n\n Enter Product's Expiry Date ->";
					cin>>stock[position].expiry;
						cout<<"\n\n "<<ch<<ch<<"Record Updated Succesfully !"<<ch<<ch;
					found++; 
					break;
				}
			}
			if(found == 0){
				cout<<"\n\n "<<ch<<ch<<"Product Not found !"<<ch<<ch;
			}
	}
}
//Remove Item
void remove()
{
	system("cls");
	headline();
	if(i ==0)
	{
		cout<<"\n\n "<<ch<<ch<<"Record is Empty !"<<ch<<ch;
	}
	else {
		int p_id,found=0;
			cout<<"\n\n "<<ch<<ch<<"Enter Product ID for Deletion ->"<<ch<<ch;
			cin>>p_id;
			
			for(int position=0;position<i;position++){
				if(p_id == stock[position].id){
					for(int next_pos=position;next_pos<i;next_pos++){
						
						stock[next_pos].id= stock[next_pos+1].id;
						stock[next_pos].name= stock[next_pos+1].name;
						stock[next_pos].manufacturer= stock[next_pos+1].manufacturer;
						stock[next_pos].price= stock[next_pos+1].price;
						stock[next_pos].expiry= stock[next_pos+1].expiry;
					}
					cout<<"\n\n "<<ch<<ch<<"Product removed Succesfully !"<<ch<<ch;
					found++;
					i--;
					break;
				}
			}
			if(found == 0){
				cout<<"\n\n "<<ch<<ch<<"Product Not found !"<<ch<<ch;
			}
	}
}
//Show all Items

void show()
{
	system("cls");
	headline();
	if(i ==0)
	{
		cout<<"\n\n "<<ch<<ch<<"Record is Empty !"<<ch<<ch;
	}
	else {
			for(int position=0;position<i;position++){
				cout<<"\n\n Product ID ->"<<stock[position].id;
				cout<<"\n\n Product Name ->"<<stock[position].name;
				cout<<"\n\n Product's Manufacturer Name ->"<<stock[position].manufacturer;
				cout<<"\n\n Product's Price ->"<<stock[position].price;
				cout<<"\n\n Product's Expiry Date ->"<<stock[position].expiry<<"\n\n ";
				for(int m=1;m<=20;m++){
				
				cout<<ch;
			}
			} 
				}
	
}
main(){
	
	p:
	system ("cls");
	int choice;
    headline();
    
    		cout<<"\n\n"<<ch<<ch<<"1. Insert Item in Stock";
    		cout<<"\n\n"<<ch<<ch<<"2. Search Item in Stock";
    		cout<<"\n\n"<<ch<<ch<<"3. Update Item in Stock";
    		cout<<"\n\n"<<ch<<ch<<"4. Remove Item in Stock";
    		cout<<"\n\n"<<ch<<ch<<"5. Show all Items in Stock";
    		cout<<"\n\n"<<ch<<ch<<"6. Exit\n\n ";
    
     for (int i = 1; i < 26; i++)
    {
        cout<<ch;
    	
    }
    cout<<"\n\n "<<ch<<ch<<"Enter your Choice: "<<ch<<ch;
    cin>>choice;
    switch (choice) {
    	case 1:
    		insert();
    		break;
    	case 2:
    		search();
    		break;
    	case 3:
    		update();
    		break;
    	case 4:
    		remove();
    		break;
    	case 5:
    		show();
    		break;
    	case 6:
    		exit(0);
    	default:
    		cout<<"\n\n "<<ch<<ch<<" Please select a valid choice"<<ch<<ch;
    		
	}
	
	getch();
	goto p;
}
