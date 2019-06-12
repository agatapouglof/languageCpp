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
 std::istringstream tokenStream(s);
 while (std::getline(tokenStream, token, '|'))
 {
    tokens.push_back(token);
 }

 # sort int vector
 sort(v.begin(), v.end());

 # initilize array once with many nbelements
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

#  
