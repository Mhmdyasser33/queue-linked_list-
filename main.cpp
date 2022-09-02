#include <bits/stdc++.h>
#include<utility>
#include<vector>
#include<set>
#include<set>
#include<unordered_set>
#include<unordered_map>
#define all(s) s.begin(),s.end()
#define allr(i) i.rbegin(),i.rend()
#define sz(s) (int)(s.size())
#define ceil(x,y) ((x+y-1)/y)
#define F first
#define S second
#define pb push_back
#define pop pop_back
#define vi vector<int>
#define si set<int>
#define uns unordered_set<int>
#define pq_max priority_queue<int>
#define pq_min priorrity_queue<int,pqi,greater<int>>
#define khaled_kasmeri ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef  long long ll;
typedef long double ld;
typedef  double dd;
using namespace std;
class queueLinkedlist{
private :
    struct Node{
        int date ;
        Node*next ;
    };
    Node * head = NULL , *tail = NULL;
public:
    void enque(int value){
        Node*newnode = new Node;
        newnode->date = value;
        newnode->next = NULL;
        if( head == NULL && tail == NULL){
            head = tail = newnode ;
        }
        else{
            tail->next = newnode ;
            tail = newnode ;
        }


    }
    void Deque(){
        if(is_Empty())
             return ;
        Node *temp = head ;
        if( head == tail )
              head = tail  = NULL ;
        else
                head = head->next ;
            delete temp ;
    }
    bool is_Empty(){
        if(head ==NULL && tail == NULL)
            return true;
        return false;
    }
    int top_Value(){
        if(is_Empty())
            return -1 ;
        else
            return head->date ;
    }

};
int main(){
    khaled_kasmeri ;
    system("color 02");
    queueLinkedlist qli;
    qli.enque(10);
   qli.enque(20);
   qli.enque(30);
   qli.enque(40);
   qli.enque(50);
  //cout <<qli.top_Value();
  while(!qli.is_Empty()){
    cout <<"Element is " << qli.top_Value() <<endl;
    qli.Deque();
   }



}
