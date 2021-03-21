# boolean declaration
bool test;

# length of array tab
(sizeof(tab)/sizeof(*tab))

# struct declaration " ; at the end very important"
struct product {
  int weight;
  double price;
} ;

 # split a string into a vector  by pipe
 std::vector<std::string> tokens;
 std::string token;
 string s = "|:p:|.p.|:p:|.p.|:p:|.p.|:::|.p.|"; // string to split
 std::istringstream tokenStream  (s);
 while (std::getline(tokenStream, token, '|'))
 {
    tokens.push_back(token);
 }

 # sort int vector
 sort(v.begin(), v.end());

 # initilize array once with many elements
 int nCount[5] = {0, 1, 2, 3, 4};

 # Read a getline
 getline(cin,input);

 # convert string to int using stringstream
  string mystr ("1204");
  int myint;
  stringstream(mystr) >> myint

# Compare Two strings
  str1.compare(str2) == 0 // if the two are equals

# Pass over the \n when you want to read a string with getline after a int
 cin.ignore();

# Fix number of digit afer . eg x.iiii
  cout << fixed;
  cout.precision(4) // to have 4 digits after the dot (.)

#initilize map
  map<int , char> = { {1,'a'}, {4,'h'}, {5, '1'} };

#convert char to int
// a Char is an integer  interpreted through ASCII table 0 ==> 48 and 1 ==> 49
  char a = '6';
  int b = a-48; // b as integer == 6

# Convert int to string
  text = to_string(number);
  or
  stringstream sss;
  sss << number;
  input_text = sss.str();

# Find if subsring is in string
    if(str.find(substr) != string::npos)
    str.find ==> return the position of first occurence else return string::npos
    string::npos ==> end of string

# fix getline after cin
  make a dummy getline before the real getline
  getline(cin, dummy);
  getline(cin, text);

# convert char to int
  ref :: http://www.cplusplus.com/forum/beginner/68260/
 you can use the ASCII codes. A char is actually just a number interpreted through the ASCII table. By looking at the table, you can find that '0' is 48, '1' 49 and so on until '9' as 57. As a result, you can do this:
  char a = '6';
  int b = a-48;

# convert full string to lowercase
string text;
         std::for_each(text.begin(), text.end(), [](char & c) {
            c = ::tolower(c);
        });
# read input until the end of file of invalid input type
string input;
while(cin >> input){
  
}

