# 3DGraphic
Have you ever dreamt about manipulating a point?
## Description
This program allows you to manipulate a point in three-dimensional space. You can either rotate a point about an arbitrary axis or scale it relative to a given point in three-dimensional space.

![stack Overflow](http://i.imgur.com/cQ6Bg9v.png)

## How it works
The program takes advantage of quaternions and transforamtion matrix to compute coordinates of new point. To simplify, Quaternions are the way of repesentig objects trafsormation. Quaternion can be expressed as a matrix or algebraically. The algebraically form is q = \[s * xi * yj * zk] where s, x, y and z are all scalars. i,j,k are imaginary components and the are representing all 3 axis.

### Example:

In order to count a new coordinates of our point we have to use ready formula for this.
 
![](https://latex.codecogs.com/gif.latex?p'&space;=&space;qpq^{-1}) <br />

Where<br />

![](https://latex.codecogs.com/gif.latex?q&space;=&space;[cos\frac{\Theta&space;}{2},sin\frac{\Theta&space;}{2}\bar{V}])<br />

Let p be the quaternion for (1,0,0) i.e. p = \[0+i]<br />
Let q be a unit quaternion aligned with the z-axis which rotates p 180°<br />
i.e q = \[cos90,sin90(k)] = \[0 + k]<br />
then q^(-1) = \[-k]<br />
Knowing that i2 = j2 = k2 = ijk = −1 <br />
p' = \[0 + k] * \[0 + i] * \[0 - k] = \[0 + j] * \[0 - k] = \[0 - i]<br />
\[0 - i] points to the rotated point: (-1, 0, 0), which is correct.<br />

#### References:
John Vince - Geometry for Computer Graphics
