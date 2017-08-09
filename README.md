# 3DGraphic
Have you ever dreamt about manipulating a point?
## Description
This program allows you to manipulate a point in three-dimensional space. You can either rotate a point about an arbitrary axis or scale it relative to a given point in three-dimensional space.

![stack Overflow](http://i.imgur.com/cQ6Bg9v.png)

## How it works.
The program takes advantage of quaternions and transforamtion matrix to compute coordinates of new point. To simplify, Quaternions are the way of repesentig objects trafsormation. Quaternion can be expressed as a matrix or algebraically. The algebraically form is q = \[s * xi * yj * zk] where s, x, y and z are all scalars. i,j,k are imaginary components and the are representing all 3 axis.

### Example:

In order to count a new coordinate of our point we have to use ready formula for this.
 
![](https://latex.codecogs.com/gif.latex?p'&space;=&space;qpq^{-1}) 
 
Where
 
![](https://latex.codecogs.com/gif.latex?q&space;=&space;[cos\frac{\Theta&space;}{2},sin\frac{\Theta&space;}{2}\bar{V}])

Let p be the quaternion for (1,0,0) i.e. p = \[0+i]
Let q be a unit quaternion aligned with the z-axis which rotates p 180°
i.e q = \[cos90,sin90(k)] = \[0 + k]
then q^(-1) = \[-k]
and p' = \[0 + k] * \[0 + i] * \[0 - k] = \[0 + j] * \[0 - k] = \[0 - i]
\[0  i] points to the rotated point: (1, 0, 0), which is correct.
