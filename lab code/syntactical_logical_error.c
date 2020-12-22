             Syntactical Error               Logical Error
             ------------------              -------------
      
Definition:  It is an error              It is an error in   
             in syntax of                the business logic
             a program like              of a program like 
             missing semicolon           using a multiplication
             at the end of statement.    operator in a place where
                                         addition operator is 
                                         supposed to be used.
Program
Execution:   It does not                 It lets a program 
             let a program execute.      execute.
             
Output:      In case of compilation      Output is generated
             error, no output is         but it is unpredictable
             generated                   or it deviates from the
                                         expected output.
                                         
Time 
of detection: It is detected            It is detected during
              during compile time       run time.
              
Correction:   It is easier to correct   It is more difficult to
              since compiler tells      correct in comparision
              us in which line          to compilation error.
              error has occured.                     
                   
Example:      itn main()                 Q) Find sum of 3 numbers.
              {}                         Solution:   
              in the code snippet           int main(){
              above the name of data           add(3,7,8);
              type integer is misspelled    }
              - a syntactical error         void add(int a, int b, int c)                               
                                            {
                                              return a*b*c;     
                                            }     
                                            
                                            In the program above, the
                                            function add is supposed
                                            to return sum of a, b and c.
                                            But it is returning their
                                            product instead of sum - a 
                                            logical error.
