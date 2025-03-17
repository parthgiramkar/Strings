#include<iostream>
using namespace std;

char convtolowercase(char x) {
    if(x >= 'a' && x <= 'z') {
        return x ;   //means its already lie
    }
    else {
        char temp = x - 'A' + 'a';
        return temp;
    }
}
char convtouppercase(char x) {
    if(x >= 'A' && x <= 'Z') {
        return x ;   //means its already lie
    }
    else {
        char temp = x - 'a' + 'A';
        return temp;
    }
}
//uppercase and lowercase not same means case sensitive considered if not used the above function elseconsidered
bool checkpalindrome(char name[] , int len) {
    int s=0;
    int e=len-1;
    while(s<e) {
        if(convtouppercase(name[s]) == convtouppercase(name[e])  ) {
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
    for(int i = 0 ; name[i] != '\0' ; i++) {   //till the null/terminator character donotmeets
        cnt++;
    }
    return cnt;
}
//for case of char and to return whole  string - so used* like in Linkedlist(to aceess the other location) and if normalchar cannot return wholeword
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
/*  creating the character array
    char name[28] ; 
    
    cout<<" Enter your name  : - ";
    cout<<endl;
    cin>>name ;
    
 //for o/p like lv bb prints only bb as cin stopsexceutionof dueto space newlinechar/enter(/n)& tab(/t)
    cout<<"Your name is : - "<<name<<endl;*/
    
    char name[28];
    cout<<"Enter your name : - ";
    cout<<endl;
    cin>>name ;
    
    name[4] = '\0';
    cout<<"Your name is : - "<<name<<endl;
    cout<<"Total number of characters in string/char array : - "<<findlength(name)<<endl;
    
    int len = findlength(name);       //total characters
    
    reversechararray(name , len);
    
    cout<<"The reversed string : - "<<name<<endl;
//cannot directly use cout << reversechararray(name, len)as void functions do not return a value.
    cout<<"The reversed  : - "<<reversestring(name , len)<<endl;
    
    cout<<"The string is paplindrome : - "<<checkpalindrome(name ,len)<<endl ;
    
    cout<<"Convert to the lowercase - "<<convtolowercase('M')<<endl;
    cout<<"Convert to the uppercase - "<<convtouppercase('b')<<endl;
    
}   
