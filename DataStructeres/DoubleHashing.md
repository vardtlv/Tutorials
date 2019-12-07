# :fast_forward: Double Hashing

In _Double Hashing_, we resolve the collisions by adding another _Hash Function_ and adding the result into the old hash function. In our case the new _Hash Function_ will be the following:

> h2(k) = 13 - k%13.

Before collision our array was organized in the following way.

|  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10 |  11 |  12 |  13 |  14 |  15 |  16 |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|     |     |     |     |     |  73 |     |  7  |     |     |     |     |     |     |     |  49 |     |

<br />

>>__(~~{7, 7}~~, ~~{15, 49}~~, ~~{5, 73}~~, {7, 58}, {13, 30})__

<br />
And when we tried to add 58, with the key 7, index 7 was already taken.

<br />

> {7, 58}
  
<br />

In order to resolve the collision, we compute the second _Hash Value_.

> h2(7) = 13 - 58%13 = 13 - 6 = 7

Now we can use the _h(2)_ to compute the new _Hash Value_:

>( h(7) + h2(7) )%17 = ( 7 + 7 ) % 17 = 14

And now we can insert the 58, at position 14.

|  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10 |  11 |  12 |  13 |  14 |  15 |  16 |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|     |     |     |     |     |  73 |     |  7  |     |     |     |     |     |     |  58 |  49 |     |

<br />

>>__(~~{7, 7}~~, ~~{15, 49}~~, ~~{5, 73}~~, ~~{7, 58}~~, {13, 30})__

<br />

Now when the collision is resolved we can add the last value. Add the element 30 with a key value 13, at a position 13.

|  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10 |  11 |  12 |  13 |  14 |  15 |  16 |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|     |     |     |     |     |  73 |     |  7  |  58 |     |     |     |     |  30 |     |  49 |     |

<br />

>>__(~~{7, 7}~~, ~~{15, 49}~~, ~~{5, 73}~~, ~~{7, 58}~~, ~~{13, 30})~~__

<br />

Now our Array is complete. We can still add values until all indexes of the array is taken, then we have to increment the size of the Array.
