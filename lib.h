#include <iostream>
#include <string>
#include <unistd.h>
#include <bits/stdc++.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>

void createAndWriteFile(std::string filename,std::string text){
	std::ofstream MyFile(filename);
	MyFile << text;
	MyFile.close();
}
void createFile(std::string filename){
	std::ofstream MyFile(filename);
	MyFile.close();
}
std::string readFile(std::string filename){
	std::string myText;
	std::string returnText;
	std::ifstream MyReadFile(filename);
	while (getline (MyReadFile, myText)) {
		returnText += myText+"\n";
	}
	MyReadFile.close();
	return returnText;
}
void print(std::string text){

	std::cout << text << std::endl;
}
std::string input(std::string text){
	std::string inputText;
	std::cout << text;
	getline(std::cin, inputText);
	return inputText;
}