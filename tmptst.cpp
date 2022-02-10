#include<iostream>
#include<string>
#include<windows.h>
#include<conio.h>

//i assumed the numbers in text come after the letters for number 2 on push phone it would be (abc2) in order

int main(){
	while(true){
		std::system("cls");
		std::string str = "";
		std::cout<<"Enter Text To Convert : \r\n";
		std::getline(std::cin, str);
		
		//to lower case
		for(int i = 0; i < str.length(); i++){
			if(str[i] >= 'A' && str[i] <= 'Z'){
				str[i] += 'a' - 'A';
			}
		}
		
		for(int i = 0; i < str.length(); i++){
			//if its a space
			if(str[i] == ' '){
				std::cout<<"0-";
				continue;
			}
			//value to be printed
			int val = -1;
			//number  of times to print val
			int multiplier = 0;
			
			switch(str[i]){
				case '0':
					multiplier++;
					multiplier++;
					val = 0;
					break;
					
				case '1':
					multiplier++;
					multiplier++;
					val = 1;
					break;
				
				case '2':
					multiplier++;
				case 'c':
					multiplier++;
				case 'b':
					multiplier++;
				case 'a':
					multiplier++;
					val = 2;
					break;
				
				case '3':
					multiplier++;
				case 'f':
					multiplier++;
				case 'e':
					multiplier++;
				case 'd':
					multiplier++;
					val = 3;
					break;
					
				case '4':
					multiplier++;
				case 'i':
					multiplier++;
				case 'h':
					multiplier++;
				case 'g':
					multiplier++;
					val = 4;
					break;
					
				case '5':
					multiplier++;
				case 'l':
					multiplier++;
				case 'k':
					multiplier++;
				case 'j':
					multiplier++;
					val = 5;
					break;
					
				case '6':
					multiplier++;
				case 'o':
					multiplier++;
				case 'n':
					multiplier++;
				case 'm':
					multiplier++;
					val = 6;
					break;
					
				case '7':
					multiplier++;
				case 's':
					multiplier++;
				case 'r':
					multiplier++;
				case 'q':
					multiplier++;
				case 'p':
					multiplier++;
					val = 7;
					break;
					
				case '8':
					multiplier++;
				case 'v':
					multiplier++;
				case 'u':
					multiplier++;
				case 't':
					multiplier++;
					val = 8;
					break;
					
				case '9':
					multiplier++;
				case 'z':
					multiplier++;
				case 'y':
					multiplier++;
				case 'x':
					multiplier++;
				case 'w':
					multiplier++;
					val = 9;
					break;
					
			}
			// print out the result
			for(int j = 0; j < multiplier; j++){
				std::cout<<val;
			}
			std::cout<<'-';
		}
		//wait until a key press
		getch();
	}
}
