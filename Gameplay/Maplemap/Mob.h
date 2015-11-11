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
#include "Gameplay\Maplemap\Mapobject.h"
#include "Gameplay\Physics\PhysicsObject.h"
#include "Graphics\Animation.h"

namespace Gameplay
{
	using::std::string;
	using::Graphics::Animation;

	class Mob : public Mapobject
	{
	public:
		Mob(int32_t, int32_t, bool, int8_t, uint16_t, int8_t, bool, int8_t, int32_t, int32_t);
		~Mob();
		int8_t update(const Physics&);
		void draw(vector2d<int32_t>, float) const;
		void setposition(int32_t, int32_t);
		int8_t getlayer() const;
		int32_t getoid() const;
		vector2d<int32_t> getposition() const;
	private:
		map<string, Animation> animations;
		int32_t oid;
		int32_t id;
		bool control;
		int8_t stance;
		int8_t effect;
		int8_t team;
		PhysicsObject phobj;
	};
}
