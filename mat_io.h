#pragma once
#include <string>
#include <Eigen/Core>
class MatIO
{
public:
	static bool ReadMat(std::string file_path, int n_row, int n_col, Eigen::MatrixXd& mat);
};