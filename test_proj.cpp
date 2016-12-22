// test_proj.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <igl/writeDMAT.h>
#include <igl/readDMAT.h>
#include <igl/readOBJ.h>
#include <Eigen/Sparse>
#include "arma_test.h"
#include "mat_io.h"
#include <opencv2/opencv.hpp>
#include "boost_graph_test.h"
#include "cgal_geometry_test.h"
int main()
{
	CGALGeometryTest::Test();
    return 0;
}

