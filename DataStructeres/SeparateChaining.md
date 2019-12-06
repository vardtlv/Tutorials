# :link: Separate Chaining

In Linear Probing, we resolve the collasions by linking the new input in to already existing one.

Before collasion our array was organized in following way.

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

In order to resolve the collision, we link 58 to 7.

|  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10 |  11 |  12 |  13 |  14 |  15 |  16 |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|     |     |     |     |     |  73 |     |  7  |     |     |     |     |     |     |     |  49 |     |
|     |     |     |     |     |     |     |   :arrow_down: |     |     |     |     |     |     |     |     |     |
|     |     |     |     |     |     |     |  58 |     |     |     |     |     |     |     |     |     |

<br />

>>__(~~{7, 7}~~, ~~{15, 49}~~, ~~{5, 73}~~, ~~{7, 58}~~, {13, 30})__

<br />
