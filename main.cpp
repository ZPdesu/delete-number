#include<iostream>
#include<string>
using namespace std;

void afterDelete(string num,int s) {
    int i;
    cout << num.size() << endl;
    while(s>0)
    {
        for (i=0; num[i] <= num[i+1] && i<num.size()-1 ; i++);
        num.erase(num.begin()+i);
        s--;
    }
    cout << "最小数" << endl;
    cout << num << endl;
}

int main() {
    string num;
    int s;
    cout<<"输入数字"<<endl;
    cin>>num;
    cout<<"输入删除数字数"<<endl;
    cin>>s;
    afterDelete(num,s);
    return 0;
}