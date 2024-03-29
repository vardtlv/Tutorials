# :arrow_right_hook: Linear Probing

In Linear Probing, we resolve the collisions by incrementing the index until the position is not taken.
> index = index + 1

Before collasion our array was organized in the following way.

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

In order to resolve the collision, we increment the index.

> index = 7 + 1 = 8

And now we can insert the 58, at position 8.

|  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10 |  11 |  12 |  13 |  14 |  15 |  16 |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|     |     |     |     |     |  73 |     |  7  |  58 |     |     |     |     |     |     |  49 |     |

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
