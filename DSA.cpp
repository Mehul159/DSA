// You are using GCC
using namespace std;
#include<bits/stdc++.h>

int main()
{
    int num;
    cin >> num;
    if(num>=1 && num<=5){
        cout << num << ":Weekday" << endl;
    }
    else if(num ==7 || num == 6)
    {
        cout<< num << ":Weekend" << endl;
    }
    else{
        cout << num << ":Invalid" << endl;
    }
    
}

//

// You are using GCC
using namespace std;
#include <bits/stdc++.h>

int main()
{
double tp , dp;
cin >> tp >> dp;
double each = (tp-(2*dp))/3;

cout << "Alwin's Share: "<<fixed<<setprecision(1)<<each<<endl;
cout << "Ben's Share: " <<fixed <<setprecision(1)<<each+dp<<endl;
cout << "Chris's Share: " <<fixed <<setprecision(1)<<each+dp<<endl;
}


//

// You are using GCC
using namespace std;
#include<bits/stdc++.h>

int main()
{
    float beg, end;
    cin >> beg >> end;
    float dist = end-beg;
    float rem = dist*25;
    cout << fixed<<setprecision(2) << dist << " " << round(rem);
}


//// You are using GCC
using namespace std;
#include <bits/stdc++.h>

int main()
{
    double r;
    double pi=3.14;
    cin >> r;
    cout << "Diameter: " << fixed << setprecision(2) <<2*r << endl;
    cout << "Area: " << fixed << setprecision(2) <<pi*r*r << endl;
    cout << "Circumference: " << fixed << setprecision(2) <<2*pi*r << endl;
}