/* Write a Program using class to process Shopping List for a Departmental Store. The list include details such as the Code No and Price of each item and perform the operations like Adding, Deleting Items to the list and Printing the Total value of a Order.  */
#include <iostream>
#include <string.h>

const int N=50;
using namespace std;
int val=0;
class Shopping_list{
	public:		
	int code_no[N];
	int price[N];		
	void add(){
		cout<<"Code no of the product\n\n";
		cin>>code_no[val];
		
		cout<<"\nPrice of the product no  "<<code_no[val]<<"\n\n";
		cin>>price[val];
		cout<<"Added sucessfully\n\n";
		val++;
		}			
		
		
		void delete_product(){
			int product_id;
			cout<<"\nEnter product id you wanna del\n";
			cin>>product_id;	
			for(int i=0;i<val;i++){
				if(product_id==code_no[i] ){
					code_no[i]=0;
					price[i]=0;
					cout<<"deleated sucessfully\n\n";
					break;		
					}	}				}
										
void show_products(){	

cout<<"\n\n\n------------------------------------------------------------\n\n";
   
	cout<<"PODUCTS ARE :- \n";
	   cout<<"\n------------------------------------------------------------\n\n";
	for(int i=0;i<val;i++){	
	if(code_no[i]==0){
		continue;
		}		
		cout<<"\n\n code no"<< code_no[i]<<"\t\t\t cost "<<price[i];	
		
			
      cout<<"\n------------------------------------------------------------\n\n";	
		}	}
int checkout(){
	int sum=0;
	for(int i=0;i<val;i++){
		sum=sum+price[i];
		}
		return sum;
	}
};
int main(){
	Shopping_list a;
	while(1){
		int end;
				
		cout<<"\n\n\n1. ADD PRODUCT\n";
		cout<<"2. DELETE PRODUCT\n";
		cout<<"3. SHOW PRODUCT\n";
		cout<<"4. CHEAK  OUT\n";
		cout<<"5. EXIT\n";	
		int ch;
		cout<<"Enter Your Choice\n";
		cin>>ch;		
		switch(ch){
			case 1 :{
				a.add();
				break;			
				}	
		   case 2 : {	
		   	a.delete_product();
		   	break;	
		   	}
		   case 3 : { 	
		   	a.show_products();
		   	break;	   	
		   	}	   	
		   case 4 : {
		   	a.show_products();
		   	cout<<"\nthe sum total is :-"<<a.checkout();
		   	   cout<<"\n------------------------------------------------------------\n\n";	
		   	   break;		   	
		   	}		   		   	
		   	case 5 :{
		   		cout<<"\n EXITING ..............";	
		   		end++;
		   		break;		   		}			
			}	
		if(end>0){			
			break;					
			}	
		
		}
	
	} 