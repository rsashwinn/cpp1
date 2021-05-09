// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<bits/stdc++.h>
#include<ios> //used to get stream size
#include<limits> //used to get numeric limits
#define ROW 4
#define COL 50



using namespace std;




struct product
{
    int qty;
    string desc;
    float rate;
}prod[ROW];
float round_off(float);
void display();
float rov(float y);
void input_v();
void cal();
int main() 
{
    int i=0;int j=0;
    /*while(i<ROW)
    {
        
        cin>>prod[i].qty;
        
       
        cin.ignore();
        //cin.ignore(numeric_limits<streamsize>::max(),'\n');
        getline(cin,prod[i].desc);
        
        //cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cin.ignore(1,'\n'); 
        
        cin>>prod[i].rate;
        //cin.ignore();
        cin.ignore(80, '\n');
        i++;
    }*/
    
    input_v();
    display();
    cal();
    
    
    
    
    return 0;
}


void input_v()
{
    prod[0].qty=2;
    prod[0].desc="imported bottle of perfume : ";
    prod[0].rate=27.99;
    
    
    prod[1].qty=1;
    prod[1].desc="bottle of perfume : ";
    prod[1].rate=18.99;
    
    
    prod[2].qty=1;
    prod[2].desc="packet of headache pills : ";
    prod[2].rate=9.75;
    
    
    prod[3].qty=1;
    prod[3].desc="box of imported chocolates : ";
    prod[3].rate=11.25;
    
}




void display()
{
    cout<<"\n";
    cout<<"----------------------------------INPUT------------------------------";
    cout<<"\n\n";
    cout<<prod[0].qty<<" ";
    cout<<prod[0].desc<<" ";
    cout<<prod[0].rate<<" ";
    
    
    cout<<"\n\n";
    
    cout<<prod[1].qty<<" ";
    cout<<prod[1].desc<<" ";
    cout<<prod[1].rate<<" ";
    
    
    cout<<"\n\n";
    
    cout<<prod[2].qty<<" ";
    cout<<prod[2].desc<<" ";
    cout<<prod[2].rate<<" ";
    
    
    cout<<"\n\n";
    
    cout<<prod[3].qty<<" ";
    cout<<prod[3].desc<<" ";
    cout<<prod[3].rate<<" ";
    
    
}

void cal()
{
    float a_stx[ROW];
    float b_stx[ROW];
    
    string temp;
    int i=0;int imp;float val;int br=10;int ar=5;
    int l,m,n,o,mm;float tot;float totax; float tr;
    // find ou if it is imported
    
    // find out if it is eexempted from basic sales tax
    i=0;
    while(i<ROW)
    {
        temp=prod[i].desc;
        l=temp.find("book");
        m=temp.find("medicine");
        n=temp.find("chocolate");
        o=temp.find("pills");
        mm=temp.find("chocolates");
        cout<<"\n";
        //cout<<l<<" "<<m<<" "<<n<<" "<<o<<" ";
        cout<<"\n";
        if((l>=0)||(m>=0)||(n>=0)||(o>=0)||(mm>=0))
        {
            b_stx[i]=0;
            i++;
        }
        else
        {
            b_stx[i]=0;
            val=(prod[i].rate*prod[i].qty);
            b_stx[i]+=((br*val)/100);
            i++;
        }
    }
    i=0;
    while(i<ROW)
    {
        temp=prod[i].desc;
        imp=temp.find("imported");
        if(imp==-1)
        {
            a_stx[i]=0;
            i++;
            
        }
        else
        {
            a_stx[i]=0;
            val=(prod[i].rate*prod[i].qty);
            a_stx[i]+=((ar*val)/100);
            i++;
        }
    }
    
    cout<<"\n\n";
    i=0;tot=0;totax=0;tr=0;
    
    cout<<"----------------------------------OUTPUT------------------------------";
    cout<<"\n\n";
    while(i<ROW)
    {
        
        cout<<prod[i].qty<<" ";
        cout<<prod[i].desc<<" ";
        //cout<<((prod[i].rate*prod[i].qty)+a_stx[i]+b_stx[i])<<" ";
        tr=rov(a_stx[i]+b_stx[i]);
        cout<<((prod[i].rate*prod[i].qty)+tr);//a_stx[i]+b_stx[i])<<" ";
        tot+=((prod[i].rate*prod[i].qty)+tr);     //a_stx[i]+b_stx[i]);
        
        
        totax+=tr;//(a_stx[i]+b_stx[i]);
        cout<<"\n\n";
        i++;
        
    }
    cout<<"\n\n";
    cout<<"Sales Taxes : "<<totax<<"\n";
    cout<<"total : "<<tot;
    
}




float rov(float y) 
{
   //cout << "Hello World" << endl; 
   float v=14.5678;float a;int b;float z;
   float x;
   //cout<<"\n"<<a;
   z=y/0.05;
   a=round_off(z);
   b=z;
   if(a>=0.5)
   {
        x=(b+1)*0.05;   
   }
   else
   {
       x=b*0.05;
   }
   return x;
   
}







float round_off( float f )
{
    float dp = f - floorf( f ); // This simply gives all the values after the 
                                      // decimal point.
    //return static_cast< int >( dp * 10.0f ); // This move the value after the decimal 
                                             // point to before it and then casts to an
                                             // int losing all other decimal places.
    //cout<<"\n"<<dp<<"\n";
    return dp;
}