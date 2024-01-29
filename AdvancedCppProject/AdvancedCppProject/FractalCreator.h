#pragma once

#include <string>
#include <memory>
#include <math.h>
#include "Zoom.h"
#include "Bitmap.h"
#include "ZoomList.h"
#include "Mandelbrot.h"

using namespace std;

class FractalCreator
{
	int m_width = 0;
	int m_height = 0;

	//unique_ptr<int[]> m_histogram(new int[Mandelbrot::MAX_ITERATIONS]{ 0 });
	//unique_ptr<int[]> m_fractal(new int[m_Width * m_Height]{ 0 });
	unique_ptr<int[]> m_histogram;
	unique_ptr<int[]> m_fractal;

	Bitmap m_bitmap = Bitmap(m_width, m_height);

	ZoomList m_zoomList = ZoomList(m_width, m_height);

	int m_total = 0;

public:
	FractalCreator(int width, int height);

	void calculateIterations();

	void calculateTotalIterations();

	void drawFractal();

	void addZoom(const Zoom& zoom);

	void writeBitmap(string name);
};

