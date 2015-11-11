/////////////////////////////////////////////////////////////////////////////
// This file is part of the Journey MMORPG client                           //
// Copyright � 2015 Daniel Allendorf                                        //
//                                                                          //
// This program is free software: you can redistribute it and/or modify     //
// it under the terms of the GNU Affero General Public License as           //
// published by the Free Software Foundation, either version 3 of the       //
// License, or (at your option) any later version.                          //
//                                                                          //
// This program is distributed in the hope that it will be useful,          //
// but WITHOUT ANY WARRANTY; without even the implied warranty of           //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            //
// GNU Affero General Public License for more details.                      //
//                                                                          //
// You should have received a copy of the GNU Affero General Public License //
// along with this program.  If not, see <http://www.gnu.org/licenses/>.    //
//////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Journey.h"
#ifdef JOURNEY_USE_OPENGL
#include "Window.h"
//#include "LocatorGL.h"
#include "Keyboard.h"
#include "GL\glew.h"
#include "glfw3.h"
#include "UI.h"

namespace IO
{
	// Implementation of 'Window' in GLFW.
	class WindowGLFW : public Window
	{
	public:
		WindowGLFW();
		~WindowGLFW();
		bool init(bool);
		bool initwindow();
		void update(UI&);
		void begin() const;
		void end() const;
		void fadeout(Transition);
		Keyboard& getkeyboard();
	private:
		GLFWwindow* glwnd;
		GLFWwindow* context;
		//FontsFT fonts;
		//LocatorGL locator;
		Keyboard keyboard;
		bool fullscreen;
	};
}
#endif
