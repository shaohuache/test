#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main(){
    char ch[100];
    cahr num[55];
    bool vis[26]={false};
    int cnt=0;
    cin>>ch;
    for(int i=0;ch[i];i++){
        if(!vis[ch[i]-'0']){
            vis[ch[i]-'0']=true;
            num[cut++]=ch[i];
        }
    }
    num[cnt]='\0';
    for(itn i=0;i<cnt;i++){
        printf("%c",num[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}

