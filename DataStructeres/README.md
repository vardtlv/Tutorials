# What is Data Structures
  In an era of massive data consumption, it is very important to store the data efficiently by using minimum space, energy and time. Data Structures is used to organise data, which includes collected the data elements, linking those data elements together and applying different operations on it, such as finding an element, deleting it, sorting, etc.
  
   ## How To Navigate
  Follow the [link](https://github.com/vardtlv/Tutorials/blob/master/DataStructeres/HowTonavigate.md#questionhow-to-navigate) to learn how to navigate in this page.
  
  
  ## Data Structures implemented in C++
  There exist different Data Structures that can be implemented in C++. Some examples would include:
  
   >-   Arrays, [link](http://www.cplusplus.com/doc/tutorial/arrays/) to external source,
   >-   Linked Lists,[link](https://www.geeksforgeeks.org/data-structures/linked-list/) to external source,
   >-   Queues/Stacks, [link](http://www.cplusplus.com/reference/queue/queue/)/[link](http://www.cplusplus.com/reference/stack/stack/) to external source,
   >-   Trees, [link](https://www.geeksforgeeks.org/binary-tree-set-1-introduction/) to external source,
   >-   Graphs, [link](https://stackoverflow.com/questions/5493474/graph-implementation-c) to external source,
   >-   [<font size="30">___Hash Table___</font>](https://github.com/vardtlv/Tutorials/blob/master/DataStructeres/README.md#what-are-hash-maps)
   
  ## What is a Hash Table
  _Hash Table_ is a _Data Structure_ that allows developers to access stored data elements in efficient time. In order to store the data elements into _Hash Table_, we have to choose a specific __key__ to represent it. For example, for a student's data the key can be their name or the Student ID and for product in the store it can be its Item Number. To make the storing and accessing the data even more efficient we compress the keys by computing their __Hash Values__ using __Hash Functions__. 
  
:small_blue_diamond: For Example for Student ID number __A12345678__, the _Hash Value_ can be computed using the _Hash Function_:
    
   >>  h(k) = k % 13   
   >>  Where, k is the key of the element inserted.
   
   In this case,
   >>  h(12345678) = 12345678 % 13 = 7, therefore the Hash Value would be equal to 7.
   
The elements of _Hash Table_, are stored in Arrays. <br /> <br />
:small_blue_diamond:  Let's assume we have an array with a capacity of _5_ elements, and our data is _10_ randomly generated numbers. Each key would be equal to a number it is representing. And we will use the following hash function:

   >>  h(k) = k % 17
<br />

  In order to generate the random numbers, we can write the following C++ code. You can find the .cpp file 
  [here](https://github.com/vardtlv/Tutorials/blob/master/DataStructeres/createRandomNumbers.cpp) 
  and [**YouTube**](https://www.youtube.com/watch?v=uq9FM-nCHVw) video on how to compile and run the following code in Vim.

<br />

```cpp
#include <iostream>

using namespace std;

// This program will create same sequence of  
// random numbers on every program run  
int main(void) 
{ 
    // Loop 5 time to generate 5 random numbers 
    for (int i = 1; i < 6; i++){ 
        int newNumber = rand();// rand() is used to generate a random number
        newNumber = newNumber % 100; //making sure that number is from 0 to 99
        cout << "\nData Element " << i<< ": " <<  newNumber << endl;// printing the number
        cout << "\n"; 
    }   

    return 0;  
}
```

The previous code generated the following random numbers:

> {7, 49,  73,  58,  30}.

![image1](https://github.com/vardtlv/Tutorials/blob/master/DataStructeres/RandomNumbersOutput.png)

Now for each key we can compute the _Hash Value_, using the _Hash Function_ 

>>  h(k) = k % 17.

To print the computed _Hash Values_ we can expand our previously made [.cpp](https://github.com/vardtlv/Tutorials/blob/master/DataStructeres/createRandomNumbers.cpp) file. You can find the .cpp file 
  [here](https://github.com/vardtlv/Tutorials/blob/master/DataStructeres/createHashValues.cpp) 
  and [**YouTube**](https://www.youtube.com/watch?v=hTUaPLqkruw) video on how to compile and run the following code in Vim.

```cpp
#include <iostream>


using namespace std;

// This program will create same sequence of  
// random numbers on every program run  
int main(void) 
{ 
    cout << " \n\t\t\t Number \t Hash Value(k%17) \n"; 
    // Loop 5 time to generate 5 random numbers 
    for (int i = 1; i < 6; i++){ 
        int newNumber = rand();// rand() is used to generate a random number
        newNumber = newNumber % 100; //making sure that number is from 0 to 99
        cout << "\nData Element " << i << ": \t   " <<  newNumber <<"\t\t\t" <<newNumber%17 <<endl;// printing the number
        //cout << "\n"; 
    }   

    cout << "\n"; 
    return 0;  
}
```

The previous code generated the following _Hash Value_:

> {7, 15,  5,  7,  13}.

![image1](https://github.com/vardtlv/Tutorials/blob/master/DataStructeres/HashValueOutput.png)

Now that we have the _Hash Values_ we can populate out array of size 17. 
<br />
>>__({7, 7}, {15, 49}, {5, 73}, {7, 58}, {13, 30})__
<br />
<br />
First, it's empty:

|  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10 |  11 |  12 |  13 |  14 |  15 |  16 |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |  


Now we can add the element 7 with a key value 7, at a position 7.

> {7, 7}

|  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10 |  11 |  12 |  13 |  14 |  15 |  16 |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|     |     |     |     |     |     |     |  7  |     |     |     |     |     |     |     |     |     |  

<br />

>>__(~~{7, 7}~~, {15, 49}, {5, 73}, {7, 58}, {13, 30})__

<br /><br />
Add the element 49 with a key value 15, at a position 15.

> {15, 49}

|  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10 |  11 |  12 |  13 |  14 |  15 |  16 |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|     |     |     |     |     |     |     |  7  |     |     |     |     |     |     |     |  49 |     | 

<br />

>>__(~~{7, 7}~~, ~~{15, 49}~~, {5, 73}, {7, 58}, {13, 30})__

<br /><br />
Add the element 73 with a key value 5, at a position 5.

> {5, 73}

|  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10 |  11 |  12 |  13 |  14 |  15 |  16 |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|     |     |     |     |     |  73 |     |  7  |     |     |     |     |     |     |     |  49 |     |

<br />

>>__(~~{7, 7}~~, ~~{15, 49}~~, ~~{5, 73}~~, {7, 58}, {13, 30})__

<br /><br />
Add the element 58 with a key value 7, at a position 7.

> {7, 58}

<br />

:disappointed_relieved: But wait, the position 7 is already taken by the element 7.

<br /> 

To resolve the following issue, I will introduce three different methods to resolve the collision.
<br />
## Collision Resolution in Hashing

-   [**Linear Probing**](https://github.com/vardtlv/Tutorials/blob/master/DataStructeres/LinearProbing.md#linear-probing)
  > Increment the index by 1.
-   [**Separate Chaining**](https://github.com/vardtlv/Tutorials/blob/master/DataStructeres/SeparateChaining.md#separate-chaining)
  > Link to existing index.
-   [**Double Hashing**](https://github.com/vardtlv/Tutorials/blob/master/DataStructeres/DoubleHashing.md#double-hashing)
  > Increment the index by second Hash Value.

