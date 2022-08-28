#!/usr/bin/env python
# coding: utf-8

# In[8]:


import numpy as np
arr=np.array([1,2,3,4,5])
print(arr)

#check numpy version
print(np.__version__)

#creating the array
arr1=np.array([2,3,2,1])
print(arr1)
print(type(arr1))

#we can also pass tuple to an array
arr=np.array((1,2,3,4))
print(arr)


# In[45]:


"""0D,1D,2D,3D arrays"""
#0D
import numpy as np
arr=np.array(0);
print(arr)

#1D
arr=np.array((1,2,3,4))
print(arr)

#2D
arr=np.array(([1,2,3],[4,5,6]))
print(arr)

#3d
arr=np.array([[1,2,3],[4,5,6],[7,8,9],[10,11,12]])
print(arr)


#checking the number of dimensions
a=np.array(0)
b=np.array([1,2,3])
c=np.array([[1,2,3],[4,5,6]])
d=np.array([[[1,2,3],[4,5,6]],[[7,8,9],[10,11,12]]])
print("dimenstions of a:",a.ndim)
print("dimenstions of b:",b.ndim)
print("dimenstions of c:", c.ndim)
print("dimenstions of d:",d.ndim)


# In[34]:


#accessing the 1d array element
import numpy as np
arr=np.array([1,2,3,4,5])
print(arr[2])
print(arr[4])
print(arr[1]+arr[3])


# In[40]:


#accesing the 2D array element
import numpy as np
arr=np.array([[1,2,3],[4,5,6]])
print(arr[1][2])


# In[44]:


#accessing 3d array element
import numpy as np
arr=np.array([[[1,2,3],[4,5,6]],[[7,8,9],[10,11,12]]])
print(arr[0,1,2])


# In[46]:


#negative indexing
import numpy as np
arr=np.array([[1,2,3,4],[5,6,7,8]])
print(arr[1,-2])


# In[54]:


"""SLICING IN ARRAY"""
import numpy as np
arr=np.array([1,2,3,4,5,6,7])
print(arr[0:4])
print(arr[1:5:2])
print(arr[:3:1])
print(arr[2::2])

#neagtive slicing
print(arr[-3:-1])

#slicing in 2d array
arr=np.array([[1,2,3,4],[6,7,8,9]])
print(arr[0:2,1])
print(arr[1,0:2])


# In[59]:


"""CHECKING THE DATATYPE"""
import numpy as np
arr=np.array([1,2,3,4,5])
print(arr.dtype)

arr=np.array(["abs","bgd"])
print(arr.dtype)

#creating the array with defined datatpe
arr=np.array([1,2,3,4],dtype='S')
print(arr)
print(arr.dtype)


# In[66]:


"""NUMPY ARRAY - COPY & VIEW"""
#COPY
import numpy as np
arr=np.array([1,2,3,4,5])
x=arr.copy()
x[0]=10
print("copied and changed array :",x)
print("Original array :",arr)
print(x.base)

#VIEW
import numpy as np
arr=np.array([1,2,3,4,5,6])
x=arr.view()
x[1]=100
print("AFTER VIEW : ",x)
print("ORIGINAL ARRAY : ",arr)
print(x.base)


# In[67]:


"""SHAPE OF ARRAY"""
import numpy as np
arr=np.array(((1,2,3,4,),(4,5,6,7)))
print(arr.shape)


# In[76]:


"""RESHAPE AN ARRAY"""
#reshaping from 1d to 2d
import numpy as np
arr=np.array([1,2,3,4,5,6,7,8])
newarr=arr.reshape(2,4)
print(newarr)

#reshaping from 1d to 3d
arr=np.array([1,2,3,4,5,6,7,8,9,10,11,12])
newarr=arr.reshape(3,4)
print(newarr)

#reshape example
arr=np.array([1,2,3,4,5,6,7,8,9])
newarr=arr.reshape(3,3)
print(newarr)


# In[77]:


"""FLATTENING ARRAY"""
#3d to 1d
import numpy as np
arr=np.array([[1,2,3],[4,5,6],[7,8,9]])
newarr=arr.reshape(-1)
print(newarr)


# In[22]:


"""ITERATING THE ARRAY ELEMENT"""

#iterating in 2d array

import numpy as np
arr=np.array([1,2,3,4])
for x in arr:
    print(x);
    
#iteraating in 2D array

import numpy as np
arr=np.array([[1,2],[3,4]])
for x in arr:
    print(x);

#iterating in 3d array

import numpy as np
arr=np.array([[[1,2,3],[4,5,6]],[[6,7,8],[9,10,11]]])
for x in arr:
    print(x)
    
#iterate down to scaler
import numpy as np
arr=np.array([[[1,2,3],[4,5,6]],[[6,7,8],[9,10,11]]])
for x in arr:
    for y in x:
        for z in y:
            print(z);
            
#iterating using nditer
import numpy as np
arr=np.array([1,2,3,4])
for x in np.nditer(arr):
    print(x)


# In[33]:


"""ARRAY CONCATENATION"""
import numpy as np
arr1=np.array([-1,2,3])
arr2=np.array([4,-5,6])
res=np.concatenate((arr1,arr2))
print(res)

#concatenate 2d array
arr1=np.array([[1,2],[4,5]])
arr2=np.array([[4,5],[6,7]])
res=np.concatenate((arr1,arr2),axis=1)
print(res)

#stacking
arr1=np.array([[1,2],[4,5]])
arr2=np.array([[4,5],[6,7]])
res=np.stack((arr1,arr2),axis=1)
print(res)

#stacking along rows - hstack
arr1=np.array([[1,2],[4,5]])
arr2=np.array([[4,5],[6,7]])
res=np.hstack((arr1,arr2))
print(res)

#stacking along column
arr1=np.array([[1,2,5]])
arr2=np.array([[4,5,7]])
res=np.vstack((arr1,arr2))
print(res)

#stacking along depth/height
arr1=np.array([[1,2],[4,5]])
arr2=np.array([[4,5],[6,7]])
res=np.dstack((arr1,arr2))
print(res)


# In[45]:


"""ARRAY SPLITTING """

import numpy as np
arr1=np.array([1,2,3,4,5])
arr=np.array_split(arr1,2)
print(arr)

#splitting 2d array
arr = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9], [10, 11, 12], [13, 14, 15], [16, 17, 18]])
arr1=np.array_split(arr,3,axis=1)


# In[53]:


"""SEARCH IN ARRAY"""
import numpy as np
arr=np.array([1,2,3,4,5])
arr1=np.where(arr==4)
print(arr1)

#find index where num is even
arr=np.array([1,2,3,4,5])
arr1=np.where(arr%2==0)
print(arr1)

#find odd index
arr=np.array([1,2,3,4,5])
arr1=np.where(arr%2==1)
print(arr1)

#search sorted
arr=np.array([1,2,3,4,5])
arr1=np.searchsorted(arr,4)
print(arr1)

#side right
arr=np.array([1,2,3,4,5])
arr1=np.searchsorted(arr,4,side="right")
print(arr1)


# In[4]:


"""SORT THE ARRAY"""
import numpy as np
arr=np.array([1,2,12,23,5,6])
arr=np.sort(arr)
print(arr)

#sort array alphabetically
arr=np.array(["gurjeet","aurgeet","srujeet"])
arr=np.sort(arr)
print(arr)

#sort boolean values
arr=np.array([True,False,True,True])
arr=np.sort(arr)
print(arr)

#sorting the 2d array
arr=np.array([[1,4,2],[7,6,2]])
arr=np.sort(arr)
print(arr)


# In[7]:


"""FILTERING ARRAY """
import numpy as np
arr=np.array([2,3,1,4])
x=[True,False,True,False]
newarr=arr[x]
print(newarr)

arr=np.array([42,43,41])
filterarr=arr>41
newarr=arr[filterarr]
print(arr);


#even element in array
arr=np.array([1,2,3,4,5,6,7,8])
filterarr=arr%2==0
newarr=arr[filterarr]
print(filterarr)
print(newarr)


# In[ ]:




