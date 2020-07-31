#include<cstring>
#include<iostream>
using namespace std;

template<typename T>
class node{
public:
    string key;
    T value;
    node<T> *next;
    node(string key,T v){
        this->key = key;
        value = v;
    }
     ~node(){
        if(next!=NULL){
            delete next;
        }
    }
};

template<typename T>
class Hashtable{
public:
    int cs; ///Current Size
    int ts; ///Max Arr Size
    node<T>** buckets;

    Hashtable(int ds=7){
        cs = 0;
        ts = ds;
        buckets = new node<T>*[ts];
        ///Make all addresses as NULL
        for(int i=0;i<ts;i++){
            buckets[i] = NULL;
        }
    }



int hashFn(string key){
    int L = key.length();
    int ans =0 ;
    int p = 1; ///37^0 is 1 initially

    for(int i=0;i<L;i++){
        ans += key[L-i-1]*p;
        p = p*37;

        p %= ts;
        ans %= ts;
    }
    return ans;
}

void insert(string key,T value){
    ///Key i need the hash-index
    int i = hashFn(key);

    node<T>*n = new node<T>(key,value);
    n->next = buckets[i];
    buckets[i] = n;
    cs++;
        float load_factor = (float)cs/ts;
        if(load_factor>.7){
            cout<<"Load factor is "<<load_factor<<endl;
            rehash();
        }
}

void print(){
    ///Iterate over buckets array
    for(int i=0;i<ts;i++){
        ///Print the LL for each buckets
        node<T>*temp = buckets[i];
        cout<<"Bucket "<<i<<"->";
        while(temp!=NULL){
            cout<<temp->key<<",";
            temp = temp->next;
        }
        cout<<endl;
    }
            cout<<endl;
}

 T* search(string key){
    int i=hashFn(key);
    node<T>* temp=buckets[i];
        while(temp!=NULL)
        {
            if(temp->key==key)
            {
                return &(temp->value);
            }
            temp=temp->next;
        }
     return NULL;
    }

void rehash(){

        node<T>** oldbuckets = buckets;
        int oldTs = ts;
        ts = ts*2;
        cs = 0;
        buckets = new node<T>*[ts];
        for(int i=0;i<ts;i++){
            buckets[i] = NULL;
        }

        ///Read the elements from old table and insert them into new table
        for(int i=0;i<oldTs;i++){
            node<T>*temp = oldbuckets[i];

            if(temp!=NULL){
                while(temp!=NULL){
                    insert(temp->key,temp->value);
                    temp  = temp->next;
                }
            ///Delete the old table i bucket linked list
                delete oldbuckets[i];
            }
        }
        delete [] oldbuckets;
    }

};


main()
{
    Hashtable<int> h(7);
    h.insert("mango",100);
    h.insert("apple",200);
    h.insert("guava",300);
    h.insert("banana",100);
    h.insert("chiku",120);
    h.print();

    int *price=h.search("guava");  //store address
    if(price==NULL)
        cout<<"fruit not found";
    else
        cout<<"price is "<<*price;

}






