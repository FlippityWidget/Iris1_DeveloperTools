/*****
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *****/

#ifndef __GRNTEXTCHUNK_H__
#define __GRNTEXTCHUNK_H__

#include "GrannyStream.h"
#include <string>
#include <vector>

class TextChunk
{
public:
	TextChunk();
	~TextChunk();
	void load( cGrannyStream *file, dword offset, dword baseOffset, dword children);
	dword findString( std::string name );
	std::string findID(dword id);
	dword size() { return entries.size(); }
private:
	dword numEntries;
	std::vector< std::string > entries;
};

#endif
