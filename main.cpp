#include <iostream>

using namespace std; 
int main() {
  cout<<endl<<"This is a four function calculator. "<<endl;
  double ans;
  int operate;
  double num1;
  double num2;
  cout<<endl<<"please enter the first number."<<endl;
  cin>>num1;
  while(num1==0){
    cout<<"0 cannot be one of the numbers please enter an alternative"<<endl;
    cin>>num1;
  }
  cout<<"please enter the second number."<<endl;
  cin>>num2;
  while(num2==0){
    cout<<"0 cannot be one of the numbers please enter an alternative"<<endl;
    cin>>num2;
  }
  cout<<"please enter 1 if you want to add the two numbers, 2 for subtraction, 3 for multiplication, and 4 for division."<<endl;
  cin>>operate;
  while(operate>4){
    cout<<endl<<"please enter a number 1-4 only. 1 if you want to add the two numbers, 2 for subtraction, 3 for multiplication, and 4 for division."<<endl;
    cin>>operate;
  }
  while(operate<1){
    cout<<endl<<"please enter a number 1-4 only. 1 if you want to add the two numbers, 2 for \n subtraction, 3 for multiplication, and 4 for division."<<endl;
    cin>>operate;
  }
  if (operate==1){
    ans= num1+num2;
  }
  else if (operate==2){
    ans=num1-num2;
  }
  else if (operate==3){
    ans= num1*num2;
  }
  else if (operate==4){
    ans= num1/num2;
  }

  cout<<"The answer to the problem is "<<ans<<"."<<endl;
  // question number 2
  cout<<endl<<"This will tell which of the two numbers you choose is bigger,      smaller, or if they are the same."<<endl;
  int numb1;
  int numb2;
  cout<<endl<<"please enter the first number"<<endl;
  cin>>numb1;
  cout<<"please enter the second number"<<endl;
  cin>>numb2;
  while(numb1==numb2){
    cout<<"these numbers are the same."<<endl<<"please enter another number for number 1 ";
    cin>>numb1;
    cout<<"please enter a number diffrent from number 1 for number 2 ";
    cin>>numb2;
  }
  if(numb1<numb2){
    cout<<numb1<<" is the smaller number. "<<numb2<<" is the bigger number."<<endl;
  }
  else if (numb2<numb1){
    cout<<numb2<<" is the smaller number. "<<numb1<<" is the bigger number."<<endl;
  }
  
  // question 3
  cout<<endl<<"This will calculate the area of two rectangles and tell you which  one is bigger"<<endl;
double l;
double w;
double l2;
double w2;
double area;
double area2;
cout<<endl<<"please enter the width of the first rectangle."<<endl;
cin>>w;
cout<<"please enter the length of the first rectangle."<<endl;
cin>>l;
area=l*w;
cout<<"please enter the width of the second rectangle."<<endl;
cin>>w2;
cout<<"please enter the length of the second rectangle."<<endl;
cin>>l2;
area2=l2*w2;
if (area>area2){
  cout<<"The first rectangle has the larger area."<<endl;
}
else if (area2>area){
  cout<<"The second rectangle has the larger area."<<endl;
} 
//question 4
cout<<endl<<"this will tell you the color that results in you mixing any of the 3 primary colors."<<endl;
string blue="blue";
string yellow="yellow";
string red="red";
string use1;
string use2;
cout<<endl<<"please type your first color of the two you want to combine in lowercase with no spaces. ";
cin>>use1;
cout<<endl<<"please type your second color of the two you want to combine in lowercase with no spaces. "<<endl;
cin>>use2;

if(use1==blue && use2==yellow){
cout<<endl<<endl<<"the colors make green"<<endl;
}
else if (use1==yellow && use2==blue){
cout<<endl<<"the colors make green"<<endl;
}
else if (use1==red && use2==blue){
cout<<endl<<"the colors make purple"<<endl;
}
else if (use1==blue && use2==red){
cout<<endl<<"the colors make purple"<<endl;
}
else if (use1==red && use2==yellow){
cout<<endl<<"the colors make orange"<<endl;
}
else if (use1==yellow && use2==red){
cout<<endl<<"the colors make orange"<<endl;
}
else if (use1==use2){
  cout<<endl<<"these colors make dark "<<use1<<" ."<<endl;
}
//question 5
double number1;
double number2;
int formula;
double answer;
char exit;
cout<<endl<<endl<<"Geometry Calulator"<<endl<<"1.Calculate the Area of a circle."<<endl<<"2.Calculate the area of a rectangle."<<endl<<"3.Calculate the area of a triangle."<<endl<<"4.quit"<<endl<<"Enter your choice (1-4)"<<endl;
cin>>formula;
while(formula>4){
  cout<<"please enter only 1-4. please enter your choice 1-4"<<endl;
  cin>>formula;
}
while(formula<1){
  cout<<"please enter only 1-4. please enter your choice 1-4";
  cin>>formula;
}
if (formula==1){
  cout<<"please enter the radius of the circle,"<<endl;
  cin>>number1;
answer=3.14159*(number1*number1);
cout<<"The area of the circle is "<<answer<<" ."<<endl;
}
else if(formula==2){
cout<<"please enter the length of the rectangle."<<endl;
cin>>number1;
cout<<"please enter the width of the rectangle."<<endl;
cin>>number2;
answer=number1*number2;
cout<<"The area of the rectangle is "<<answer<<" ."<<endl;
}
else if(formula==3){
  cout<<"please enter the height of the traingle."<<endl;
  cin>>number1;
  cout<<"please enter the length of the base."<<endl;
  cin>>number2;
  answer=0.5*number1*number2;
  cout<<"the area of the triangle is "<<answer<<" ."<<endl;
}
else if(formula==4){
cout<<"If you are sure you want to quit press enter"<<endl;
cin.ignore(1);
cin.get(exit);
cout<<"In order to restart this caluculator stop the code and rerun it. \n Goodbye."<<endl;
}
} 
