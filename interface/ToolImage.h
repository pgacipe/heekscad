// ToolImage.h
// Copyright (c) 2009, Dan Heeks
// This program is released under the BSD license. See the file COPYING for details.

#ifdef WIN32
#pragma once
#endif

class ToolImage: public wxImage{
public:
#ifdef HEEKSCAD
	static float m_button_scale;
	static const int full_size;
	static const int default_bitmap_size;
#endif

	ToolImage(const wxString& name);

	static int GetBitmapSize();
#ifdef HEEKSCAD
	static void SetBitmapSize(int size);
#endif
};

