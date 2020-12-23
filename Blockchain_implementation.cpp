//@Title: Muhammad Umair Manzoor 

#include <iostream> 
#include <unordered_map>
#include <string>
#include <functional>

using namespace std;
class Block
{
    public:
        size_t previoushash;
        string transactions[3];
        int blockhash;
        void setBlock(size_t previoushash, string transactions[]); 
};
void setBlock(size_t previoushash, string transactions[]); 

void Block::setBlock(size_t n, string a[])
{
    string tohash;
    hash<string>hash2;
    hash<size_t> finalHash;
    previoushash = n;
   for(int i=0; i < sizeof(transactions)/sizeof(transactions[0]); i++)
    transactions[i] = a[i];
    
   for(int i=0; i < sizeof(transactions)/sizeof(transactions[0]); i++)
    tohash=tohash + transactions[i];

    blockhash = finalHash(hash2(tohash) + previoushash);
}


int main()
{
    
       hash<string> hasher;
       hash <string> hasher1;
       string s = "Hello Umair";   
       size_t hash = hasher(s);
       cout<<s<<"..................."<<hash<< "\n";
       
        Block block;
        string courses[3] = {"IVAR","Bjorn","Folki"};
        block.setBlock(0, courses);
        
        for (int i = 0; i < 3; i++)
        {
            hash = hasher1(courses[i]);
            cout << block.transactions[i]<<"\t Hashing Value is...."<<hash<< endl;
            
        }
        cout<<block.blockhash;
       
  return 0;

    
}