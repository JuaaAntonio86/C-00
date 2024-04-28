/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:02:40 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/29 00:18:57 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include  <iostream>
#include <vector>
#include <deque>

int* parse_argv(int argc, char **argv);

void sort_vect(std::vector<int>& vect);
void merge_vect(std::vector<int>& leftvec, std::vector<int>& rightvect, std::vector<int>& vect);
