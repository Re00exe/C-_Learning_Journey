/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midfath <midfath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:18:01 by nelidris          #+#    #+#             */
/*   Updated: 2022/12/31 00:08:02 by midfath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_H_
# define _ARRAY_H_

# include <iostream>

template <class T>
class Array
{
	private:
		T*		_arr;
		int 	_len;
	public:
		Array(){
			_arr=0; _len = 0;
		}
		
		Array(unsigned int n){
			_arr = new T[n](); _len = n;
		}
		
		Array& operator=(const Array& copy){
			if (_arr)
				delete[] _arr;
			if (!copy._len)
			{
				_arr = 0;
				_len = 0;
				return (*this);
			}
			_arr = new T[copy._len]();
			for (int i = 0; i < copy._len; i++)
				_arr[i] = copy._arr[i];
			_len = copy._len;
			return (*this);
		}
		
		Array(const Array& copy){
			if (!copy._len)
			{
				_arr = 0;
				_len = 0;
				return ;
			}
				_arr = new T[copy._len]();
			for (int i = 0; i < copy._len; i++)
				_arr[i] = copy._arr[i];
			_len = copy._len;
		}
		
		~Array(){
			if (_arr) delete[] _arr;
		}

		T&	operator[](int idx) const {
			if (idx < 0 || idx > _len - 1)
				throw (BadIndexException());
			return (_arr[idx]);
		}
		
		class BadIndexException: public std::exception{
			const char* what() const throw() { return ("Wrong Index !!!"); }
		};
		
		int	size() const;
};

#endif