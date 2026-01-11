#include <iostream>
using namespace std;


void pat1(int n){
  for(int i=0; i <n; i++){
    for(int j=0; j<=i; j++){
      cout << "*";
    } // triangle
    cout << endl;
  }

}

void pat2(int n){
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      cout << j;
    } // number triangle
    cout << endl;
  }

}

void pat3(int n){
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      cout << i;
    } // number triangle but every row has number similar to the i
    cout << endl;
  }
}

void pat4(int n){
  for(int i=1; i<=n; i++){
    for(int j= 0; j<n-i+1; j++){
      cout << "*";
    } // reverse triangle
  cout << endl;
  }
}

void pat5(int n){
  for(int i=1; i<=n; i++){
    for(int j= 1; j<=n-i+1; j++){
      cout << j;
    } // reverse triangle number
  cout << endl;
  }
}

void pat6(int n){
  for(int i=1; i<=n; i++){
    for(int j= 1; j<=n-i+1; j++){
      cout << j;
    }
  cout << endl;
  }
// reverse number triangle
}

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

void pat17(int n) {
  // triangle starts with E
  
  for(int i=0; i<n; i++){
    for (char ch = 'E'-i; ch<='E'; ch++){
      cout << ch << " ";
    }
    cout << endl;
  }
}

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