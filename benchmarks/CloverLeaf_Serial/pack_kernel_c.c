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
 *  @brief C mpi buffer packing kernel
 *  @author Wayne Gaudin
 *  @details Packs/unpacks mpi send and receive buffers
 */

#include <stdio.h>
#include <stdlib.h>
#include "ftocmacros.h"
#include <math.h>

void pack_left_right_buffers_c_(int *xmin,int *xmax,int *ymin,int *ymax,
                                int *chnk_lft,int *chnk_rght,int *xtrnl_fc,
                                int *xinc,int *yinc,int *dpth,int *sz,
                                double *field, double *left_snd_buffer, double *right_snd_buffer)

{
  int x_min=*xmin;
  int x_max=*xmax;
  int y_min=*ymin;
  int y_max=*ymax;
  int chunk_left=*chnk_lft;
  int chunk_right=*chnk_rght;
  int external_face=*xtrnl_fc;
  int x_inc=*xinc;
  int y_inc=*yinc;
  int depth=*dpth;

  int j,k,index;

 {

  if(chunk_left!=external_face) {
    for (k=y_min-depth;k<=y_max+y_inc+depth;k++) {
#pragma ivdep
      for (j=1;j<=depth;j++) {
        index=j+(k+depth-1)*depth;
        left_snd_buffer[FTNREF1D(index,1)]=field[FTNREF2D(x_min+x_inc-1+j,k,x_max+4+x_inc,x_min-2,y_min-2)];
      }
    }
  }
  if(chunk_right!=external_face) {
    for (k=y_min-depth;k<=y_max+y_inc+depth;k++) {
#pragma ivdep
      for (j=1;j<=depth;j++) {
        index=j+(k+depth-1)*depth;
        right_snd_buffer[FTNREF1D(index,1)]=field[FTNREF2D(x_max+1-j,k,x_max+4+x_inc,x_min-2,y_min-2)];
      }
    }
  }

 }

}

void unpack_left_right_buffers_c_(int *xmin,int *xmax,int *ymin,int *ymax,
                                  int *chnk_lft,int *chnk_rght,int *xtrnl_fc,
                                  int *xinc,int *yinc,int *dpth,int *sz,
                                  double *field, double *left_rcv_buffer, double *right_rcv_buffer)

{
  int x_min=*xmin;
  int x_max=*xmax;
  int y_min=*ymin;
  int y_max=*ymax;
  int chunk_left=*chnk_lft;
  int chunk_right=*chnk_rght;
  int external_face=*xtrnl_fc;
  int x_inc=*xinc;
  int y_inc=*yinc;
  int depth=*dpth;

  int j,k,index;

 {

  if(chunk_left!=external_face) {
    for (k=y_min-depth;k<=y_max+y_inc+depth;k++) {
#pragma ivdep
      for (j=1;j<=depth;j++) {
        index=j+(k+depth-1)*depth;
        field[FTNREF2D(x_min-j,k,x_max+4+x_inc,x_min-2,y_min-2)]=left_rcv_buffer[FTNREF1D(index,1)];
      }
    }
  }
  if(chunk_right!=external_face) {
    for (k=y_min-depth;k<=y_max+y_inc+depth;k++) {
#pragma ivdep
      for (j=1;j<=depth;j++) {
        index=j+(k+depth-1)*depth;
        field[FTNREF2D(x_max+x_inc+j,k,x_max+4+x_inc,x_min-2,y_min-2)]=right_rcv_buffer[FTNREF1D(index,1)];
      }
    }
  }

 }

}

void pack_top_bottom_buffers_c_(int *xmin,int *xmax,int *ymin,int *ymax,
                                int *chnk_bttm,int *chnk_tp,int *xtrnl_fc,
                                int *xinc,int *yinc,int *dpth,int *sz,
                                double *field, double *bottom_snd_buffer, double *top_snd_buffer)

{
  int x_min=*xmin;
  int x_max=*xmax;
  int y_min=*ymin;
  int y_max=*ymax;
  int chunk_top=*chnk_tp;
  int chunk_bottom=*chnk_bttm;
  int external_face=*xtrnl_fc;
  int x_inc=*xinc;
  int y_inc=*yinc;
  int depth=*dpth;

  int j,k,index;

 {

  if(chunk_bottom!=external_face) {
    for (k=1;k<=depth;k++) {
      for (j=x_min-depth;j<=x_max+x_inc+depth;j++) {
        index=j+depth+(k-1)*(x_max+x_inc+(2*depth));
        bottom_snd_buffer[FTNREF1D(index,1)]=field[FTNREF2D(j,y_min+y_inc-1+k,x_max+4+x_inc,x_min-2,y_min-2)];
      }
    }
  }
  if(chunk_top!=external_face) {
    for (k=1;k<=depth;k++) {
      for (j=x_min-depth;j<=x_max+x_inc+depth;j++) {
        index=j+depth+(k-1)*(x_max+x_inc+(2*depth));
        top_snd_buffer[FTNREF1D(index,1)]=field[FTNREF2D(j,y_max+1-k,x_max+4+x_inc,x_min-2,y_min-2)];
      }
    }
  }

 }

}

void unpack_top_bottom_buffers_c_(int *xmin,int *xmax,int *ymin,int *ymax,
                                  int *chnk_bttm,int *chnk_tp,int *xtrnl_fc,
                                  int *xinc,int *yinc,int *dpth,int *sz,
                                  double *field, double *bottom_rcv_buffer, double *top_rcv_buffer)

{
  int x_min=*xmin;
  int x_max=*xmax;
  int y_min=*ymin;
  int y_max=*ymax;
  int chunk_top=*chnk_tp;
  int chunk_bottom=*chnk_bttm;
  int external_face=*xtrnl_fc;
  int x_inc=*xinc;
  int y_inc=*yinc;
  int depth=*dpth;

  int j,k,index;

 {

  if(chunk_bottom!=external_face) {
    for (k=1;k<=depth;k++) {
      for (j=x_min-depth;j<=x_max+x_inc+depth;j++) {
        index=j+depth+(k-1)*(x_max+x_inc+(2*depth));
        field[FTNREF2D(j,y_min-k,x_max+4+x_inc,x_min-2,y_min-2)]=bottom_rcv_buffer[FTNREF1D(index,1)];
      }
    }
  }
  if(chunk_top!=external_face) {
    for (k=1;k<=depth;k++) {
      for (j=x_min-depth;j<=x_max+x_inc+depth;j++) {
        index=j+depth+(k-1)*(x_max+x_inc+(2*depth));
        field[FTNREF2D(j,y_max+y_inc+k,x_max+4+x_inc,x_min-2,y_min-2)]=top_rcv_buffer[FTNREF1D(index,1)];
      }
    }
  }

 }

}

