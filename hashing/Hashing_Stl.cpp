#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int> myMap;
    myMap["Mango"]=100;
    myMap["Apple"]=200;
    myMap["Chiku"]=80;

    myMap.insert(make_pair("banana",120));

    pair<string,int>p("Guava",60);
    myMap.insert(p);

    //Print
    for(auto node:myMap){
        cout<<node.first<<","<<node.second;
        cout<<endl;
    }

    //delete node
    myMap.erase("Mango");

    //search
    cout<<"Mango->"<<myMap.count("Mango")<<endl;
    cout<<"Gauva->"<<myMap.count("Guava")<<endl;

    //Buckets iterate
    for(int i=0;i<myMap.bucket_count();i++)
    {
        //Iterate over every link list
        cout<<"bucket"<<i<<"->";
        for(auto it=myMap.begin(i);it!=myMap.end(i);it++)
        {
            cout<<it->first<<","<<it->second<<" ";
        }
        cout<<endl;
    }

}
