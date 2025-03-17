#include<iostream>
using namespace std;

//uppercase and lowercase not same
bool checkpalindrome(char name[] , int len) {
    int s=0;
    int e=len-1;
    while(s<e) {
        if(name[s] == name[e]) {
            s++;
            e--;
        }
        else {
            return false;
        }
    }
    return true;
}
int findlength(char name[]) {
    int cnt = 0;
    for(int i = 0 ; name[i] != '\0' ; i++) {
        cnt++;
    }
    return cnt;
}
//for case of char and to return whole  string -*
char *reversestring(char name[] , int len) {
    int s = 0;
    int e=len-1;
    while(s < e) {
        //logic of swap
        swap(name[s++] , name[e--]) ;
    }
    return name;
}

void reversechararray(char name[] , int len) {
    int s = 0;
    int e=len-1;
    while(s < e) {
        swap(name[s++] , name[e--]) ;
    }
}

int main() {
/*  char name[28] ; 
    
    cout<<" Enter your name  : - ";
    cout<<endl;
    cin>>name ;
    
 //for o/p like lv bb prints only bb as cin stopsexceutionof dueto space newlinechar/enter(/n)& tab(/t)
    cout<<"Your name is : - "<<name<<endl;*/
    
    char name[28];
    cout<<"Enter your name : - ";
    cout<<endl;
    cin>>name ;
    
    //name[2] = '\0';
    cout<<"Your name is : - "<<name<<endl;
    cout<<"Total number of characters in string/char array : - "<<findlength(name)<<endl;
    
    int len = findlength(name);
    
    reversechararray(name , len);
    
    cout<<"The reversed string : - "<<name<<endl;
//cannot directly use cout << reversechararray(name, len)as void functions do not return a value.
    cout<<"The reversed  : - "<<reversestring(name , len)<<endl;
    
    cout<<"The string is paplindrome : - "<<checkpalindrome(name ,len)<<endl ;
}


