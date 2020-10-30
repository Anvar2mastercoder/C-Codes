#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

class everything{
    public:


float add(float num1, float num2){
	
	float func_answer;
	func_answer = num2 + num1;

       return func_answer;	

}
float subtract(float num1, float num2){
	float anss;
	anss = num1 - num2;
	
	return anss;
}
float multi(float num1, float num2){
	
	float ansm;
	ansm = num2 * num1;

       return ansm;	

}
float divide(float num1, float num2){
	
	float ansd;
	ansd = num1 / num2;

       return ansd;	

}



void age() {
  int pm=9;
 int pd=14;
 int py=2019;
 int bm;
 int bd;
 int by;
 int ansb;
 int ansy;
 int ansp;
 int feb = 2;
 int twentynine = 29;
 int special;
 
 cout<<"Please enter the following information."<<endl;
 cout<<"1. Birth Month"<<endl;
 cin>>bm;
 cout<<"2. Birth Day"<<endl;
 cin>>bd;
 cout<<"3. Birth Year"<<endl;
 cin>>by;
 cout<<"Present Month"<<endl;
 cin>>pm;
 cout<<"Present Day"<<endl;
 cin>>pd;
 cout<<"Present Year"<<endl;
 cin>>py;
 
 
 ansb=pm-bm;
 ansp=pd-bd;
 ansy=py-by;
 
 if(bm > pm){
    cout<<ansy - 1<<endl; 
 }else if(bm == pm & bd == pd){
     cout<<"Today is your birthday. You are turning " << ansy << " today." <<endl;
 } else if(bm == pm & bd > pd){
     cout<< ansy - 1 <<endl;
 }else if(bm == feb & bd == twentynine){
      special = ansy / 4; 
      cout << special << endl;
 }
 
 //cout<<"Your age is " <<ans<<"."<<endl;

}

void calc() {
    int op;
    float answer;
    float num1;
    float num2;
   
	
   	cout<<"Please enter your choice."<<endl;
	cout<<"1. Add"<<endl;
	cout<<"2. Subtract"<<endl;
    	cout<<"3. Multiply"<<endl;
    	cout<<"4. Divide"<<endl;
    	cin>>op;
    	/*cout<<"Enter number 1."<<endl;
    cin>>num1;
    cout<<"Enter number 2."<<endl;
    cin>>num2;
    if(op==1) {
        ans=num1+num2;
    }else if(op==2) {
        ans=num1-num2;
    }else if(op==3) {
        ans=num1*num2;
    }else if(op==4) {
        ans=num1/num2;
    }else{
        cout<<"Error"<<endl;
    }
    cout<<"The answer is "<<ans<<"."<<endl;
    */    
	cout<<"Type Number 1"<<endl;
	cin>> num1;
	cout<<"Type Number 2"<<endl;
	cin>> num2;
	if(op == 1){
	    	answer = add(num1, num2);
	}else if(op == 2){
    		answer = subtract(num1, num2);
	}else if(op == 3){
    		answer = multi(num1, num2);
	}else if(op == 4){
    		answer = divide(num1, num2);
	}
	cout<< "The answer is " << answer <<endl;

}

void bmi() {
    int h;
int w;
float ans;

cout<<"Please answer the following questions."<<endl;
cout<<"Enter your height."<<endl;
cin>>h;
cout<<"Enter your weight."<<endl;
cin>>w;

ans=h*w;
cout<<"Answer"<<endl;
cout<<ans<<endl;
}

void addTwo() {
    long ans = 7;
   long j;
   long i;
   
   cout<<"      'PS It won't work if you put a number for j or i above 50.'     hello bye!!!!!!!!!!!!!"<<endl;
   cout<<"What is number j? "<<endl;
   cin>>j;
   cout<<"What is number i? "<<endl;
   cin>>i;
    
    for(long i=0; i < 50; i=i+2)
    {
        cout<<""<<endl;
    
        for(long j=0; j<50; j=j+2) 
        {
            cout<<""<<endl;
            ans=j+i;
            cout<<"Answer"<<endl;
            cout<<ans<<endl;
        }
    }
}

void sign() {
    string pass = "Hellobaby";
    string pasw = "Hretggfkk";
    string user = "fffffffff";
    string usew = "hhjjkjjkj";

    cout<<"Create your account"<<endl;
    cout<<"Make your Password"<<endl;
    cin>>pass;
    
    while(pass != pasw) {
     cout<<"Write your password down"<<endl;
    cin>>pasw;
    
    if(pasw == pass) {
        cout<<"Correct Password"<<endl;
    }else if(pasw < pass || pasw > pass) {
        cout<<"Wrong password TRY AGAIN!!!"<<endl;
    }
    }
}

void xplusy() {
    /*This is about
    taking x and y
    adding them
    and comparing
    them to z
    */
    //x and y added
    long y;
    long x;
    //compare to x and y added
    long z;
    //answer to the adding
    long ans;
    
    //asking for number x
    cout<<"Number x"<<endl;
    cin>>x;
    
    //asking for number y
    cout<<"Number y"<<endl;
    cin>>y;
    
    //asking for number z
    cout<<"Number z"<<endl;
    cin>>z;
    
    //adding y+x
    ans=y+x;
    
    //comparing x and y to z
    //checing if z is equal to x and y.
    if(ans == z) {
        cout<<z<<" is equal to "<<ans<<"."<<endl;
        //checking if x and y are greater than z.
    }else if(ans > z) {
        cout<<z<<" is less than "<<ans<<"."<<endl;
        //checking if x and y are less than z.
    }else if(ans < z) {
        cout<<z<<" is greater than "<<ans<<"."<<endl;
        //if there is something that can't be done showing there input was a error
    }else{
        cout<<"ERROR!!!"<<endl;
    }
}

void small(){
        long min;
    long num[5];
        
    cout<<"Enter 5 numbers."<<endl;
    
    for(int x = 0; x < 5; x++){
        cin>>num[x];
        
    }
        min = num[0];
    for(int x = 0; x < 5; x++){
        if(num[x] < min){
            min = num[x];
        }
    }
    
    cout<<"The smallest number is "<<min<<". \n";
}

void big(){
        long min;
    long num[5];
        
    cout<<"Enter 5 numbers."<<endl;
    
    for(int x = 0; x < 5; x++){
        cin>>num[x];
        
    }
        min = num[0];
    for(int x = 0; x < 5; x++){
        if(num[x] > min){
            min = num[x];
        }
    }
    
    cout<<"The biggest number is "<<min<<". \n";
}

void mathquiz(){
        long count = 5;
        long score = 0;
        long num1;
        long num2;
        long answer = 0;;
        
        srand (time(NULL));
        
        for(int i = 0; i < count; i++){
                num1 = rand() %1000 + 1;
                num2 = rand() %100 + 1;
                
                cout<<"What is "<<num1<<" + "<<num2<<"? "<<endl;
                cin>>answer;
                
                
                long correct = num1 + num2;
                
                if(correct == answer){
                        cout<<answer<<" is Correct"<<endl;
                        score = score + 1;
                }else{
                        cout<<answer<<" is Wrong "<<correct<<" is the answer."<<endl;
                }
                
        }
        cout<<"Score"<<endl;
        cout<<score<<"/"<<count<<endl;
}

/*
void numgameworse(){
                //making sure they can type their guess
                long choice;
                
                //making sure the number changes
                srand (time(NULL));
                
                //generating the number
                long num = rand() %100 + 1;
                
                //asking their number
                cout<<"Guess my number it's between 1 - 100."<<endl;
                cin>>choice;
                
                //checking if it's the correct number
                if(choice == num){
                        cout<<"CORRECT!! That's the correct answer."<<endl;
                }else if(choice > num || choice < num){
                        cout<<num<<" is the correct answer. You got it WRONG!!!"<<endl;
                }
    
}
*/
void mathquiz2(){
           string m = "Multipacation";
   string a = "Addition";
   string s = "Subtraction";
   string d = "Division";
   string choice;
   //asking what kind of quiz they want
   cout<<"Choose Addition, Subtraction, Multipacation, or Division."<<endl;
   cin>>choice;
   //making the addition quiz
   if(choice == a){
        long count = 5;
        long score = 0;
        long num1;
        long num2;
        long answer = 0;
        
        srand (time(NULL));
        
        for(int i = 0; i < count; i++){
                num1 = rand() %1000 + 1;
                num2 = rand() %100 + 1;
                
                cout<<"What is "<<num1<<" + "<<num2<<"? "<<endl;
                cin>>answer;
                
                
                long correct = num1 + num2;
                
                if(correct == answer){
                        cout<<answer<<" is Correct"<<endl;
                        score = score + 1;
                }else{
                        cout<<answer<<" is Wrong "<<correct<<" is the answer."<<endl;
                }
                
        }
        cout<<"Score"<<endl;
        cout<<score<<"/"<<count<<endl;
        //making the subtraction quiz
   }else if(choice == s){
        long count = 5;
        long score = 0;
        long num1;
        long num2;
        long answer = 0;
        
        srand (time(NULL));
        
        for(int i = 0; i < count; i++){
                num1 = rand() %10000 + 1;
                num2 = rand() %100 + 1;
                
                cout<<"What is "<<num1<<" - "<<num2<<"? "<<endl;
                cin>>answer;
                
                
                long correct = num1 - num2;
                
                if(correct == answer){
                        cout<<answer<<" is Correct"<<endl;
                        score = score + 1;
                }else{
                        cout<<answer<<" is Wrong "<<correct<<" is the answer."<<endl;
                }
                
        }
        cout<<"Score"<<endl;
        cout<<score<<"/"<<count<<endl;
        //making the multipacation quiz
   }else if(choice == m){
        long count = 5;
        long score = 0;
        long num1;
        long num2;
        long answer = 0;
        
        srand (time(NULL));
        
        for(int i = 0; i < count; i++){
                num1 = rand() %10000 + 1;
                num2 = rand() %100 + 1;
                
                cout<<"What is "<<num1<<" x "<<num2<<"? "<<endl;
                cin>>answer;
                
                
                long correct = num1 * num2;
                
                if(correct == answer){
                        cout<<answer<<" is Correct"<<endl;
                        score = score + 1;
                }else{
                        cout<<answer<<" is Wrong "<<correct<<" is the answer."<<endl;
                }
                
        }
        cout<<"Score"<<endl;
        cout<<score<<"/"<<count<<endl;
        //making the quiz for division
   }else if(choice == d){
        long count = 5;
        long score = 0;
        long num1;
        long num2;
        long answer = 0;
        
        srand (time(NULL));
        
        for(int i = 0; i < count; i++){
                num1 = rand() %10000 + 1;
                num2 = rand() %100 + 1;
                
                cout<<"What is "<<num1<<" divided by "<<num2<<"? "<<endl;
                cin>>answer;
                
                        
                long correct = num1 / num2;
                
                if(correct == answer){
                        cout<<answer<<" is Correct"<<endl;
                        score = score + 1;
                }else{
                        cout<<answer<<" is Wrong "<<correct<<" is the answer."<<endl;
                }
                
        }
        cout<<"Score"<<endl;
        cout<<score<<"/"<<count<<endl;
   }else{
           cout<<"ERROR!!!"<<endl;
   }
}

void numgame(){
    int tries = 1;
        int guess;
        string password;
        string password2 = "ASDFGHJKL;asdfghjkl'";
        string yes = "yes";
        string no = "no";
        string ch;
        
        srand(time(NULL));
        long num = rand() %100 + 1;
        
        cout<<"Do you want to know the secret number yes or no?"<<endl;
        cin>>ch;
        
        if(ch == yes){
            cout<<"What is the password?"<<endl;
            cin>>password;
            
            if(password == password2){
                cout<<"The secret number is "<<num<<"."<<endl;
            }
        }else{
         cout<<"Guess my number."<<endl;
        cin>>guess;
        
        
        
        cout<<""<<endl;
        
        while(guess != num){
                tries = tries + 1;
                
        
        if(guess == num){
                
                cout<<"Great Job!! Now its party time."<<endl;
        }else if(guess < num){
                
                cout<<"Too Low Try Again"<<endl;
        }else if(guess > num){
                
                cout<<"Too High Try Again"<<endl;
        }
        cout<<"Guess my number."<<endl;
        cin>>guess;
        }
        cout<<"You took "<<tries<<" tries to get the number."<<endl;
        
        }
        
        for(long j = 0; j < 100; j++){
            cout<<""<<endl;
        }
        
        cout<<"Guess my number."<<endl;
        cin>>guess;
        
        
        
        cout<<""<<endl;
        
        while(guess != num){
                tries = tries + 1;
                
        
        if(guess == num){
                
                cout<<"Great Job!! Now its party time."<<endl;
        }else if(guess < num){
                
                cout<<"Too Low Try Again"<<endl;
        }else if(guess > num){
                
                cout<<"Too High Try Again"<<endl;
        }
        cout<<"Guess my number."<<endl;
        cin>>guess;
        }
        cout<<"You took "<<tries<<" tries to get the number."<<endl;
        
}

void menu(){
    string main;
    string veggiesfruits;
    string desert;
    string drinks;
    string main1 = "Fish";
    string main2 = "Chicken";
    string veg = "Califlower";
    string desert1 = "Chocolate";
    string fruit = "Apple";
    string desert2 = "Baklava";
    string drinks1 = "Lemonade";
    string drinks2 = "Soda";
    long price;
    
    cout<<"Main Dish \n Fish $90        Chicken $20"<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    
    if(main == main1){
        price = 90;
        cout<<"You chose Fish."<<endl;
    }else{
        price = 20;
        cout<<"You chose Chicken."<<endl;
    }
    cout<<""<<endl;
    
    cout<<"Choose 1 food from the Veggies or Fruits set."<<endl;
    cin>>veggiesfruits;
    cout<<""<<endl;
    
    if(veggiesfruits == veg){
        price = price + 30;
        cout<<"You chose Califlower."<<endl;
    }else{
        price = price + 20;
        cout<<"You chose Apple."<<endl;
    }
    cout<<""<<endl;
    
    cout<<"Choose 1 food from the Desert set."<<endl;
    cin>>desert;
    cout<<""<<endl;
    
    if(desert == desert1){
        price = price + 40;
        cout<<"You chose Chocolate."<<endl;
    }else{
        price = price + 30;
        cout<<"You chose Bakalava."<<endl;
    }
    cout<<""<<endl;
    
    cout<<"Choose 1 food from the Drinks set."<<endl;
    cin>>drinks;
    cout<<""<<endl;
    
    if(drinks == drinks1){
        price = price + 1;
        cout<<"You chose Lemonade."<<endl;
    }else{
        price = price + 30;
        cout<<"You chose Soda."<<endl;
    }
    
    cout<<"You have to pay $"<<price<<"."<<endl;

}

void swap(){
    //first letter , second letter, and las t letter
    string fir;
    string mid;
    string las;
    string fl;
    //letters
    cout<<"Type 1 word."<<endl;
    cin>>fir;
    
    cout<<"Type another letter."<<endl;
    cin>>mid;
    cout<<"Type one last letter."<<endl;
    cin>>las;
    
    /*
    Something I need to memorize
    a = b; makes b's value go to a
    The value on the right goes over to the value on the left
    */
    //swapping
    fl = fir;
    fir = las;
    las = fl;
    //out putting the letters
    cout<<"Your word written oppisite is "<<fir<<mid<<las<<"."<<endl;
}

};

class security{
	public:
	void login(){
	
	everything test;
	security testt;
		string empty = "";
		string pass;
		string pasw;
		string newpass;
		string checkpass;
		string changepass;
		string wpass;
	
		ifstream pas("password.txt");
		while(getline(pas, pass)){
			pasw = pass;
		}
		if(pasw == empty){
			cout<<"Please make a password."<<endl;
			cin>>newpass;
			
			ofstream fout("password.txt");
			fout << newpass << endl;
			fout.close();
		}else{
			cout<<"Type your password."<<endl;
			cin>>checkpass;
			if(checkpass == pasw){
				cout<<"Your Logged in. Enjoy the projects. \nWould you like to change your password?[Y/N]"<<endl;
				cin>>wpass;
			if(wpass == "Y" || wpass = "y"){
				cout<<"Your new password please."<<endl;
				cin>>newpass;
				ofstream fout("password.txt");
				fout << newpass << endl;
				fout.close();
			}else{
				int sel;
    				cout<<"Choose either 1. Number Game, 2. Math Quiz, 3. Age Calculator, 4. Restaurant Menu, 5. Calculator, 6. Biggeset Number, \n 7. Smallest Number, 8. Add then Compare, 9. Adding, 10. Sign - in page, or 11. BMI\n 12. Swap \n You have to type exactly the same number matched to what you want."<<endl;
    				cin>>sel;
    				cout<<"You selected : "<<sel<<endl;
    				if(sel == 1){
    				    test.numgame();
    				}
    				else if(sel == 2)
   				{
        				cout<<"Math Quiz Time!!!"<<endl;
 	 				test.mathquiz2();
    				}
    else if(sel == 3){
        test.age();
    }
    else if(sel == 4){
        test.menu();
    }
    else if(sel == 5){
        test.calc();
    }
    else if(sel == 6){
        test.big();
    }
    else if(sel == 7){
        test.small();
    }
    else if(sel == 8){
        test.xplusy();
    }
    else if(sel == 9){
        test.addTwo();
    }
    else if(sel == 10){
        test.sign();
    }
    else if(sel == 11){
        test.bmi();
    }else if(sel == 12){
       test.swap(); 
    }
			}
		}else{
			cout << "Wrong Password" << endl;
		}
	}
	}
};

int main(){
	everything test;
	security testt;

	testt.login();

	
}
