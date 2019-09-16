/*
 hexadecimal to binary and revers
 -->  vectors using some functions
 -->  reverse vetor
 -->  user input to get and print vectors
 bsort
 Q sort
 char array and getline
 string and getline,
 get only one char
 fibo series
 GCD
 Recursion
 Factorization
 insertion sort
 */
 #include <iostream>
 #include <iomanip>
 #include <stdlib.h>
 
 int readArgs(int n, char* arg[]);
 using namespace std;
 int main( int argc, char* argv[])
 {
 cout <<"Welcome to demo b y parag :- " <<endl;
 if (readArgs( argc, argv ) ==0 )
 cerr << "/nArguments Failed. "<<endl;
 cout << "Thank you ! BYE "<<endl;
 
 return 0;
 }
 
 
 int readArgs(int n, char* arg[])
 {
 cout <<"\nThe program file is the first argumets:-  "<<endl;
 cout << arg[0];
 cout <<" \nReading the remaning arguments as follows :- " <<endl;
 for (int i=1; i<n; i++)
 cout << arg[i]<<"  ";
 return 1;
 }
 
 //-----------------------------------------------------------------------------
 
 //----------------- unsigned integer hexadecimal, decimal,
 
 # include <iostream>
 # include <iomanip>
 using namespace std;
 int main ()
 {
 
 unsigned int ui,hi;
 
 cout <<"\nPlease Enter Unsigned integer :-  " <<endl;
 cin >>dec >> ui;
 cout << "\nDecimal :- " << dec << ui <<"\nHexaecimal :-  " << hex << ui << "\nOctal :- " << oct << ui << endl;
 
 cout <<"\n\nagain Please Enter in hexadecimal :-  " <<endl;
 cin >> hex >> hi;
 cout << "\nHeximal:- " << hex << hi << "\nDecimal :- " << dec << hi<<endl <<"Octal " << oct << ui << endl;
 
 return 0;
 }
 
 */

// ----------------------------------------------------------------vectors

 #include <iostream>
 #include <iomanip>
 #include <stdlib.h>
 #include <string>
 #include <fstream>
 #include <vector>
 
 using namespace std;
 int main()
 {
 // vector_name.push_back(value)
 // vector_name.at(Index)
 // vector_name.size()
 // vetorr_name.insert ( vector_name.begin() + index, new value )
 // vetorr_name.erase  ( vector_name.begin() + index, new value )
 // vector-name.clear() => removes all elements
 // vector-name.empty() => return TRUE/FALSE
 
 
 vector <int> myvector(5);
 myvector[0]=0;
 myvector[1]=1;
 myvector[2]=2;
 myvector[3]=3;
 myvector[4]=4;
 
 myvector.push_back(5);
 myvector.push_back(6);
 myvector.push_back(7);
 myvector.push_back(8);
 
 cout << "Vectors:-  " << endl;
 for(unsigned int i=0; i< myvector.size(); i++)
 cout << myvector.at(i)<<"  ";
 
 myvector.insert (myvector.begin()+0 , 2);
 cout << "\nNew Vectors:-  " << endl;
 for(unsigned int i=0; i< myvector.size(); i++)
 cout << myvector.at(i)<<"  ";
 
 if (myvector.empty())
 cout << "\nIs Empty"<< endl;
 else
 cout << "\nIs Not Empty"<<endl;
 
 myvector.clear();
 
 if (myvector.empty())
 cout << "\nNow its Empty"<< endl;
 else
 cout << "\n Not Empty"<<endl;
 
 cout << endl;
 return 0;
 }
 
 //-------------------------------------------------------------------------------------- Q-sort
 #include <iostream>
 #include <iomanip>
 #include <stdlib.h>
 #include <string>
 #include <fstream>
 #include <vector>
 using namespace std;
 
 // Function DEclaration
 void filledVector(vector <int> &); // input from user into vectors
 void printVector (vector <int > &);// print users input vectors
 void reverseVector( const vector<int>&);
 int main()
 {
 
 vector <int> myvector;
 filledVector(myvector);
 printVector(myvector);
 reverseVector(myvector);
 return 0;
 }
 
 // Function DEfinition
 void filledVector(vector <int>& myNewVector)
 {
 cout <<"\nWelcome to filling the vectors :-  \nPlease enter  values from ( -1 for stop to infinite)" <<endl;
 int input;
 cin >> input;
 while( input != -1)
 {
 myNewVector.push_back(input);
 cin >> input;
 }
 
 cout << " ";
 }
 void printVector(vector <int>& myNewVector)
 {
 cout <<"You entered vectors as follows:-  "<<endl;
 for (unsigned int i=0 ; i< myNewVector.size(); i++)
 cout <<myNewVector[i] << " ";
 
 cout << "" <<endl;
 }
 
 void reverseVector( const vector <int>& myVector)
 {
 cout <<"Vectors reverse;-  " <<endl;
 for (unsigned int i= myVector.size()  ; i>0; i-- )
 cout << myVector[i -1 ]<< " ";
 
 }
 
 //---------------------------------------------------------------------------------------
 int ascend (const void* ap, const void* bp);
 
 using namespace std;
 int main()
 {
 double arr1[10] = {12,45,7,89,9,3,33,45,100,10};
 cout <<"Unsorted data is :-  " <<endl;
 for (int i=0; i< 10; i++){
 cout << arr1[i]<< " ";
 }
 cout << "\n\nOutput of quick sort is:- " << endl;
 qsort( (void*)arr1, 10, sizeof(double), ascend);
 
 
 for ( int i=0; i< 10; ++i)
 cout << arr1[i] << " " << flush ;
 
 cout << "\n\n" <<endl;
 exit(0);
 
 return 0;
 }
 
 int ascend( const void* ap, const void* bp)
 {
 double a = *(double* )ap;
 double b=  *(double*) bp;
 return a-b;
 }
 
 */
// ---------------------------------------------------------------------char array amd getline

 #include <iostream>
 #include <string>
 using namespace std;
 int main()
 {
 char ch[1000];
 cout <<"Please Enter any string: ";
 cin.getline(ch, 1000) ; // Read the next keystroke.
 cout <<"Entered string is " << ch <<endl;
 return 0;
 }
 */
//-------------------------------------------------------------------------string and getline

 #include <iostream>
 #include <string>
 using namespace std;
 int main()
 {
 string str1;
 cout <<"Please Enter any string: ";
 getline(cin, str1); // Read the next keystroke.
 cout <<"Entered string is " << str1 <<endl;
 return 0;
 }
 */
//-------------------------------------------------------------------------get only ONE char

 #include <iostream>
 #include <string>
 using namespace std;
 int main()
 {
 char ch1;
 cout <<"Please Enter any  character: ";
 ch1 = cin.get(); // Read the next keystroke.
 cout <<"Char is " << ch1<<endl;
 return 0;
 }
 // -----------------------------fibo series-------------------------------
 
 #include <iostream>
 #include <iomanip>
 #include <stdlib.h>
 using namespace std;
 
 int fib(int x);
 
 int main()
 {
 int x ;
 int i=0;
 cout << "Enter the number of terms  : ";
 cin >> x;
 cout << "Fibonnaci Series : ";
 
 while(i < x)
 {
 cout << " " << fib(i);
 i++;
 }
 cout << endl;
 return 0;
 
 }
 
 
 int fib(int x)
 
 {
 if(x <= 0)
 return 0 ;
 
 else if ( x <= 1)
 return 1;
 
 else
 {
 return (fib(x-1) + fib(x-2) );
 }
 }
 
 
 //-----------------------------------------------------------------------------------------Gcd
 
 
 #include <iostream>
 #include<iomanip>
 
 int gcd (int x,int y);
 using namespace std;
 int main()
 
 {
 int x,y;
 cout << "Enter  two nuber "<<endl;
 cin >> x >>y;
 cout << "answer is :- ";
 gcd(x ,y );
 //cout <<  "Your answer is :-  "<<fact(n)<<endl;
 return 0;
 }
 
 int gcd(int x, int  y)
 {
 if (x % y == 0) // base case
 return y;
 else
 return gcd (y , x % y);
 }
 
 //------------------------------------------------------------------------------------------recursion
 
 
 #include <iostream>
 #include<iomanip>
 
 void funct(int n);
 using namespace std;
 int main()
 
 {
 int   n;
 cout << "Enter nuber "<<endl;
 cin >> n;
 cout << "answer is :- ";
 funct(n);
 // cout <<  "Your answer is :-  "<<fact(n)<<endl;
 return 0;
 }
 
 void funct(int n)
 {
 if (n<1)
 cout <<"Blast off" <<endl;
 else
 {
 cout << n << "..."<< flush;
 funct(n-1);
 }
 }
 
 //-----------------------------------------------------------------------------------------CEA- factorization
 
 #include <iostream>
 #include<iomanip>
 
 int int fact(int int n);
 using namespace std;
 int main()
 
 {
 int int  n;
 cout << "Enter nuber for Factorization "<<endl;
 cin >> n;
 cout <<  "Your answer is :-  "<<fact(n)<<endl;
 return 0;
 }
 
 int int fact(int int n)
 {
 if (n==0 || n==1) return 1;
 return n*(fact(n-1));
 }
 
 
 //------------------------------------------------------------------------------------------insertion sort
 #include <iostream>
 #include<iomanip>
 
 using namespace std;
 int main()
 {
 
 double data[10] = {2.3,3.1,2.2,109,.83,132,5.4,6.9,1.7,41};
 double* ap = data;
 int n =10; // set null pointer
 double* end = data+10;
 double newcomer; // null pointer
 double* pass; // null pointer
 double* hole; // null pointer
 
 pass = data+1;
 
 for (pass =data+1 ; *pass < end ; ++pass )
 {
 newcomer = *pass
 for(hole =pass; hole >data; --hole )
 {
 if ( * (hole-1) < newcomer)
 break;
 *hole = (*hole-1)
 
 }
 *hole = newcomer;
 }
 for (int i=-; i<n; ++i)
 {
 cout << data[i] <<"\n "<<endl;
 
 }
 
 cout<<"Bye !!! \n"<< endl;
 return 0;
 
 }
 
 # include <iostream>
 # include <iomanip>
 # include <vector>
 # include <string>
 # include <cstdio>
 # include <fstream>
 
 using namespace std;
 
 # define INF "input.txt"
 # define OUTF "output.txt"
 
 # define AE 0xF8
 # define BE 0x04
 # define CE 0x02
 # define DE 0x01
 # define AF 0xF0
 # define BF 0x08
 # define CF 0x06
 # define DF 0x01
 int main ()
 {
 vector < char > newVector; // vector created named newVector
 int getNumber;
 FILE* Fobject; // file object created here
 Fobject = fopen ("input.txt", "r"); // open file in reading mode
 if (Fobject){
 
 while(  feof(Fobject) == 0){ // checking that file reached to End of the file
 getNumber = fgetc(Fobject);
 //putchar(getNumber);
 newVector.push_back(getNumber); // Add to vectors
 }
 }else
 cerr <<"Oopse !! File opened failed. Check again !" <<endl;
 fclose(Fobject); // close the file here
 
 unsigned int x;
 for (int i=0; i<newVector.size(); i++){
 
 x = (int) newVector[i];
 if ((char) x == ' '){ // checkig for whitespace
 
 }else if (i % 2 == 0){ // switch bits for odd positions
 
 unsigned int ;
 a = (x & AE);
 b = (x & BE) >> 1;
 c = (x & CE) << 1;
 d = (x & DE);
 
 x = c|a|d|b;
 
 x= c | a | d | b;
 newVector [i] = (char) x;
 }
 else{
 unsigned int a,b,c,d;
 a = (x & AF);
 b = (x & BF) >> 3;
 c = (x & CF) ;
 d = (x & DF) << 3;
 x = c|a|d|b;
 
 x = c | a | d | b;
 newVector [i] = (char) x;
 }
 ofstream outfile(OUTF);
 
 if (outfile.is_open())
 {
 for (int i=0; i< newVector.size(); i++)
 {
 outfile.put( newVector[i] );
 cout << newVector[i];
 }
 }
 }
 cout << endl<<endl;
 return 0;
 }
 
 //------------------------- Encryption from Liberty Page  ----------------------------------------------------------------------------
 #include <iostream>
 #include <iomanip>
 
 using namespace std;
 #define AE 0x0E00        //0000 1110 0000 0000
 #define BE 0x001F        //0000 0000 0001 1111
 #define CE 0xF000        //1111 0000 0000 0000
 #define DE 0x01E0        //0000 0001 1110 0000
 
 unsigned short encrypt (unsigned short n);
 int main()
 {
 short in;
 unsigned short crypt;
 
 cout << "Enter short number for Encryptions:- "<<endl;
 cin >> in;
 crypt  = encrypt (( unsigned short) in);  // cast the integer to unsigned before calling encrypt
 cout <<"Input in  in Decimal Base 10 is :- "<<in <<endl;
 cout <<"Input in  Hex-Decimal Base 16 is :- "<< hex <<in <<endl<<endl<<endl;
 cout <<"Encrypted  in Decimal Base 10 is :- "<<dec <<crypt  <<endl;
 cout <<"Encrypted in Hexa-Decimal Base 16 is :- "<< hex << crypt <<endl;
 
 return 0;
 }
 
 unsigned short encrypt (unsigned short n)
 {
 unsigned short a,b,c,d; // for 4 parts of 'N'
 a = ( n & AE ) >> 4;
 b = ( n & BE ) >> 8;
 c = ( n & CE ) << 8;
 d = ( n & DE ) << 5;
 return c | a | d | b; // pack 4 parts back together
 }
 
 // ------------------------ Decryption ----------------------
 #include <iostream>
 using namespace std;
 #define AE 0x0E00        //0000 1110 0000 0000
 #define BE 0x001F        //0000 0000 0001 1111
 #define CE 0xF000        //1111 0000 0000 0000
 #define DE 0x01E0        //0000 0001 1110 0000
 
 unsigned short decrypt( unsigned short n);
 int main()
 {
 unsigned short in;
 unsigned short crypt;
 cout<< "enter a short number to encrypt: ";
 cin>>dec>>in;
 crypt=decrypt((unsigned short)in);
 cout<<"the input in base 10(decimal) is:"<<in<<"\n"
 <<"the input in base 16(hexadecimal) is:"<<hex<<in<<"\n\n"
 <<"the decrypted in base 10 is:"<<dec<<crypt<<"\n"
 <<"the decrypted in base 16 is:"<<hex<<crypt<<"\n\n";
 return 0;
 }
 
 unsigned short
 decrypt(unsigned short n)
 {
 unsigned short a,b,c,d;
 a=(n & AE) << 4;
 b=(n & BE) << 8;
 c=(n & CE) >> 8;
 d=(n & DE) >> 5;
 return c|a|d|b;
 }
 */


