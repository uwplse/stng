SUBROUTINE simple(j, x_min, x_max)
INTEGER :: j
INTEGER :: x_max
INTEGER :: x_min
REAL(kind=8), DIMENSION(x_min:x_max) :: in, out

DO j = x_min, x_max
  out(j) = in(j)
END DO

END SUBROUTINE 
