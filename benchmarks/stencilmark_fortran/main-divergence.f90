PROGRAM stencilmark
      IMPLICIT NONE
      real(kind=8) :: A0(258,258,258)
      real(kind=8) :: A1(258,258,258)
      real(kind=8) :: A2(258,258,258)
      real(kind=8) :: A3(258,258,258)
      real(kind=8) :: T0(258,258,258)
      real(kind=8) :: T1(258,258,258)
      real :: tstart, tfinish, tmin
      integer i,j,k,trial

      ! initialize arrays
      do i=1,258
        do j=1,258
          do k=1,258
            A0(i,j,k) = RAND()
            A1(i,j,k) = RAND()
            A2(i,j,k) = RAND()
            A3(i,j,k) = RAND()
          enddo
        enddo
      enddo

      tmin = 99999999.0_8
      do trial=1,5

        ! clear the cache
        call clear_cache(T0,T1)

        ! call the stencil
        call cpu_time(tstart)
        call stencil(A0, A1, A2, A3)
        call cpu_time(tfinish)
        print '("Time = ",f6.3," seconds.")',tfinish-tstart

        if (tfinish-tstart < tmin) then
          tmin = tfinish-tstart
        endif
      enddo
      print '("Min Time = ",f6.3," seconds.")',tmin

CONTAINS
      SUBROUTINE clear_cache(T0,T1)
        real(kind=8) :: T0(258,258,258)
        real(kind=8) :: T1(258,258,258)
        integer :: i,j,k

        do i=1,258
          do j=1,258
            do k=1,258
              T0(i,j,k) = RAND()
              T1(i,j,k) = RAND()
            enddo
          enddo
        enddo
      END SUBROUTINE

END PROGRAM stencilmark
