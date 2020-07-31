#include <bits/stdc++.h>
#include <iostream>
using namespace std;

template<typename T>
class node{
    public:
    string key;
    T value;
    node<T>*next;

    node(string str,T value)
    {
        key=str;
        this->value=value;
        next=NULL;
    }
    ~node()
    {
        if(next!=NULL)
        {
            delete next;
        }
    }
};

template<typename T>
class hashtable{
    int ts;
    int cs;
    node<T>**table;

    int hashfn(string key)
    {
        int p=1;
        int ans=0;
        for(int i=0;i<key.length();i++)
        {
            ans+=(key[i]*p)%ts;
            p=p*27%ts;
        }
        return ans%ts;
    }

    void rehash()
    {
        node<T>** old_Table=table;
        int ots=ts;
        ts=2*ts;
        cs=0;

        table=new node<T>*[ts];
        for(int i=0;i<ts;i++)
        {
            table[i]=NULL;
        }
        for(int i=0;i<ots;i++)
        {
            node<T> *temp=old_Table[i];
            while(temp!=NULL)
            {
                insert(temp->key,temp->value);
                temp=temp->next;
            }
            delete old_Table[i];
        }
        delete [] old_Table;

    }

    public:
    hashtable(int table_size=6)
    {
        ts=table_size;
        cs=0;
        table=new node<T>*[ts];
        for(int i=0;i<ts;i++)
        {
            table[i]=NULL;
        }
    }

    void insert(string key,T value)
    {
        int idx=hashfn(key);

        node<T>* n=new node<T>(key,value);

        n->next=table[idx];
        table[idx]=n;
        cs++;

        float load_factor=cs/ts*1.0;
        if(load_factor>0.7){
            rehash();
        }
    }

    void print()
    {
        for(int i=0;i<ts;i++)
        {
             node<T>* temp=table[i];
            cout<<i<<"->";
            while(temp!=NULL)
            {
                cout<<temp->value<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
    }
};

main()
{
    hashtable<int> price_list;

    price_list.insert("Burger",120);
    price_list.insert("pepsi",20);
    price_list.insert("pizza",150);
    price_list.insert("Noodles",25);
    price_list.insert("coke",40);
    price_list.insert("chips",25);
    price_list.insert("samosa",10);
    price_list.insert("chowmein",30);


    price_list.print();
}
