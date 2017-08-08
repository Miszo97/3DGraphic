# 3DGraphic
Have you ever dreamt about manipulating a point?
## Description
This program allows you to manipulate a point in three-dimensional space. You can either rotate a point about an arbitrary axis or scale it relative to a given point in three-dimensional space.

![stack Overflow](http://i.imgur.com/cQ6Bg9v.png)

## How it works.
The program takes advantage of quaternions and transforamtion matrix to compute coordinates of new point. To simplify, Quaternions are the way of repesentig objects trafsormation. Quaternion can be expressed as a matrix or algebraically. The algebraically form is q = [s  xi  yj  zk] where s, x, y and z are all scalars. i,j,k are imaginary components and the are representing all 3 axis.

### Example:

In order to count a new coordinate of our point we have to use ready formula for this.
 
![](https://latex.codecogs.com/gif.latex?p'&space;=&space;qpq^{-1}) 



