#include <iostream>
using namespace std;

// Q1
void pat1(int n){
   // triangle
  for(int i=0; i <n; i++){
    for(int j=0; j<=i; j++){
      cout << "*";
    }
    cout << endl;
  }

}

// Q2
void pat2(int n){
  // number triangle
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      cout << j;
    } 
    cout << endl;
  }

}

// Q3
void pat3(int n){
  // number triangle but every row has number similar to the i
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      cout << i;
    } 
    cout << endl;
  }
}

// Q4
void pat4(int n){
  // reverse triangle
  for(int i=1; i<=n; i++){
    for(int j= 0; j<n-i+1; j++){
      cout << "*";
    } 
  cout << endl;
  }
}

// Q5
void pat5(int n){
  // reverse triangle number
  for(int i=1; i<=n; i++){
    for(int j= 1; j<=n-i+1; j++){
      cout << j;
    } 
  cout << endl;
  }
}

// Q6 
void pat6(int n){
  // reverse number triangle
  for(int i=1; i<=n; i++){
    for(int j= 1; j<=n-i+1; j++){
      cout << j;
    }
  cout << endl;
  }

}

//Q7
void pat7(int n){
   // pyramid 


  for(int i=0; i<n; i++){
    // spaces
    for(int j= 0; j<n-i-1; j++){
      cout << " ";
    }
    //stars
    for(int j= 0; j<2*i+1; j++){
      cout << "*";
    }
    //spaces
    for(int j= 0; j<n-i-1; j++){
      cout << " ";
    }
  cout << endl;
  }

}

// Q8
void pat8(int n){
   //  reverse pyramid 


  for(int i=0; i<n; i++){
    // spaces
    for(int j= 0; j<i; j++){
      cout << " ";
    }
    //stars
    for(int j= 0; j<2*n-(2*i+1); j++){
      cout << "*";
    }
    //spaces
    for(int j= 0; j<i; j++){
      cout << " ";
    }
  cout << endl;
  }

}

// Q10
void pat10(int n){
// side pyramid
  for(int i=1; i<=2*n-1; i++){
    int stars = i;
    if (i>n) stars = 2*n-i;
    for (int j= 1; j<=stars ; j++)
    {
      cout << "*";

    }
    cout << endl;
  }
}

void pat10a(int n){

  for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
      cout << "*";
    }
   
  cout << endl;
  }
}
// side pyramid 10a & 10b combined
void pat10b(int n){

  for(int i=0; i<n; i++){
    for(int j=0; j<n-i-1; j++){
      cout << "*";
    }
   
  cout << endl;
  }
}

// Q11
void pat11(int n){
  int start= 1;
  for(int i=0; i<n;i++){
    if( i%2== 0) start = 1;
    else start = 0;
    for ( int j = 0; j <=i; j++)
    {
      cout << start;
      start = 1-start;
    }
    cout << endl;
}
}

// Q12
void pat12(int n){
  // number traingle something
  for(int i=0; i<n;i++){
    //number
    for ( int j=1; j <=i; j++){
      cout << j;
    }

    //space
    for ( int j=1; j<=2*n-(2*i+2); j++){
      cout << " ";
    }

    //number
    for ( int j=i; j >=1; j--){
      cout << j;
    }
    cout << endl;
}
}

// Q13
void pat13(int n) {
  // abcd traingle
  char ch = 'A';
  for(int i=0; i<n; i++){
    for (int j = 0; j<=i; j++){
      char val = ch + j;
      cout << val;
    }
    cout << endl;
  }
}

// Q14
void pat14(int n) {
  // reverse abc traingle
  char ch = 'A';
  for(int i=0; i<n; i++){
    for (int j = 0; j<n-i; j++){
      char val = ch + j;
      cout << val;
    }
    cout << endl;
  }
}

// Q15
void pat15(int n) {
  // abcd triangle with same alphabet in row
  char ch = 'A';
  for(int i=0; i<n; i++){
    for (int j = 0; j<=i; j++){
      cout << ch;
    }
    ch++;
    cout << endl;
  }
}

// Q16
void pat16(int n) {
  //pyramid abcd
  
  for(int i=0; i<n; i++){
    // spaces
    for(int j= 0; j<n-i-1; j++){
      cout << " ";
    }
    
  // characters
    char ch = 'A';
    int breakp = (2*i+1)/2;
    for(int j= 1; j<=2*i+1; j++){
    cout << ch;
    if (j <= breakp) ch++;
    else ch--;
    }
    //spaces
    for(int j= 0; j<n-i-1; j++){
      cout << " ";
    }
  cout << endl;
  }
  
}

// Q17
void pat17(int n) {
  // triangle starts with E
  
  for(int i=0; i<n; i++){
    for (char ch = 'E'-i; ch<='E'; ch++){
      cout << ch << " ";
    }
    cout << endl;
  }
}

// Q18
void pat18(int n){
  
  // diamond pattern inside square
  for (int i=0; i<n; i++){
    // upper stars
    for(int j=0; j<n-i;j++){
      cout << "*";
    }

  //spaces
    for(int j=0; j<2*i; j++){
      cout << " ";
    }

     // upper stars
    for(int j=0; j<n-i;j++){
      cout << "*";
    }
  cout << endl;

  }

 // lower part 

  for(int i=0; i<n; i++){
      // lower stars 
    for(int j=0; j<=i;j++){
      cout << "*";
    }

  // lower spaces
    for(int j=0; j<2*n-(2*i+2); j++){
      cout << " ";
    }

     // lower stars
    for(int j=0; j<=i;j++){
      cout << "*";
    }
  cout << endl;
  }

}

// Q19
void pat19(int n){
  //butterfly pattern

  for (int i=0; i<n; i++){
    // upper stars
    for(int j=0; j<=i;j++){
      cout << "*";
    }

  //spaces
    for(int j=0; j<2*n-(2*i+2); j++){
      cout << " ";
    }

     // upper stars
    for(int j=0; j<=i;j++){
      cout << "*";
    }
  cout << endl;

  }

 // lower part 

  for(int i=0; i<n; i++){
      // lower stars 
    for(int j=0; j<n-i-1;j++){
      cout << "*";
    }

  // lower spaces
    for(int j=0; j<2*i+2; j++){
      cout << " ";
    }

     // lower stars
    for(int j=0; j<n-i-1;j++){
      cout << "*";
    }
  cout << endl;
  }
}

// Q20
void pat20(int n){
  // square
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(i==0 || j==0 || i==n-1 || j==n-1){
        cout << "*";
      }else 
        cout << " ";
      
    }
    cout << endl;
  }
}

// Q21
void pat21(int n){
  // square with outer number different and inner number
  for(int i=0; i<2*n-1; i++){
    for(int j=0; j<2*n-1; j++){
      int top =i;
      int left = j;
      int right = (2*n-2) -j;
      int down = (2*n-2) -i;
      cout << (n - min(min(top,down), min(left,right)));
    }
    cout << endl;
  }
}



int main(){
  int num;
  cout << "enter a number: ";
  cin >> num;
    
    pat18(num);
    
  return 0;

}
