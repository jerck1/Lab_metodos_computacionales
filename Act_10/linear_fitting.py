#Program used to compute least squared fitting of a set of data X,Y
# Y=A+BX
################
## Conventions
##X: List where data are stored
## SS:sum of x or y squared
## S:sum of x or y
## SXY:sum of xi*yi
## n:number of data
## A:intercept
## B:slope

import numpy as np
def S(X):
	X=np.array(X)
	return np.sum(X)
def SS(X):
	X=np.array(X)
	return np.sum(X**2)
def SXY(X,Y):
	X=np.array(X)
	Y=np.array(Y)
	return np.sum(X*Y)
def delta(X):
	X=np.array(X)
	return len(X)*SS(X)-(S(X))**2
def A(X,Y):
	return (SS(X)*S(Y)-S(X)*SXY(X,Y))/delta(X)
def B(X,Y):
	return (len(X)*SXY(X,Y)-S(X)*S(Y))/delta(X)
def sigma_y(X,Y):
	a=A(X,Y)
	b=B(X,Y)
	X=np.array(X)
	Y=np.array(Y)
	return np.sqrt(SS(Y-a-b*X)/(len(X)-2))
def sigma_A(X,Y):
	return  sigma_y(X,Y)*np.sqrt(SS(X))/delta(X)
def sigma_B(X,Y):
	return  sigma_y(X,Y)*len(X)/delta(X)
def fit(X,Y):
    return "y={:.4f}+{}x".format(A(X,Y),B(X,Y))
def y_pred(x,X,Y):
	a=A(X,Y)
	b=B(X,Y)
	x=np.array(x)
	return a+b*x
