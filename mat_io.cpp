#include "stdafx.h"
#include "mat_io.h"
#include <iostream>
#include <fstream>
bool MatIO::ReadMat(std::string file_path, int n_row, int n_col, Eigen::MatrixXd& mat)
{
	mat.resize(n_row, n_col);
	std::ifstream fin;
	fin.open(file_path);
	if (fin.fail()) {
		std::cout << "cannot open file" << file_path << std::endl;
		exit(1);
	}
	for (int idxR = 0; idxR < n_row; idxR++) {
		for (int idxC = 0; idxC < n_col; idxC++) {
			double current;
			fin >> current;
			mat(idxR, idxC) = current;
		}
	}
	fin.close();
	return true;
}