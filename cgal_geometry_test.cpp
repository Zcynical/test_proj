#include "stdafx.h"
#include "cgal_geometry_test.h"
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
void CGALGeometryTest::Test()
{
	typedef CGAL::Epick Kernel;
	Kernel::Point_2 test_point(1, 0);
	Kernel::Point_2 p1(0, 0), p2(-1, 1);
	Kernel::Line_2 line(p1, p2);
	//line = line.opposite();
	std::cout << line.projection(test_point) << std::endl;
	if (line.has_on_negative_side(test_point))
	{
		std::cout << "has on negative side" << std::endl;
	}
	return;
}