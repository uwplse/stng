SUBROUTINE stencil(ain, aout)
      IMPLICIT NONE
      real(kind=8) :: ain(258,258,258)
      real(kind=8) :: aout(258,258,258)

      integer :: i,j,k

      do i=2,258-1
        do j=2,258-1
          do k=2,258-1
            aout(i,j,k) = ain(i,j,k) + (1.0_8/6.0_8) * ( ain(i+1,j,k) + &
                                         ain(i-1,j,k) + &
                                         ain(j+1,j,k) + &
                                         ain(j-1,j,k) + &
                                         ain(k+1,j,k) + &
                                         ain(k-1,j,k) ) 
          enddo
        enddo
      enddo


END SUBROUTINE
