#include&lt;iostream&gt;
#include&lt;math.h&gt;
using namespace std;
# define max1 20
class stud
{
public:
int marks[max1], total;
 stud()
 {
    for(int i=0;i&lt;max1;i++)
    marks[i]=0; }

void createHeap();
void displayHeap();
void showmax();
void showmin();
};
void stud::createHeap()
{
int i,j,par,temp,M;
cout&lt;&lt;&quot;\n Enter How many Stu : &quot;;
cin&gt;&gt;total; //5
for(i=0;i&lt;total;i++)  //0-4=5 times
{
cout&lt;&lt;&quot;\n Enter Marks : &quot;;
cin&gt;&gt;marks[i];
M=marks[i];
j=i;//j is child
par=floor((j-1)/2);
while(marks[j] &lt; marks[par] &amp;&amp; j!=0)
{
    temp=marks[j];
    marks[j]=marks[par];
    marks[par]=temp;
    j=par;
    par=floor((j-1)/2);
}
cout&lt;&lt;&quot;\n \n Current Heap : After Inserting : &quot; &lt;&lt;M&lt;&lt;&quot; is : \n &quot;;
displayHeap();
}
}
void stud::displayHeap()
{
int i=0,space=6;
cout&lt;&lt;endl;
while(i&lt;total)
{
    if(i==0 || i==1 || i==3 || i==7 || i==15){
        cout&lt;&lt;endl&lt;&lt;endl;
        for(int j=0;j&lt;space;j++)
        cout&lt;&lt;&quot; &quot;;
    space-=2;
}
cout&lt;&lt;&quot; &quot;&lt;&lt;marks[i];i++;
}
}
void stud::showmin()
{
cout&lt;&lt;marks[0];
}

void stud::showmax()
{
int max,i;
max=marks[0];

for(i=1;i&lt;total;i++)
{
if(max &lt; marks[i])
max=marks[i];

}
cout&lt;&lt;max;
}

int main()
{
stud s1;
int ch, ans;
do
{
cout&lt;&lt;&quot;\n 1. Insert Marks &quot;;
cout&lt;&lt;&quot;\n 2. Display Marks &quot;;
cout&lt;&lt;&quot;\n 3. Show Max Marks &quot;;
cout&lt;&lt;&quot;\n 4. Show Min Marks &quot;;

cout&lt;&lt;&quot;\n\n Enter Your Choice : &quot;;
cin&gt;&gt;ch;
switch(ch)
{
case 1: 
s1.createHeap();
break;
case 2:

s1.displayHeap();
break;
case 3: s1.showmax();
break;
case 4: s1.showmin();
break;
}

cout&lt;&lt;&quot; \n Do u want to continue : (1 for continue )&quot;;
cin&gt;&gt;ans;
}while(ans==1);

return 0;
}