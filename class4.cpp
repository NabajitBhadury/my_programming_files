#include<bits/stdc++.h>
using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
  private:
    int length,breadth,height;
    long long volume;
    
    public:
    
    Box(){
        length=0;
        breadth=0;
        height=0;
        
    }
    
    Box(int l,int b,int h){
        length = l;
        breadth = b;
        height =h;
    }
    
    Box(Box &obj){
        length = obj.length;
        breadth = obj.breadth;
        height = obj.height;
    }
    
    int getLength(int l){
        length = l;
        return length;
    }
    
    int getBreadth(int b){
        breadth = b;
        return breadth;
    }
    
    int getHeight(int h){
        height = h;
        return height;
    }
    
    long long CalculateVolume(){
        volume=length*height*breadth;
        return volume;
    }
    friend ostream& operator<<(ostream& os, Box b);
	friend int operator<(Box a, Box b);
};

ostream& operator<<(ostream& os, Box b)
{
	os<<"Box length-> "<<b.length<<endl;
	os<<"Box breadth-> "<<b.breadth<<endl;
	os<<"Box height-> "<<b.height<<endl;

	return os;
}

int operator<(Box a, Box b)
{
	return a.CalculateVolume()<b.CalculateVolume();
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}