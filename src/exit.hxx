//  $Id: exit.hxx,v 1.4 2002/09/04 19:40:19 grumbel Exp $
//
//  Pingus - A free Lemmings clone
//  Copyright (C) 1999 Ingo Ruhnke <grumbel@gmx.de>
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

#ifndef HEADER_PINGUS_EXIT_HXX
#define HEADER_PINGUS_EXIT_HXX

#include "worldobj.hxx"
#include "exit_data.hxx"
#include "sprite.hxx"

class Exit : public ExitData,
	     public WorldObj
{
private:
  Sprite sprite;
  Sprite flag;

public:
  Exit(const ExitData& data);
  ~Exit();
  
  void  draw_colmap();
  void  draw (GraphicContext& gc);
  void  update (float delta);
  float get_z_pos() const { return (int) pos.z; }
  
private:
  Exit (const Exit&);
  Exit operator= (const Exit&);
};

#endif

/* EOF */
