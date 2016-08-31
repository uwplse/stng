/*Crown Copyright 2012 AWE.
*
* This file is part of CloverLeaf.
*
* CloverLeaf is free software: you can redistribute it and/or modify it under
* the terms of the GNU General Public License as published by the
* Free Software Foundation, either version 3 of the License, or (at your option)
* any later version.
*
* CloverLeaf is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
* details.
*
* You should have received a copy of the GNU General Public License along with
* CloverLeaf. If not, see http://www.gnu.org/licenses/. */

/**
 *  @brief C mesh chunk generator
 *  @author Wayne Gaudin
 *  @details Still just a stub.
 *   
 *  Note that state one is always used as the background state, which is then
 *  overwritten by further state definitions.
 */

#include <stdio.h>
#include <stdlib.h>
#include "ftocmacros.h"
#include <math.h>

void generate_chunk_kernel_c_(int *xmin,int *xmax,int *ymin,int *ymax,
                              double *vertexx,
                              double *vertexy,
                              double *cellx,
                              double *celly,
                              double *density0,
                              double *energy0,
                              double *xvel0,
                              double *yvel0,
                              int *nmbr_f_stts,
                              double *state_density,
                              double *state_energy,
                              double *state_xvel,
                              double *state_yvel,
                              double *state_xmin,
                              double *state_xmax,
                              double *state_ymin,
                              double *state_ymax,
                              double *state_radius,
                              int *state_geometry,
                              int *g_rct,
                              int *g_crc,
                              int *g_pnt)


{
  int x_min=*xmin;
  int x_max=*xmax;
  int y_min=*ymin;
  int y_max=*ymax;
  int number_of_states=*nmbr_f_stts;
  int g_rect=*g_rct;
  int g_circ=*g_crc;
  int g_point=*g_pnt;
  double radius,x_cent,y_cent;
  int state;

  int j,k,jt,kt;

 {
  /* State 1 is always the background state */
  for (k=y_min-2;k<=y_max+2;k++) {
#pragma ivdep
    for (j=x_min-2;j<=x_max+2;j++) {
      energy0[FTNREF2D(j  ,k  ,x_max+4,x_min-2,y_min-2)]=state_energy[FTNREF1D(1,1)];
    }
  }

  for (k=y_min-2;k<=y_max+2;k++) {
#pragma ivdep
    for (j=x_min-2;j<=x_max+2;j++) {
      density0[FTNREF2D(j  ,k  ,x_max+4,x_min-2,y_min-2)]=state_density[FTNREF1D(1,1)];
   }
  }

  for (k=y_min-2;k<=y_max+2;k++) {
#pragma ivdep
    for (j=x_min-2;j<=x_max+2;j++) {
      xvel0[FTNREF2D(j  ,k  ,x_max+5,x_min-2,y_min-2)]=state_xvel[FTNREF1D(1,1)];
   }
  }

  for (k=y_min-2;k<=y_max+2;k++) {
#pragma ivdep
    for (j=x_min-2;j<=x_max+2;j++) {
      yvel0[FTNREF2D(j  ,k  ,x_max+5,x_min-2,y_min-2)]=state_yvel[FTNREF1D(1,1)];
   }
  }

  for ( state=2;state<=number_of_states;state++) {

/* Could the velocity setting be thread unsafe? */
    x_cent=state_xmin[FTNREF1D(state,1)];
    y_cent=state_ymin[FTNREF1D(state,1)];

    for (k=y_min-2;k<=y_max+2;k++) {
#pragma ivdep
      for (j=x_min-2;j<=x_max+2;j++) {
        if(state_geometry[FTNREF1D(state,1)]==g_rect ) {
          if(vertexx[FTNREF1D(j+1,x_min-2)]>=state_xmin[FTNREF1D(state,1)] && vertexx[FTNREF1D(j,x_min-2)]<state_xmax[FTNREF1D(state,1)]) {
            if(vertexy[FTNREF1D(k+1,y_min-2)]>=state_ymin[FTNREF1D(state,1)] && vertexy[FTNREF1D(k,y_min-2)]<state_ymax[FTNREF1D(state,1)]) {
              density0[FTNREF2D(j  ,k  ,x_max+4,x_min-2,y_min-2)]=state_density[FTNREF1D(state,1)];
              energy0[FTNREF2D(j  ,k  ,x_max+4,x_min-2,y_min-2)]=state_energy[FTNREF1D(state,1)];
              for (kt=k;kt<=k+1;kt++) {
                for (jt=j;jt<=j+1;jt++) {
		  xvel0[FTNREF2D(jt,kt,x_max+5,x_min-2,y_min-2)]=state_xvel[FTNREF1D(state,1)];
		  yvel0[FTNREF2D(jt,kt,x_max+5,x_min-2,y_min-2)]=state_yvel[FTNREF1D(state,1)];
	        }
	      }
            }
          }
	}else if(state_geometry[FTNREF1D(state,1)]==g_circ ) {
          radius=sqrt((cellx[FTNREF1D(j,x_min-2)]-x_cent)*(cellx[FTNREF1D(j,x_min-2)]-x_cent)+(celly[FTNREF1D(k,y_min-2)]-y_cent)*(celly[FTNREF1D(k,y_min-2)]-y_cent));
          if(radius<=state_radius[FTNREF1D(state,1)]) {
            density0[FTNREF2D(j  ,k  ,x_max+4,x_min-2,y_min-2)]=state_density[FTNREF1D(state,1)];
            energy0[FTNREF2D(j  ,k  ,x_max+4,x_min-2,y_min-2)]=state_density[FTNREF1D(state,1)];
            for (kt=k;kt<=k+1;kt++) {
              for (jt=j;jt<=j+1;jt++) {
                xvel0[FTNREF2D(jt,kt,x_max+5,x_min-2,y_min-2)]=state_xvel[FTNREF1D(state,1)];
                yvel0[FTNREF2D(jt,kt,x_max+5,x_min-2,y_min-2)]=state_yvel[FTNREF1D(state,1)];
              }
            }
          }
	}else if(state_geometry[FTNREF1D(state,1)]==g_point) {
          if(vertexx[FTNREF1D(j,x_min-2)]==x_cent && vertexy[FTNREF1D(j,x_min-2)]==y_cent) {
            density0[FTNREF2D(j  ,k  ,x_max+4,x_min-2,y_min-2)]=state_density[FTNREF1D(state,1)];
            energy0[FTNREF2D(j  ,k  ,x_max+4,x_min-2,y_min-2)]=state_density[FTNREF1D(state,1)];
            for (kt=k;kt<=k+1;kt++) {
              for (jt=j;jt<=j+1;jt++) {
                xvel0[FTNREF2D(jt,kt,x_max+5,x_min-2,y_min-2)]=state_xvel[FTNREF1D(state,1)];
                yvel0[FTNREF2D(jt,kt,x_max+5,x_min-2,y_min-2)]=state_yvel[FTNREF1D(state,1)];
	      }
	    }
	  }
	}
      }

    }

  }

 }

}
