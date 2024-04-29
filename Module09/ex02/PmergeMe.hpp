/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:02:40 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/29 23:39:25 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include  <iostream>
#include <vector>
#include <deque>

int*	parse_argv(int argc, char **argv);
bool	isInteger(const std::string& s);
void	sort_vect(std::vector<int>& vect);
void	merge_vect(std::vector<int>& leftvec, std::vector<int>& rightvect, std::vector<int>& vect);
void	sort_deq(std::deque<int>& deq);
void	merge_deq(std::deque<int>& leftdeq, std::deque<int>& rightdeq, std::deque<int>& deq);
void	insertion_sort_deq(std::deque<int>& deq);
void	insertion_sort_vect(std::vector<int>& vec);
