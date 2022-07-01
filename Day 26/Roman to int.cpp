int romanToInt(string s) {
    // Write your code here
    int n=s.length();
    int sum=0,x=0,y=0;
    
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='I')
            x=1;
        if(s[i]=='V')
            x=5;
        if(s[i]=='X')
            x=10;
        if(s[i]=='L')
            x=50;
        if(s[i]=='C')
            x=100;
        if(s[i]=='D')
            x=500;
        if(s[i]=='M')
            x=1000;
        
        if(x>=y)
        {
            sum=sum+x;
            y=x;
        }
        else if(y>x)
        {
            sum=sum-x;
            y=x;
        }
    }
    return sum;
}
