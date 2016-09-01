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
 *  @brief C field summary kernel
 *  @author Wayne Gaudin
 *  @details The total mass, internal energy, kinetic energy and volume weighted
 *  pressure for the chunk is calculated.
 */

#include <stdio.h>
#include <stdlib.h>
#include "ftocmacros.h"
#include <math.h>

void field_summary_kernel_c_(int *xmin,
                          int *xmax,
                          int *ymin,
                          int *ymax,
                          double *volume,
                          double *density0,
                          double *energy0,
                          double *pressure,
                          double *xvel0,
                          double *yvel0,
                          double *vl,
                          double *mss,
                          double *ien,
                          double *ken,
                          double *prss)
{

  int x_min=*xmin;
  int x_max=*xmax;
  int y_min=*ymin;
  int y_max=*ymax;
  double vol=*vl;
  double mass=*mss;
  double ie=*ien;
  double ke=*ken;
  double press=*prss;

  int j,k,jv,kv;
  double vsqrd,cell_vol,cell_mass;


  vol=0.0;
  mass=0.0;
  ie=0.0;
  ke=0.0;;
  press=0.0;

 {
  for (k=y_min;k<=y_max;k++) {
#pragma ivdep
    for (j=x_min;j<=x_max;j++) {
      vsqrd=0.0;
      for (kv=k;kv<=k+1;kv++) {
        for (jv=j;jv<=j+1;jv++) {
          vsqrd=vsqrd+0.25*(xvel0[FTNREF2D(jv ,kv ,x_max+5,x_min-2,y_min-2)]*xvel0[FTNREF2D(jv ,kv ,x_max+5,x_min-2,y_min-2)]
                           +yvel0[FTNREF2D(jv ,kv ,x_max+5,x_min-2,y_min-2)]*yvel0[FTNREF2D(jv ,kv ,x_max+5,x_min-2,y_min-2)]);
        }
      }
      cell_vol=volume[FTNREF2D(j  ,k  ,x_max+4,x_min-2,y_min-2)];
      cell_mass=cell_vol*density0[FTNREF2D(j  ,k  ,x_max+4,x_min-2,y_min-2)];
      vol=vol+cell_vol;
      mass=mass+cell_mass;
      ie=ie+cell_mass*energy0[FTNREF2D(j  ,k  ,x_max+4,x_min-2,y_min-2)];
      ke=ke+cell_mass*0.5*vsqrd;
      press=press+cell_vol*pressure[FTNREF2D(j  ,k  ,x_max+4,x_min-2,y_min-2)];
    }
  }

 }

 *vl=vol;
 *mss=mass;
 *ien=ie;
 *ken=ke;
 *prss=press;

}
