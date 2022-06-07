#include <iostream>
#include <fstream>
#include <vector>
#include <time.h>
#include <string>
#include<bitset>
using namespace std;
string resTxt = "";
int swi = 0;
int swi2 = 0;
int sensitivity = 90;
int longcyc = 2;
int longcyc2 = 3; //+1 or 2
int minPeriod = 1;
int corr = 2;
int x = 0.2;
int y = 0.3;
int Do = 0;
int Do2 = 0;
int it = 0;
int test = 0;
int nul = 0;
int ack = 0;
int And = 0;
int Or = 0;
int cyc = 0;
int cycle = 0;
string numa = "";
string swif = "";
int qu = 0;
int quc = 0;
int quc2 = 0;
int sta = 0;
string binary = "";
int ite = 0;
int integer = 0;
int b = 0,bb = 0;
string receive = "";
vector<string> tokenise(string str, char tok)
{
	string word = "";
	vector<string> res;
	for (auto x : str)
	{
		if (x == tok)
		{
			res.push_back(word);
			word = "";
		}
		else
		{
			word = word + x;
		}
	}
	return res;
}
void send() {
   ite++;
   //paradox computation
   integer = 0;
   /*
   for(int aa = 0;aa < 4;aa++){
   	for(int aa = 0;aa < 4;aa++){
   	for(int aaa = 0;aaa < 4;aaa++){
   	for(int aaaa = 0;aaaa < 4;aaaa++){
   	for(int aaaaa = 0;aaaaa < 4;aaaaa++){
   		if (aa*aaa*aaaa*aaaaa == Math.floor(Math.random() * (1024)) + 0){
   */
   //integer = aa*aaa*aaaa*aaaaa;
   integer = 117; //message
   /*
   	}
   }
   }
   }
   }
   }
   */
   string resultint = std::bitset< 64 >( integer ).to_string();
   //paradox computation
  string msg = "@" + to_string(ite) + " " + resultint[ite]; //represents 1 bit.
   if(msg.find("@0")!=std::string::npos) {
      if(msg.find(" 1")!=std::string::npos) {
         for(int a = 0; a < 500; a++) {
            int b = 1;
            numa += b + ",";
         }
         receive += msg + ",";
      }
   }
   if(msg.find("@1")!=std::string::npos) {
      if(msg.find(" 1")!=std::string::npos) {
         for(int a = 0; a < 500; a++) {
            int b = 1;
            numa += b + ",";
         }
         receive += msg + ",";
      }
   }
   if(msg.find("@2")!=std::string::npos) {
      if(msg.find(" 1")!=std::string::npos) {
         for(int a = 0; a < 500; a++) {
            int b = 1;
            numa += b + ",";
         }
         receive += msg + ",";
      }
   }
   if(msg.find("@3")!=std::string::npos) {
      if(msg.find(" 1")!=std::string::npos) {
         for(int a = 0; a < 500; a++) {
            int b = 1;
            numa += b + ",";
         }
         receive += msg + ",";
      }
   }
   if(msg.find("@4")!=std::string::npos) {
      if(msg.find(" 1")!=std::string::npos) {
         for(int a = 0; a < 500; a++) {
            int b = 1;
            numa += b + ",";
         }
         receive += msg + ",";
      }
   }
   if(msg.find("@5")!=std::string::npos) {
      if(msg.find(" 1")!=std::string::npos) {
         for(int a = 0; a < 500; a++) {
            int b = 1;
            numa += b + ",";
         }
         receive += msg + ",";
      }
   }
   if(msg.find("@6")!=std::string::npos) {
      if(msg.find(" 1")!=std::string::npos) {
         for(int a = 0; a < 500; a++) {
            int b = 1;
            numa += b + ",";
         }
         receive += msg + ",";
      }
   }
   if(msg.find("@7")!=std::string::npos) {
      if(msg.find(" 1")!=std::string::npos) {
         for(int a = 0; a < 500; a++) {
            int b = 1;
            numa += b + ",";
         }
         receive += msg + ",";
      }
   }
}
void pri(string binary){

    int n = 0;
for(int a = 0; a < binary.length();a++){

    cout << binary[a];
    if (n == 8){
        cout << ",";
        n = 0;

    }
    n++;
}
cout << endl;
}
void OnMotion( string data) {
    string data2;
int sta = 0;


   if(Do == 1) {
      Do2 = 1;
      if(qu == 1 && it == 0) {
         qu = 0;
         it++;
      }
      if(qu == 0 && it == 0) {
         qu = 1;
         it++;
      }
      it = 0;
   }
   if(test == 0) {
      b = 0;
      bb = 0;
    data2 = data;
      test++;
   }
   if(test == 1) {
      test = 0;
      int a = 0;
      for(int a = 0; a < data.length(); a++) {
         if(data[a] > 10) {
            b++;
         }
      }
      if(data2.length() != 0) {
         for(int aa = 0; aa < data2.length(); aa++) {
            if(data[aa] > 10) {
               if(data2[aa] > data[a] || data2[aa] < data[a]) {
                  bb++;

               }
            }
         }

      }
      if(qu == 0) {

         if(b > 700 && b < 750 || bb > 700 && bb < 750) {
            Or++;
         }
         if(b > 700 && b < 750 && bb > 700 && bb < 750) {
            And++;
            if(Do == 1) {
               if(qu == 1 && it == 0) {
                  qu = 0;
                  it++;
               }
               if(qu == 0 && it == 0) {
                  qu = 1;
                  it++;
               }
               it = 0;
            }

         }
      }
      if(qu == 1) {
         if(b > 700 && b < 750 || bb > 700 && bb < 750) {
            if(Do2 == 1) {
               if(qu == 1 && it == 0) {
                  qu = 0;
                  it++;
               }
               if(qu == 0 && it == 0) {
                  qu = 1;
                  Do2 = 0;
                  it++;
               }
               it = 0;
               And++;
            }
         }
      }
      if(b > 700 && b < 750 && bb > 700 && bb < 750) {
         Or++;
      }
   }
   if(And > corr) {
      vector<string> check = tokenise(numa,',');
      check = tokenise(numa,',');
      if(check[cyc] == to_string(qu)) {
         if(swi == longcyc) {
            qu = rand() % 2;
         }
         swi++;
         Do = 1;
         ack++;
         And = 0;
         cyc++;
         //app.ShowPopup("Nominal");
         if(sta == 0) {
            if(ite != 8) {
               binary += "0";
                pri(binary);
               ite++;
            }
            if(ite == 8) {
               binary += ",";
               ite = 0;
            }
            sta = 1;
         }
      }
      //most of the time it knows the number before it matches...
      if(check[cyc] == to_string(qu)) {
         ack++;
         if(qu == 1 && it == 0) {
            qu = 0;
            it++;
         }
         if(qu == 0 && it == 0) {
            qu = 1;
            it++;
         }
         it = 0;
         if(swi2 == longcyc2) {
            qu = rand() % 2;
            swi2 = 0;
         }
         swi2++;
         And = 0;
         Or = 0;
         cyc++;
         if(sta == 0) {
            //app.ShowPopup("Nominal" );
            if(ite != 8) {
               //binary += "0";
               //ite++;
            }
            if(ite == 8) {
               binary += ",";
               ite = 0;
            }
            sta = 1;
         }
      }
   }
   if(Or > corr) {
      vector<string> check = tokenise(numa,',');
      //most of the time it knows the number before it matches...
      if(check[cyc] == to_string(qu)) {
         ack++;
         if(qu == 1 && it == 0) {
            qu = 0;
            it++;
         }
         if(qu == 0 && it == 0) {
            qu = 1;
            it++;
         }
         it = 0;
         if(swi2 == longcyc2) {
            qu = rand() % 2;
            it = 0;
            swi2 = 0;
         }
         swi2++;
         Or = 0;
         cyc++;
         //app.ShowPopup("Nominal" );
         if(ite != 8) {
            //binary += "0";

            //ite++;
         }
         if(ite == 8) {
            binary += ",";
            ite = 0;
         }
         if(sta == 0) {
            sta = 1;
         }
      }
      if(check[cyc] != to_string(qu)) {
         if(swi == longcyc) {
            qu = rand() % 2;
            swi = 0;
         }
         swi++;
         Do = 1;
         nul++;
         Or = 0;
         And = 0;
         cyc++;
         if(ite != 8) {
            binary += "1";
pri(binary);
            ite++;
         }
         if(ite == 8) {
            binary += ",";
            ite = 0;
            pri(binary);
         }
         //get count of 1's
      }
   }

}
int main()
{
    srand (time(NULL));
     for(int a = 0; a < 500; a++) {
      int b = rand() % 2;
      numa += to_string(b) + ",";
   }
   for(int t = 0;t < 500;t++){
   string data = "";
   for(int a = 0; a < 500; a++) {
      int b = rand() % 20;
      data += to_string(b);
   }
    OnMotion(data);
    send();
   }
}

int data2;

