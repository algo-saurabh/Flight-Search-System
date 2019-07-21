#include<iostream>

#include<stdio.h>
#include<string>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<vector>
#include<list>
using namespace std;
struct graph{
  int data;
  struct graph* next;
};

/*Adjacency list-of twenty cities-
0-srinagar->{delhi,leh}
1-leh->{srinagar,jammu,delhi}
2-jammu->{delhi,leh}
3-kullu->{delhi}
4-amirtsar->{delhi}
5-dharmshala->{delhi}
6-chandigarh->{delhi}
7-dehradun->{delhi,lucknow}
8-delhi->{srinagar,jammu,amritsar,chandigarh,kullu,dharmshala,dehradun,leh,guwahati,bagdogra,kolkata,patna,ranchi,bhubaneshwar,varanasi,lucknow,allahabad,agra,khajuraho,raipur,jabalpur}
9-jodhpur->{udaipur,delhi}
10-jaipur->{delhi,mumbai}
11-agra->{delhi,varanasi,mumbai,gwalior}
12-lucknow->{varanasi,delhi,dehradun,mumbai}
13-bagdogra->{guwahati,kolkata,delhi}
14-udaipur->{jodhpur,delhi,mumbai}
15-gwalior->{agra,mumbai}
16-allahabad->{delhi,mumbai}
17-patna->{delhi}
18-bhuj->{mumbai}
19-ahmedabad->{mumbai,delhi,hyderabad}
20-indore->{mumbai,delhi}
21-bhopal->{mumbai,delhi}
22-khajuraho->{varanasi,delhi}
23-varanasi->{lucknow,khajuraho,agra,delhi,mumbai}
24-jamnagar->{mumbai}
25-vadodara->{delhi}
26-ranchi->{delhi}
27-kolkata->{agartala,aizawl,silchar,bagdogra,dimapur,dibrugarh,hyderabad,delhi,port blair,chennai,mumbai,bengaluru}
28-surat->{delhi}
29-mumbai->{pune,aurangabad,goa,ahmedabad,bhuj,jamnagar,hyderabad,indore,bhopal,nagpur,raipur,udaipur,bengaluru,mangalore,visakhapatnam,allahabad,varanasi,bhubhaneshwar,lucknow,jaipur,agra,delhi,kolkata,gwalior,kochi,thiruvananthapuram,kozhikode,coimbatore}
30-pune->{mumbai,goa,hyderabad,bengaluru,delhi}
31-aurangabad->{mumbai,delhi}
32-nagpur->{raipur,hyderabad,mumbai,delhi}
33-raipur->{nagpur,mumbai,delhi}
34-jabalpur->{delhi}
35-bhubaneshwar->{visakhapatnam,port blair,chennai,mumbai,delhi}
36-hyderabad->{vijayawada,visakhapatnam,pune,goa,bengaluru,chennai,nagpur,mumbai,tirupur,ahmedabad}
37-goa->{pune,mumbai,hyderabad,kozhikode,kochi}
38-vijayawada->{hyderabad}
39-visakhapatnam->{bhubaneshwar,hyderabad,chennai,mumbai,delhi}
40-tirupar->{hyderabad}
41-mangalore->{bengaluru,mumbai,kozhikode}
42-bengaluru->{mangalore,chennai,tiruchirapalli,kochi,hyderabad,pune,mumbai,kolkata,delhi}
43-chennai->{bengaluru,tiruchirapalli,hyderabad,kochi,madurai,kozhikode,visakhapatnam,bhubaneshwar,port blair,kolkata,delhi}
44-kozhikode->{coimbatore,kochi,mangalore,thiruvananthapuram,goa,mumbai}
45-coimbatore->{kozhikode,mumbai}
46-tiruchirapalli->{chennai,bengaluru}
47-kochi->{agatti,thiruvananthapuram,kozhikode,goa,bengaluru,chennai,mumbai,delhi}
48-agatti->{kochi}
49-madurai->{chennai}
50-thiruvananthapuram->{kochi,kozhikode,mumbai}
51-port blair->{chennai,bhubaneshwar,kolkata}
52-guwahati->{bagdogra,libabari,delhi,imphal}
53-libabari->{guwahati}
54-dibrugarh->{dimapur,kolkata}
55-tezpur->{silchar}
56-silchar->{tezpur,kolkata}
57-dimapur->{dibrugarh,kolkata}
58-imphal->{aizawl,guwahati}
59-agartala->{kolkata}
60-aizawl->{imphal,kolkata}
*/
int main()
{
    struct graph *a[61],*t1,*t2;
    char cityname[61][20]={"srinagar","leh","jammu","kullu","amritsar","dharmshala","chandigarh","dehradun","delhi","jodhpur","jaipur","agra",
                            "lucknow","bagdogra","udaipur","gwalior","allahabad","patna","bhuj","ahmedabad","indore","bhopal","khajuraho","varanasi",
                            "jamnagar","vadodara","ranchi","kolkata","surat","mumbai","pune","aurangabad","nagpur","raipur","jabalpur","bhubaneshwar",
                            "hyderabad","goa","vijayawada","visakhapatnam","tirupar","mangalore","bengaluru","chennai","kozhikode","coimbatore",
                            "tiruchirapalli","kochi","agatti","madurai","thiruvananthapuram","port blair","guwahati","lilabari","dibrugarh",
                            "tezpur","silchar","dimapur","imphal","agartala","aizawl"};

   // linked list of city 0-srinagar-

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[0]=t1;
    t1->data=0;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=1;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=8;
    t1->next=NULL;

    // linked list for 1-leh

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[1]=t1;
    t1->data=1;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=0;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=2;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=8;
    t2->next=NULL;

     // linked list for 2-jammu

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[2]=t1;
    t1->data=2;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=1;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=8;
    t1->next=NULL;

    //  linked list for 3-kullu

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[3]=t1;
    t1->data=3;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=8;
    t2->next=NULL;

    //  linked list for city 4-amritsar

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[4]=t1;
    t1->data=4;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=8;
    t2->next=NULL;

    //  linked list for city 5-dharmshala

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[5]=t1;
    t1->data=5;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=8;
    t2->next=NULL;

    // linked list for city 6-chandigarh

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[6]=t1;
    t1->data=6;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=8;
    t2->next=NULL;

    //  linked list for the city 7-dehradun

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[7]=t1;
    t1->data=7;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=8;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=12;
    t1->next=NULL;

    //  linked list for the city 8-delhi

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[8]=t1;
    t1->data=8;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=11;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=7;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=10;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=6;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=15;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=5;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=4;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=3;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=1;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=0;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=12;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=9;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=14;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=16;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=22;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=23;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=17;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=19;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=20;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=21;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=13;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=25;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=26;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=28;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=52;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=27;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=32;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=33;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=31;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=35;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=34;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=29;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=30;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=36;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=39;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=38;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=43;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=42;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=47;
    t2->next=NULL;

    // linked list for the city 9-jodhpur

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[9]=t1;
    t1->data=9;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=14;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=8;
    t1->next=NULL;

    //  linked list for the city 10-jaipur

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[10]=t1;
    t1->data=10;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=8;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=29;
    t1->next=NULL;

    // linked list for the city 11-Agra

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[11]=t1;
    t1->data=11;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=8;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=15;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=23;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=29;
    t1->next=NULL;

    //  linked list for the city 12-lucknow

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[12]=t1;
    t1->data=12;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=23;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=8;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=7;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=29;
    t1->next=NULL;

    //  linked list for the city 13-bagdogra

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[13]=t1;
    t1->data=13;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=52;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=27;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=8;
    t2->next=NULL;

    //  linked list for the city 14-udaipur

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[14]=t1;
    t1->data=14;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=9;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=8;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=29;
    t2->next=NULL;

    //  linked list for the city 15-gwalior

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[15]=t1;
    t1->data=15;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=11;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=29;
    t1->next=NULL;

    //  linked list for the city 16-allahabad

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[16]=t1;
    t1->data=16;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=8;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=29;
    t1->next=NULL;

    //  linked list for the city 17-patna

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[17]=t1;
    t1->data=17;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=8;
    t2->next=NULL;

   //  linked list for the city 18-bhuj

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[18]=t1;
    t1->data=18;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=29;
    t2->next=NULL;

    //  linked list for the city 19-ahmedabad

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[19]=t1;
    t1->data=19;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=29;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=8;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=36;
    t2->next=NULL;

    //  linked list for the city 20-indore

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[20]=t1;
    t1->data=20;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=29;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=8;
    t1->next=NULL;

    //  linked list for the city 21-bhopal

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[21]=t1;
    t1->data=21;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=29;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=8;
    t1->next=NULL;

    // linked list for the city 22-khajuraho

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[22]=t1;
    t1->data=22;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=23;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=8;
    t1->next=NULL;

    //  linked list for the city 23-varanasi

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[23]=t1;
    t1->data=23;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=12;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=22;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=11;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=8;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=29;
    t2->next=NULL;

    // linked list for the city 24-jamnagar

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[24]=t1;
    t1->data=24;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=29;
    t2->next=NULL;

    // linked list for the city 25-vadodara

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[25]=t1;
    t1->data=25;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=8;
    t2->next=NULL;

    // linked list for the city 26-ranchi

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[26]=t1;
    t1->data=26;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=8;
    t2->next=NULL;

    // linked list for the city 27-kolkata

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[27]=t1;
    t1->data=27;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=59;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=60;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=56;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=13;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=57;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=54;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=36;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=8;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=51;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=43;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=29;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=42;
    t1->next=NULL;

   // linked list for the city 28-surat

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[28]=t1;
    t1->data=28;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=8;
    t2->next=NULL;

   // linked list for the city 29-mumbai

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[29]=t1;
    t1->data=29;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=30;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=31;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=37;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=19;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=18;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=24;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=36;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=20;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=21;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=32;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=33;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=14;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=42;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=41;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=44;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=39;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=45;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=47;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=50;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=16;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=23;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=35;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=12;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=15;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=10;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=11;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=8;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=27;
    t1->next=NULL;

   // linked list for the city 30-pune

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[30]=t1;
    t1->data=30;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=29;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=37;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=36;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=42;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=8;
    t2->next=NULL;

   // linked list for the city 31-aurangabad

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[31]=t1;
    t1->data=31;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=29;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=8;
    t1->next=NULL;

   // linked list for the city 32-nagpur

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[32]=t1;
    t1->data=32;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=33;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=36;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=29;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=8;
    t1->next=NULL;


   // linked list for the city 33-raipur

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[33]=t1;
    t1->data=33;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=32;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=29;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=8;
    t2->next=NULL;

   // linked list for the city 34-jabalpur

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[34]=t1;
    t1->data=34;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=8;
    t2->next=NULL;

  //  linked list for the city 35-bhubaneshwar

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[35]=t1;
    t1->data=35;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=39;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=51;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=43;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=29;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=8;
    t2->next=NULL;


  //  linked list for the city 36-hyderabad

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[36]=t1;
    t1->data=36;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=38;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=39;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=30;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=37;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=42;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=40;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=43;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=32;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=29;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=19;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=27;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=8;
    t1->next=NULL;


  //  linked list for the city 37-goa

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[37]=t1;
    t1->data=37;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=30;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=29;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=36;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=44;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=47;
    t2->next=NULL;

  //  linked list for the city 38-vijayawada

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[38]=t1;
    t1->data=38;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=36;
    t2->next=NULL;

   // linked list for the city 39-visakhapatnam

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[39]=t1;
    t1->data=39;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=35;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=36;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=43;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=29;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=8;
    t1->next=NULL;

   // linked list for the city 40-tirupar

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[40]=t1;
    t1->data=40;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=36;
    t2->next=NULL;

   // linked list for the city 41-mangalore

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[41]=t1;
    t1->data=41;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=42;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=44;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=29;
    t2->next=NULL;

   // linked list for the city 42-bengaluru

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[42]=t1;
    t1->data=42;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=41;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=43;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=46;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=47;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=36;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=30;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=29;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=27;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=8;
    t2->next=NULL;

  //  linked list for the city 43-chennai

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[43]=t1;
    t1->data=43;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=42;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=46;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=36;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=47;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=49;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=44;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=39;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=35;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=51;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=27;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=8;
    t2->next=NULL;

  //  linked list for the city 44-kozhikode

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[44]=t1;
    t1->data=44;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=45;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=47;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=41;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=50;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=37;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=29;
    t1->next=NULL;

  //  linked list for the city 45-coimbatore

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[45]=t1;
    t1->data=45;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=44;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=29;
    t1->next=NULL;


   // linked list for the city 46-tiruchirapalli

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[46]=t1;
    t1->data=46;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=43;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=42;
    t1->next=NULL;

    // linked list for the city 47-kochi

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[47]=t1;
    t1->data=47;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=48;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=50;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=44;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=37;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=42;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=43;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=29;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=8;
    t1->next=NULL;

   // linked list for the city 48-agatti

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[48]=t1;
    t1->data=48;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=47;
    t2->next=NULL;

   // linked list for the city 49-madurai

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[49]=t1;
    t1->data=49;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=43;
    t2->next=NULL;

   //linked list for the city 50-thiruvananthapuram

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[50]=t1;
    t1->data=50;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=47;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=44;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=29;
    t2->next=NULL;

    //linked list for the city 51-port blair

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[51]=t1;
    t1->data=51;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=43;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=35;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=27;
    t2->next=NULL;

    //linked list for the city 52-guwahati

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[52]=t1;
    t1->data=52;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=13;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=53;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=58;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=8;
    t1->next=NULL;

    //linked list for the city 53-lilabari

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[53]=t1;
    t1->data=53;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=52;
    t2->next=NULL;

    //linked list for the city 54-dibrugarh

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[54]=t1;
    t1->data=54;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=57;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=27;
    t1->next=NULL;


    //linked list for the city 55-tezpur

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[55]=t1;
    t1->data=55;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=56;
    t2->next=NULL;

    //linked list for the city 56-silchar

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[56]=t1;
    t1->data=56;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=55;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=27;
    t1->next=NULL;

    //linked list for the city 57-dimapur

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[57]=t1;
    t1->data=57;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=54;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=27;
    t1->next=NULL;

    //linked list for the city 58-imphal

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[58]=t1;
    t1->data=58;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=60;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=52;
    t1->next=NULL;

   // linked list for the city 59-agartala

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[59]=t1;
    t1->data=59;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=27;
    t2->next=NULL;

   // linked list for the city 60-aizawl

    t1=(struct graph*)malloc(sizeof(struct graph));
    a[60]=t1;
    t1->data=60;
    t2=(struct graph*)malloc(sizeof(struct graph));
    t1->next=t2;
    t2->data=58;
    t1=(struct graph*)malloc(sizeof(struct graph));
    t2->next=t1;
    t1->data=27;
    t1->next=NULL;

    //Data Base Done

    //Designing the first window of the application.

    system("color 80");
    printf("\n\t\t***************************************************");
    printf("\n\t\t*                                                 *");
    printf("\n\t\t*                                                 *");
    printf("\n\t\t*                                                 *");
    printf("\n\t\t*     WELCOME TO THE FLIGHT SEARCH SYSTEM         *");
    printf("\n\t\t*                                                 *");
    printf("\n\t\t*                                                 *");
    printf("\n\t\t*     It is a place where you search for          *");
    printf("\n\t\t*     direct flight between the two cities        *");
    printf("\n\t\t*     of India and also it provides the           *");
    printf("\n\t\t*     shortest route that user can to opted in    *");
    printf("\n\t\t*     case no direct flight is available.         *");
    printf("\n\t\t*                                                 *");
    printf("\n\t\t*                                                 *");
    printf("\n\t\t*                                                 *");
    printf("\n\t\t*                                                 *");
    printf("\n\t\t*     Hope you will enjoy this application.       *");
    printf("\n\t\t***************************************************");
    printf("\n\n\t\tpress any to continue......");
    getch();
    system("cls");

    //Reading the 1st-city name from the user...

    char ch1[19],ch2[19],cityname1[15],cityname2[15];
    int city1indx,city2indx;
    while(1)
    {
        printf("\n\n\n\tEnter the city name(starting point)...");
        scanf("%s",cityname);


        int c=0;
        for(int i=0;i<=60;i++)
        {
            if(strcmp(strlwr(cityname1),cityname[i])==0)
            {
                c=1;
                city1indx=i;
                break;
            }
        }
        printf("\n\n\n\tMessage:");
        if(c!=1)
        {
            printf("\n\n\t\tSorry such city doesnt exist please re-enter the cityname.");
            printf("\n\n\t\tpress any key to continue...");
            getch();
            system("cls");
        }
        else
        {
            printf("\n\n\t\tcity name accepted.");
            printf("\n\n\t\tpress any key to continue...");
            getch();
            system("cls");
            break;
        }
    }
    int c;

    //reading the 2-city name from the user...

    while(1)
    {
        printf("\n\n\n\tEnter the city name(destination point)...");
        scanf("%s",strlwr(cityname2));
       if(strcmp(strlwr(cityname1),strlwr(cityname2))==0)
        {
        printf("\n\n\tMessage:");
        printf("\n\n\t\tTwo city names cannot be same.");
        printf("\n\t\tplease re-enter the destination.");
        printf("\n\n\t\tpress any key to continue...");
        getch();
        system("cls");
        continue;
        }
        for(int i=0;i<=60;i++)
        {
            if(strcmp(strlwr(cityname2),cityname[i])==0)
            {
                city2indx=i;
                c=1;
                break;
            }
        }
        if(c==1)
        {
            printf("\n\n\tMessage:");
            printf("\n\t\tcity name is accepted.");
            printf("\n\n\t\tpress any key to continue...");
            getch();
            system("cls");
            break;
        }
        else
        {
            printf("\n\n\tMessage:");
            printf("\n\t\tSorry such city doesnt exist please re-enter the cityname.");
            printf("\n\t\tpress any key to continue...");
            getch();
            system("cls");

        }
    }
    printf("\n\n\tStarting Point-%s\t\tDestination Point-%s",cityname1,cityname2);
    printf("\n\n\n\n\tMessage:\n\n");
    c=0;
    struct graph *t;
    t=a[city1indx];
    while(1)
    {
        t=t->next;
        if(t->data==city2indx)
        {
            c=1;
            break;
        }
        if(t->next==NULL)
        {
            break;
        }
    }
    if(c==1)
    {
        printf("\tYes the direct flight is available between the two mentioned cities.");
    }
    else
    {
        printf("\tSorry no direct flight is available.\n\n");
        printf("\tPress any key to know the shortest path between the cities...");
        getch();
        system("cls");

        //Applying the breadth first search in the graph to find the shortest path..

        list<int> queue;
        int pred[61];
        bool visited[61];
        for(int i=0;i<61;i++)
        {
            visited[i]=false;
            pred[i]=-1;
        }
        visited[city1indx]=true;
        queue.push_back(city1indx);
        while(!queue.empty())
        {
            int u=queue.front();
            t=a[u];
            queue.pop_front();
            while(1)
            {
                if(visited[t->data]==false)
                {
                    visited[t->data]=true;
                    pred[t->data]=u;
                    queue.push_back(t->data);
                    if(t->data==city2indx)
                    {
                        break;
                    }

                }
                if(t->next==NULL)
                    break;
                t=t->next;

            }
            if(t->data==city2indx)
            {
                break;
            }

        }
        vector<int> path;
        int crawl = city2indx;
        path.push_back(crawl);
        while(pred[crawl]!= -1)
        {
            path.push_back(pred[crawl]);
            crawl = pred[crawl];
        }
        printf("\n\n\n\tMessage:\n\n");
        printf("\n\tThe Shortest Path the User can take to reach the destination:\n\n\t");
        for(int i = path.size()-1; i >= 0; i--)
        {
            string s=cityname[path[i]];
            cout<<s;
            if(i==0)
                break;
            cout<<" --> ";
        }
    }
    printf("\n\n\n\n\n\n\tHope you have enjoyed this application..");
    printf("\n\n\tpress any key to exit.");
    exit(0);
    return 0;
}
