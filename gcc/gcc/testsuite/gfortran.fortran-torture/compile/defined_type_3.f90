!This used to ICE as we chose the wrong type for the
! temporary to hold type%var
! fortran/18157
program testcase_fold
  type :: struct                            
     real      :: var       ! its julian sec  
  end type struct
  type(struct), dimension(:), pointer :: mystruct
  mystruct(1:2)%var = mystruct(2:3)%var
END Program testcase_fold
