/**********************************************************************
 * 
 * forwsel.h
 * 
 * copyright (c) 2007, Karl W Broman
 *
 * last modified Jan, 2007
 * first written Jan, 2007
 *
 * Licensed under the GNU General Public License version 2 (June, 1991)
 *
 * C functions for the R/qtl package
 *
 * This is a simple routine to do forward selection in regression
 * to a fixed number of covariates
 *
 * Contains: R_markerforwsel, markerforwsel, 
 *           R_markerforwself2, markerforwself2 
 *  
 **********************************************************************/

/* R wrappers */
void R_markerforwsel(int *n, int *m, double *x, double *y,
		     int *maxsize, int *chosen, double *rss);

void R_markerforwself2(int *n, int *m, int *x, double *y,
		       int *maxsize, int *chosen, double *rss);

/**********************************************************************
 * markerforwsel 
 * 
 * n = number of individuals
 * m = number of covariates (not including intercept)
 *
 * X = covariate matrix, indexed as X[covariate][individual]
 * y = outcome
 *
 * maxsize = maximum number of covariates
 *
 * chosen = on output, index [0, 1, ..., (m-1)] of chosen covariates
 * rss = on output, rss for those models
 *
 **********************************************************************/
void markerforwsel(int n, int m, double **X, double *y,
		   int maxsize, int *chosen, double *rss);

/**********************************************************************
 * markerforwself2
 * 
 * the same as markerforwsel, but for an intercross, in which each
 * column must be expanded to two, and we must select on the pairs of
 * columns.
 *
 **********************************************************************/
void markerforwself2(int n, int m, double **X, double *y,
		     int maxsize, int *chosen, double *rss);

/* end of forwsel.h */