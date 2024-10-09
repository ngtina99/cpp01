/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 03:49:30 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/30 03:49:30 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This first exercise asks us to simply create a bunch of classes with basic methods we will use in future exercises in the module. 
// We must have two ways of allocating instances of the class: either on the stack or on the heap, and free the allocated space at the right time.
// Objective: In this exercise we will have to implement a horde of Zombies!

// To do this we will have tom implement the following function:

// Zombie* zombieHorde( int N, std::string name );
// Where N is the number of Zombies objects we must allocate in a single allocation and initializes 
// the zombies giving the name passed as a parameter. Th function must return a pointer to the first zombie.

// The point of this exercise is to clean and check all the memory leaks.

/*
*   In order to comprove if the zombies are stored in the heap or the stack, uncomment the following functions.
* void    *bottom_heap;
* void    bottomheap_init( void )
* {
*     bottom_heap = std::malloc(sizeof(int));
* }
* void    heap_stack(void *p)
* {
*     int bottom_stack;
*     if (p > &bottom_stack || p < bottom_heap)
*         std::cout << "Stack memory\n";
*     else
*         std::cout << "Heap memory\n";
* }
*
*   And add this lines in the main()
*       bottomheap_init(); at the start;
*       heap_stack(zombie1); after the zombie1->announce() line;
*
*   Add the following line inside the randomChump function:
*       heap_stack(zombie2);
*
*   Finally add the heap_stack() function at the header.
*/

#include "Zombie.hpp"

int main() 
{
	randomChump("Stacko");
	Zombie *zombie = newZombie("Heapo");
	zombie->announce();
	delete zombie;
}
