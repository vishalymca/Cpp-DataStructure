#include<iostream>
using namespace std;

int get_bit(int a,int i)
{
    int mask=1<<i;
    return a&mask;
}

int set_bit(int a,int i)
{
    int mask=1<<i;
    return a|mask;
}

int unset_bit(int a,int i)
{
    int mask=~(1<<i);
    return a&mask;
}

int update_bit(int a,int i,int v)
{
    a=unset_bit(a,i);
    int mask=v<<i;
    return a|mask;
}

int clear_lastbits(int a,int i)
{
    int mask=(-1<<i);
    return a&mask;
}

int clear_rangebits(int a,int i,int j)
{
    int mask= clear_lastbits(a,j+1) | (1<<i-1);
    return a&mask;
}

int replace_bits(int a,int m,int i,int j)
{
    int b=clear_rangebits(a,i,j);
    int mask=(m<<i);
    return b|mask;
}

main()
{
    cout<<get_bit(13,2)<<endl;   //Extract ith bit of a number
    cout<<set_bit(13,1)<<endl;   //Change ith bit of a number to 1
    cout<<unset_bit(13,2)<<endl;  //change ith bit of a no to 0.
    cout<<update_bit(13,3,0)<<endl;  //update ith bit into v=(0 or 1)
    cout<<clear_lastbits(13,2)<<endl; //clear last i bits
    cout<<clear_rangebits(13,1,2)<<endl; //clear range of bits-ith to jth
    cout<<replace_bits(1024,21,2,6)<<endl; //update bits of 21 in 1024 from ith to jth bit
}
