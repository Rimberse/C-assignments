cmake_minimum_required(VERSION 3.21)
project(SE_TP1 C)

set(CMAKE_C_STANDARD 99)

add_executable(SE_TP1 main.c GestionTableau2D/2DR.c GestionTableau2D/test2DR.c GestionTableau2D/2DR.h GestionTableau2D/test2DR.h GestionMatrice/t_matrice.c GestionMatrice/t_matrice.h GestionMatrice/test_t_matrice.c GestionMatrice/test_t_matrice.h GestionEcritureLecture/MatrixRW.c GestionEcritureLecture/MatrixRW.h GestionEcritureLecture/testMatrixRW.c GestionEcritureLecture/testMatrixRW.h)
