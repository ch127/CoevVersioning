/*
** model.h: Header file for the model.c functions.
**
** Linda Dib & Wim Hordijk    Last modified: 30 April 2013
*/

#ifndef _MODEL_H_
#define _MODEL_H_

void   transposeMatrix  (double **Qmatrix, double **QTmatrix);
void   condLikeFunction (double *condLike, double **Qmatrix, double **QTmatrix,
			 double *gi, double *gj, double ti, double tj,
			 double *MatrixA, double *MatrixB, double *MatrixC);
double executeCond      (double **Qm, double **Qtransposed, struct node *n,
			 double *probVector, double *MatrixA, double *MatrixB,
			 double *MatrixC);
void   setQ             (double **Qmatrix, double s, double d, double w1,
			 double w2, int *VectCoevComb );
void   setQNull         (double **Qmatrix, double w1, double w2);

#endif  /* _MODEL_H_ */