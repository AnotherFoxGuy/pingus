//  $Id: property_frame.hxx,v 1.7 2002/11/28 20:09:54 grumbel Exp $
// 
//  Pingus - A free Lemmings clone
//  Copyright (C) 2000 Ingo Ruhnke <grumbel@gmx.de>
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
// 
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#ifndef HEADER_PINGUS_EDITOR_PROPERTY_FRAME_HXX
#define HEADER_PINGUS_EDITOR_PROPERTY_FRAME_HXX

#include "../pingus.hxx"
#include <ClanLib/GUI/frame.h>

class CL_Component;

namespace EditorNS {

/** FIXME: Document Me */
class PropertyFrame : public CL_Frame
{
public:
  PropertyFrame (int width, int height, CL_Component*);

  virtual std::string get_title () =0;
      
private:
  PropertyFrame (const PropertyFrame&);
  PropertyFrame& operator= (const PropertyFrame&);
};

} // namespace EditorNS 

#endif

/* EOF */
