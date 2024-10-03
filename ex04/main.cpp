/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 07:03:24 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/30 07:03:24 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string replaceStrings(std::string newFileContent, std::string s1, std::string s2)
{
	std::string resultContent;
	int indexChar = 0;
	std::string::size_type foundIndex = 0;

	while (indexChar < (int)newFileContent.size()) 
	{
		foundIndex = newFileContent.find(s1, indexChar);
		if (foundIndex == std::string::npos)
		{
			resultContent += newFileContent.substr(indexChar);
			break;
		}
		resultContent += newFileContent.substr(indexChar, foundIndex - indexChar);
		resultContent += s2;
		indexChar = foundIndex + s1.size();
    }
	return (resultContent);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "arguments are not the following: <filename> <string1> <string2>" << std::endl;
		return(1);
	}
	std::ifstream srcFile(argv[1]);
	if (!srcFile.is_open()) 
	{
		std::cerr << "can't open the file: '" << argv[1] << std::endl;
		return (1);
	}
	char	c;
	std::string newFileContent;
	while (!srcFile.eof() && srcFile.get(c)) 
		newFileContent += c;
	srcFile.close();

	std::string newFileName = std::string(argv[1]) + ".replace";
	std::ofstream newFile(newFileName.c_str());
	if (!newFile.is_open()) 
	{
		std::cerr << "can't open the file: '" << argv[1] << std::endl;
		srcFile.close();
		return (1);
	}
	newFile << replaceStrings(newFileContent, std::string(argv[2]), std:: string(argv[3]));
	newFile.close();
}
