! test case for invalid json being generated.

MODULE accelerate_kernel_loop82_mod
CONTAINS
SUBROUTINE accelerate_kernel_loop82(j,k,density0,dt,nodal_mass,stepbymass,volume,x_max,x_min,y_max,y_min)
INTEGER :: j
INTEGER :: k
REAL(kind=8) :: dt
REAL(kind=8) :: nodal_mass
INTEGER :: x_max
INTEGER :: x_min
INTEGER :: y_max
INTEGER :: y_min
REAL(kind=8), DIMENSION((x_min - 2):(x_max + 2),(y_min - 2):(y_max + 2)) :: density0
REAL(kind=8), DIMENSION((x_min - 2):(x_max + 3),(y_min - 2):(y_max + 3)) :: stepbymass
REAL(kind=8), DIMENSION((x_min - 2):(x_max + 2),(y_min - 2):(y_max + 2)) :: volume
DO k = y_min, y_max + 1
DO j = x_min, x_max + 1
nodal_mass = (density0(j - 1,k - 1) * volume(j - 1,k - 1) + density0(j,k - 1) * volume(j,k - 1) + density0(j,k) * volume(j,k) + density0(j - 1,k) * volume(j - 1,k)) * 0.25_8
stepbymass(j,k) = 0.5_8 * dt / nodal_mass
END DO
END DO
END SUBROUTINE 

END MODULE accelerate_kernel_loop82_mod

