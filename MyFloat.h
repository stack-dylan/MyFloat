#ifndef MY_FLOAT_H
  #define MY_FLOAT_H
  
  #include <iostream> 
  using namespace std;
  
  class MyFloat{
    public:
    	//constructors
      MyFloat();
      MyFloat(float f);
      MyFloat(const MyFloat & rhs);
      virtual ~MyFloat() {};
      
      //output
      friend ostream& operator<<(std::ostream& strm, const MyFloat& f);
      
      //addition
      MyFloat operator+(const MyFloat& rhs) const; 
      
      //subtraction
      MyFloat operator-(const MyFloat& rhs) const; 
    
    	//comparison
    	bool operator==(const float rhs) const;
    	bool operator==(const MyFloat rhs) const;
      friend bool operator<(const MyFloat& lhs, const MyFloat& rhs);

      // void normalize(void);
      static MyFloat abs(const MyFloat& f);
    private:
		  unsigned int sign;
		  unsigned int exponent;
		  unsigned int mantissa;
		  
		  
		  void unpackFloat(float f);
		  float packFloat() const;
  
  };
  
  
#endif
