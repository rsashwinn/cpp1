// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<bits/stdc++.h>
#include<ios> //used to get stream size
#include<limits> //used to get numeric limits
#define ROW 22
#define COL 50



using namespace std;




struct talk
{
    string desc;
    
    int duration;
    
}tk[ROW];


struct time
{
    int hr;
    int min;
}cur_time,rem_time;










void display();

void input_v();

void sched(int);


int main() 
{
    int i=0;int j=0;
    int x=0; int z=0;
    
    input_v();
    //display();
    //while(x<=1)
    //{
        sched(z);
    //    z++;
    //    x++;
    //}
    
    
    
    
    return 0;
}


void input_v()
{
    tk[0].desc="Writing Fast Tests Against Enterprise Rails ";
    tk[0].duration=60;
    
    
    
    tk[1].desc="Overdoing it in Python  ";
    tk[1].duration=45;
    
    
    tk[2].desc="Lua for the Masses  ";
    tk[2].duration=30;
    
    
    
    
    tk[3].desc="Ruby Errors from Mismatched Gem Versions ";
    tk[3].duration=45;
    
    
    
    tk[4].desc="Common Ruby Errors ";
    tk[4].duration=45;
    
    
    tk[5].desc="Rails for Python Developers lightning Communicating Over Distance ";
    tk[5].duration=60;
    
    
    
    
    
    tk[6].desc="Accounting-Driven Development  ";
    tk[6].duration=45;
    
    
    
    tk[7].desc="Woah ";
    tk[7].duration=30;
    
    
    tk[8].desc="Sit Down and Write  ";
    tk[8].duration=30;
    
    
    
    
    tk[9].desc="Pair Programming vs Noise  ";
    tk[9].duration=45;
    
    
    
    tk[10].desc="Rails Magic  ";
    tk[10].duration=60;
    
    
    tk[11].desc="Ruby on Rails: Why We Should Move On  ";
    tk[11].duration=60;
    
    
    
    
    
    tk[12].desc="Clojure Ate Scala (on my project)  ";
    tk[12].duration=45;
    
    
    
    tk[13].desc="Programming in the Boondocks of Seattle  ";
    tk[13].duration=30;
    
    
    tk[14].desc="Ruby vs. Clojure for Back-End Development  ";
    tk[14].duration=30;
    
    
    
    
    tk[15].desc="Ruby on Rails Legacy App Maintenance  ";
    tk[15].duration=60;
    
    
    
    tk[16].desc="A World Without HackerNews ";
    tk[16].duration=30;
    
    
    tk[17].desc="User Interface CSS in Rails Apps  ";
    tk[17].duration=30;
    
    tk[18].desc="python ";
    tk[18].duration=60;
    
    tk[19].desc="python+ ";
    tk[19].duration=5;
    
    tk[20].desc="python++ ";
    tk[20].duration=5;
    
    tk[21].desc="python+++ ";
    tk[21].duration=5;
}

void sched(int b)
{
    
    
    int done[ROW];
    int i=0;int j,k,l;
    
    int rm60=6;
    int rm30=7;
    int rm45=6;
    int rm5=3;
    
    int fl=0;
    
    int d60,d30,d45,d5; 
    int r60,r30,r45,r5;
    
    
    if(b==0)
    {
        while(i<ROW)
        {
            done[i]=0;
            i++;
        }
        b=1;
    }
    
    
    k=0;
    while(k<=1)
    {   
        if(k==0)
        {
            cout<<"\n";
            cout<<"Track -------- 1";
            cout<<"\n";
        }
        else
        {
            cout<<"\n\n";
            cout<<"Track -------- 2";
            cout<<"\n";
            
        }
        cur_time.hr=9;
        cur_time.min=00; 
        rem_time.min=480;
        fl=0;

        while(rem_time.min>0)
        {
            if(cur_time.hr<12)
            {
                d60=rem_time.min/60;
                d30=rem_time.min/30;
                d45=rem_time.min/45;
                d5=rem_time.min/5;
                
                
                r60=rem_time.min%60;
                r30=rem_time.min%30;
                r45=rem_time.min%45;
                r5=rem_time.min%5;
                
                
                
                
                if((r5==0)/*&&(d5<=rm5)*/&&(rm5>=1))
                {
                    j=0;
                    while(j<ROW)
                    {
                        if((tk[j].duration==5)&&(done[j]==0))
                        {   
                            cout<<"\n";
                            cout<<cur_time.hr<<":"<<cur_time.min<<"AM"<<" ";
                            cout<<tk[j].desc<<":"<<tk[j].duration<<" ";
                            done[j]=1;
                            rm5--;
                            rem_time.min-=tk[j].duration;
                            cur_time.min+=tk[j].duration;
                            if(cur_time.min>=60)
                            {
                                cur_time.hr+=1;
                                cur_time.min-=60;
                            }
                            break;
                        }
                        j++;
                    }
                }
                
                
                
                
                
                else if((r60==0)/*&&(d5<=rm5)*/&&(rm60>=1))
                {
                    j=0;
                    while(j<ROW)
                    {
                        if((tk[j].duration==60)&&(done[j]==0))
                        {   
                            cout<<"\n";
                            cout<<cur_time.hr<<":"<<cur_time.min<<"AM"<<" ";
                            cout<<tk[j].desc<<":"<<tk[j].duration<<" ";
                            done[j]=1;
                            rm60--;
                            rem_time.min-=tk[j].duration;
                            cur_time.min+=tk[j].duration;
                            if(cur_time.min>=60)
                            {
                                cur_time.hr+=1;
                                cur_time.min-=60;
                            }
                            break;
                        }
                        j++;
                    }
                }
                else if((r30==0)/*&&(d5<=rm5)*/&&(rm30>=1))
                {
                    j=0;
                    while(j<ROW)
                    {
                        if((tk[j].duration==30)&&(done[j]==0))
                        {   
                            cout<<"\n";
                            cout<<cur_time.hr<<":"<<cur_time.min<<"AM"<<" ";
                            cout<<tk[j].desc<<":"<<tk[j].duration<<" ";
                            done[j]=1;
                            rm30--;
                            rem_time.min-=tk[j].duration;
                            cur_time.min+=tk[j].duration;
                            if(cur_time.min>=60)
                            {
                                cur_time.hr+=1;
                                cur_time.min-=60;
                            }
                            break;
                        }
                        j++;
                    }
                    
                }
                else
                {
                    
                    j=0;
                    while(j<ROW)
                    {
                        if((tk[j].duration==45)&&(done[j]==0))
                        {   
                            cout<<"\n";
                            cout<<cur_time.hr<<":"<<cur_time.min<<"AM"<<" ";
                            cout<<tk[j].desc<<":"<<tk[j].duration<<" ";
                            done[j]=1;
                            rm45--;
                            rem_time.min-=tk[j].duration;
                            cur_time.min+=tk[j].duration;
                            if(cur_time.min>=60)
                            {
                                cur_time.hr+=1;
                                cur_time.min-=60;
                            }
                            break;
                        }
                        j++;
                    }
                    
                }
                
            }
            
            else if(cur_time.hr==12)
            {
                cout<<"\n";
                cout<<cur_time.hr<<":"<<cur_time.min<<"PM"<<" Lunch";
                
                cur_time.hr+=1;
                rem_time.min-=60;
            }
            
            else
            {
                
                
                
                if((cur_time.hr>=16)&&(cur_time.hr<=17))

                {
                    cout<<"\n";
                    cout<<cur_time.hr-12<<":"<<cur_time.min<<"PM"<<" Networking event";
                    fl=1;
                    break;
                }
                      
                
                
                
                                             
                                
                                
                                
                                           
                
                
                
                
                
                else
                {
                    d60=rem_time.min/60;
                    d30=rem_time.min/30;
                    d45=rem_time.min/45;
                    d5=rem_time.min/5;
                
                
                    r60=rem_time.min%60;
                    r30=rem_time.min%30;
                    r45=rem_time.min%45;
                    r5=rem_time.min%5;
                     
                    
                    if((r5==0)/*&&(d5<=rm5)*/&&(rm5>=1))
                    {
                        j=0;
                        while(j<ROW)
                        {
                            if((tk[j].duration==5)&&(done[j]==0))
                            {   
                                cout<<"\n";
                                cout<<cur_time.hr<<":"<<cur_time.min<<"AM"<<" ";
                                cout<<tk[j].desc<<":"<<tk[j].duration<<" ";
                                done[j]=1;
                                rm5--;
                                rem_time.min-=tk[j].duration;
                                cur_time.min+=tk[j].duration;
                                if(cur_time.min>=60)
                                {
                                    cur_time.hr+=1;
                                    cur_time.min-=60;
                                }
                                break;
                            }
                            j++;
                        }
                    }
                    
                    else if((r60==0)/*&&(d5<=rm5)*/&&(rm60>=1))
                    {
                        j=0;
                        while(j<ROW)
                        {
                            if((tk[j].duration==60)&&(done[j]==0))
                            {   
                                    cout<<"\n";
                                    cout<<cur_time.hr-12<<":"<<cur_time.min<<"PM"<<" ";
                                    cout<<tk[j].desc<<":"<<tk[j].duration<<" ";
                                    done[j]=1;
                                    rm60--;
                                    rem_time.min-=tk[j].duration;
                                    cur_time.min+=tk[j].duration;
                                    if(cur_time.min>=60)
                                    {
                                        cur_time.hr+=1;
                                        cur_time.min-=60;
                                    }
                                    break;
                            }
                                j++;
                        
                            
                        }
                    }
                    else if ((r30==0)/*&&(d5<=rm5)*/&&(rm30>=1))
                    {
                        j=0;
                        while(j<ROW)
                        {
                            if((tk[j].duration==30)&&(done[j]==0))
                            {   
                                cout<<"\n";
                                cout<<cur_time.hr-12<<":"<<cur_time.min<<"PM"<<" ";
                                cout<<tk[j].desc<<":"<<tk[j].duration<<" ";
                                done[j]=1;
                                rm30--;
                                rem_time.min-=tk[j].duration;
                                cur_time.min+=tk[j].duration;
                                if(cur_time.min>=60)
                                {
                                    cur_time.hr+=1;
                                    cur_time.min-=60;
                                }
                                break;
                            }
                            j++;
                        }
                        
                    }
                    else
                    {
                        
                        j=0;
                        while(j<ROW)
                        {
                            if((tk[j].duration==45)&&(done[j]==0))
                            {   
                                cout<<"\n";
                                cout<<cur_time.hr-12<<":"<<cur_time.min<<"PM"<<" ";
                                cout<<tk[j].desc<<":"<<tk[j].duration<<" ";
                                done[j]=1;
                                rm45--;
                                rem_time.min-=tk[j].duration;
                                cur_time.min+=tk[j].duration;
                                if(cur_time.min>=60)
                                {
                                    cur_time.hr+=1;
                                    cur_time.min-=60;
                                }
                                break;
                            }
                            j++;
                        }
                        
                    }
                }
                
                
            }
        }
        if(fl==0)
        {
        cout<<"\n";
        cout<<cur_time.hr-12<<":"<<cur_time.min<<"PM"<<" Networking Event";
        cout<<"\n\n";
        }
        //cout<<k;
        k++;
    }
    
    
    
}