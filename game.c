#include "game.h"

int game[15][25] = {{0, 0, 0, 0, 0,
                    0, 0, 0, 0, 0,
                    0, 0, 4, 0, 0,
                    0, 4, 4, 4, 0,
                    0, 0, 0, 0, 0},
                     
                    {0, 0, 0, 0, 0,
                    0, 0, 0, 0, 0,
                    0, 0, 0, 0, 0,
                    0, 0, 4, 0, 0,
                    0, 4, 4, 4, 0},
                    
                    {0, 0, 2, 0, 0,
                    0, 0, 0, 0, 0,
                    0, 0, 0, 0, 0,
                    0, 0, 4, 0, 0,
                    0, 4, 4, 4, 0},
                    
                    {0, 2, 2, 2, 0,
                    0, 0, 2, 0, 0,
                    0, 0, 0, 0, 0,
                    0, 0, 4, 0, 0,
                    0, 4, 4, 4, 0},
                                        
                    {0, 2, 2, 2, 0,
                    0, 0, 2, 0, 0,
                    0, 0, 0, 0, 0,
                    0, 4, 0, 0, 0,
                    4, 4, 4, 0, 0},                   
                     
                    {0, 2, 2, 2, 0,
                    0, 0, 2, 0, 0,
                    0, 0, 0, 0, 0,
                    4, 0, 0, 0, 0,
                    4, 4, 0, 0, 0},
                     
                    {0, 2, 2, 2, 0,
                    0, 0, 2, 0, 0,
                    0, 0, 7, 0, 0,
                    4, 0, 0, 0, 0,
                    4, 4, 0, 0, 0},
                    
                    {0, 2, 2, 2, 0,
                    0, 0, 2, 0, 0,
                    0, 0, 0, 0, 0,
                    4, 0, 7, 0, 0,
                    4, 4, 0, 0, 0},
                    
                    {0, 2, 2, 2, 0,
                    0, 0, 2, 0, 0,
                    0, 0, 0, 0, 0,
                    4, 0, 0, 0, 0,
                    4, 4, 7, 0, 0},
                    
                    {0, 2, 2, 2, 0,
                    0, 0, 2, 0, 0,
                    0, 0, 0, 0, 0,
                    0, 4, 0, 0, 0,
                    4, 4, 4, 0, 0},
                     
                    {0, 2, 2, 2, 0,
                    0, 0, 2, 0, 0,
                    0, 0, 0, 0, 0,
                    0, 0, 4, 0, 0,
                    0, 4, 4, 4, 0},
                    
                    {0, 0, 2, 2, 2,
                    0, 0, 0, 2, 0,
                    0, 0, 7, 0, 0,
                    0, 0, 4, 0, 0,
                    0, 4, 4, 4, 0},
                    
                    {0, 0, 2, 2, 2,
                    0, 0, 7, 2, 0,
                    0, 0, 0, 0, 0,
                    0, 0, 4, 0, 0,
                    0, 4, 4, 4, 0},
                    
                    {0, 0, 7, 7, 7,
                    0, 0, 0, 7, 0,
                    0, 0, 0, 0, 0,
                    0, 0, 4, 0, 0,
                    0, 4, 4, 4, 0},
                     
                    {0, 0, 0, 0, 0,
                    0, 0, 0, 0, 0,
                    0, 0, 4, 0, 0,
                    0, 4, 4, 4, 0,
                    0, 0, 0, 0, 0}                                                    
};