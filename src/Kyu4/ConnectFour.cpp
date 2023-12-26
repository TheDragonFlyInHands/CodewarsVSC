#include "ConnectFour.h"
#include <vector>
#include <string>
#include <iostream>
std::string who_is_winner(std::vector<std::string> pieces_position_list) {
	std::string coords_x = "ABCDEFG";
	int coords_y[7]{0,0,0,0,0,0,0};
	int map[7][6]{ {-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1} };
	int player = pieces_position_list[0][2] == 'R' ? 1:2;
	int x,y;
	for (std::string move : pieces_position_list) {
		x = coords_x.find(move[0]);
		y = coords_y[x];
		coords_y[x]++;
		map[x][y] = player;
		player++;
	}
	int winner=-1
	for
	for (int i = 5;i > -1;i--) {
		for (int j = 0;j < 7;j++)
			std::cout << map[j][i]<<",";
		std::cout << std::endl;
	}
	return "";
}
