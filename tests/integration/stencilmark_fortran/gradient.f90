SUBROUTINE stencil(ain, aout1, aout2, aout3)
      IMPLICIT NONE
      real(kind=8) :: aout1(258,258,258)
      real(kind=8) :: aout2(258,258,258)
      real(kind=8) :: aout3(258,258,258)
      real(kind=8) :: ain(258,258,258)

      integer :: i,j,k

      do i=2,258-1
        do j=2,258-1
          do k=2,258-1
            aout1(i,j,k) = ain(i,j,k) + (1.0_8/6.0_8) * ( ain(i+1,j,k) + &
                                         ain(i-1,j,k) )
            aout2(i,j,k) = ain(i,j,k) + (2.0_8/6.0_8) * ( ain(j+1,j,k) + &
                                         ain(j-1,j,k) )
            aout3(i,j,k) = ain(i,j,k) + (3.0_8/6.0_8) * ( ain(k+1,j,k) + &
                                         ain(k-1,j,k) )
          enddo
        enddo
      enddo


END SUBROUTINE
