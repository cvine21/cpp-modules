/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:31:02 by cvine             #+#    #+#             */
/*   Updated: 2022/06/01 12:01:20 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

// ************************************************************************** //
//                                  Cat Class                                 //
// ************************************************************************** //

class Cat : public Animal {

	public:

		Cat( void );
		Cat( std::string );
		Cat( Cat const& );
		~Cat( void );
		Cat & operator = ( Cat const& );

		void virtual	makeSound( void ) const;

};

#endif /* __CAT_HPP__ */