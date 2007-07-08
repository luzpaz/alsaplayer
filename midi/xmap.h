/* xmap.h 
 *
 * Copyright (C) 2002 Greg Lee <greg@ling.lll.hawaii.edu>
 *
 *  This file is part of the MIDI input plugin for AlsaPlayer.
 *
 *  The MIDI input plugin for AlsaPlayer is free software;
 *  you can redistribute it and/or modify it under the terms of the
 *  GNU General Public License as published by the Free Software
 *  Foundation; either version 3 of the License, or (at your option)
 *  any later version.
 *
 *  The MIDI input plugin for AlsaPlayer is distributed in the hope that
 *  it will be useful, but WITHOUT ANY WARRANTY; without even the implied
 *  warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 *	$Id$   Greg Lee
 */
int xmap[XMAPMAX][5] = {
{ SFXBANK, 0, 0, 120, 0 },
{ SFXBANK, 0, 1, 120, 1 },
{ SFXBANK, 0, 2, 120, 2 },
{ SFXBANK, 0, 3, 120, 3 },
{ SFXBANK, 0, 4, 120, 4 },
{ SFXBANK, 0, 5, 120, 5 },
{ SFXBANK, 0, 16, 120, 16 },
{ SFXBANK, 0, 32, 120, 32 },
{ SFXBANK, 0, 33, 120, 33 },
{ SFXBANK, 0, 34, 120, 34 },
{ SFXBANK, 0, 35, 120, 35 },
{ SFXBANK, 0, 36, 120, 36 },
{ SFXBANK, 0, 48, 120, 48 },
{ SFXBANK, 0, 49, 120, 49 },
{ SFXBANK, 0, 50, 120, 50 },
{ SFXBANK, 0, 51, 120, 51 },
{ SFXBANK, 0, 52, 120, 52 },
{ SFXBANK, 0, 54, 120, 54 },
{ SFXBANK, 0, 55, 120, 55 },
{ SFXBANK, 0, 64, 120, 64 },
{ SFXBANK, 0, 65, 120, 65 },
{ SFXBANK, 0, 66, 120, 66 },
{ SFXBANK, 0, 67, 120, 67 },
{ SFXBANK, 0, 68, 120, 68 },
{ SFXBANK, 0, 69, 120, 69 },
{ SFXBANK, 0, 70, 120, 70 },
{ SFXBANK, 0, 80, 120, 80 },
{ SFXBANK, 0, 81, 120, 81 },
{ SFXBANK, 0, 82, 120, 82 },
{ SFXBANK, 0, 83, 120, 83 },
{ SFXBANK, 0, 84, 120, 84 },
{ SFXBANK, 0, 85, 120, 85 },
{ SFXBANK, 0, 86, 120, 86 },
{ SFXBANK, 0, 87, 120, 87 },
{ SFXBANK, 0, 88, 120, 88 },
{ SFXBANK, 0, 89, 120, 89 },
{ SFXBANK, 0, 90, 120, 90 },
{ SFXBANK, 0, 96, 120, 96 },
{ SFXBANK, 0, 97, 120, 97 },
{ SFXBANK, 0, 98, 120, 98 },
{ SFXBANK, 0, 99, 120, 99 },
{ SFXBANK, 0, 100, 120, 100 },
{ SFXBANK, 0, 101, 120, 101 },
{ SFXBANK, 0, 112, 120, 112 },
{ SFXBANK, 0, 113, 120, 113 },
{ SFXBANK, 0, 114, 120, 114 },
{ SFXBANK, 0, 115, 120, 115 },
{ SFXDRUM1, 0, 36, 121, 36 },
{ SFXDRUM1, 0, 37, 121, 37 },
{ SFXDRUM1, 0, 38, 121, 38 },
{ SFXDRUM1, 0, 39, 121, 39 },
{ SFXDRUM1, 0, 40, 121, 40 },
{ SFXDRUM1, 0, 41, 121, 41 },
{ SFXDRUM1, 0, 52, 121, 52 },
{ SFXDRUM1, 0, 68, 121, 68 },
{ SFXDRUM1, 0, 69, 121, 69 },
{ SFXDRUM1, 0, 70, 121, 70 },
{ SFXDRUM1, 0, 71, 121, 71 },
{ SFXDRUM1, 0, 72, 121, 72 },
{ SFXDRUM1, 0, 84, 121, 84 },
{ SFXDRUM1, 0, 85, 121, 85 },
{ SFXDRUM1, 0, 86, 121, 86 },
{ SFXDRUM1, 0, 87, 121, 87 },
{ SFXDRUM1, 0, 88, 121, 88 },
{ SFXDRUM1, 0, 90, 121, 90 },
{ SFXDRUM1, 0, 91, 121, 91 },
{ SFXDRUM1, 1, 36, 122, 36 },
{ SFXDRUM1, 1, 37, 122, 37 },
{ SFXDRUM1, 1, 38, 122, 38 },
{ SFXDRUM1, 1, 39, 122, 39 },
{ SFXDRUM1, 1, 40, 122, 40 },
{ SFXDRUM1, 1, 41, 122, 41 },
{ SFXDRUM1, 1, 42, 122, 42 },
{ SFXDRUM1, 1, 52, 122, 52 },
{ SFXDRUM1, 1, 53, 122, 53 },
{ SFXDRUM1, 1, 54, 122, 54 },
{ SFXDRUM1, 1, 55, 122, 55 },
{ SFXDRUM1, 1, 56, 122, 56 },
{ SFXDRUM1, 1, 57, 122, 57 },
{ SFXDRUM1, 1, 58, 122, 58 },
{ SFXDRUM1, 1, 59, 122, 59 },
{ SFXDRUM1, 1, 60, 122, 60 },
{ SFXDRUM1, 1, 61, 122, 61 },
{ SFXDRUM1, 1, 62, 122, 62 },
{ SFXDRUM1, 1, 68, 122, 68 },
{ SFXDRUM1, 1, 69, 122, 69 },
{ SFXDRUM1, 1, 70, 122, 70 },
{ SFXDRUM1, 1, 71, 122, 71 },
{ SFXDRUM1, 1, 72, 122, 72 },
{ SFXDRUM1, 1, 73, 122, 73 },
{ SFXDRUM1, 1, 84, 122, 84 },
{ SFXDRUM1, 1, 85, 122, 85 },
{ SFXDRUM1, 1, 86, 122, 86 },
{ SFXDRUM1, 1, 87, 122, 87 },
{ XGDRUM, 0, 25, 40, 38 },
{ XGDRUM, 0, 26, 40, 40 },
{ XGDRUM, 0, 27, 40, 39 },
{ XGDRUM, 0, 28, 40, 30 },
{ XGDRUM, 0, 29, 0, 25 },
{ XGDRUM, 0, 30, 0, 85 },
{ XGDRUM, 0, 31, 0, 38 },
{ XGDRUM, 0, 32, 0, 37 },
{ XGDRUM, 0, 33, 0, 36 },
{ XGDRUM, 0, 34, 0, 38 },
{ XGDRUM, 0, 62, 0, 101 },
{ XGDRUM, 0, 63, 0, 102 },
{ XGDRUM, 0, 64, 0, 103 },
{ XGDRUM, 8, 25, 40, 38 },
{ XGDRUM, 8, 26, 40, 40 },
{ XGDRUM, 8, 27, 40, 39 },
{ XGDRUM, 8, 28, 40, 40 },
{ XGDRUM, 8, 29, 8, 25 },
{ XGDRUM, 8, 30, 8, 85 },
{ XGDRUM, 8, 31, 8, 38 },
{ XGDRUM, 8, 32, 8, 37 },
{ XGDRUM, 8, 33, 8, 36 },
{ XGDRUM, 8, 34, 8, 38 },
{ XGDRUM, 8, 62, 8, 101 },
{ XGDRUM, 8, 63, 8, 102 },
{ XGDRUM, 8, 64, 8, 103 },
{ XGDRUM, 16, 25, 40, 38 },
{ XGDRUM, 16, 26, 40, 40 },
{ XGDRUM, 16, 27, 40, 39 },
{ XGDRUM, 16, 28, 40, 40 },
{ XGDRUM, 16, 29, 16, 25 },
{ XGDRUM, 16, 30, 16, 85 },
{ XGDRUM, 16, 31, 16, 38 },
{ XGDRUM, 16, 32, 16, 37 },
{ XGDRUM, 16, 33, 16, 36 },
{ XGDRUM, 16, 34, 16, 38 },
{ XGDRUM, 16, 62, 16, 101 },
{ XGDRUM, 16, 63, 16, 102 },
{ XGDRUM, 16, 64, 16, 103 },
{ XGDRUM, 24, 25, 40, 38 },
{ XGDRUM, 24, 26, 40, 40 },
{ XGDRUM, 24, 27, 40, 39 },
{ XGDRUM, 24, 28, 24, 100 },
{ XGDRUM, 24, 29, 24, 25 },
{ XGDRUM, 24, 30, 24, 15 },
{ XGDRUM, 24, 31, 24, 38 },
{ XGDRUM, 24, 32, 24, 37 },
{ XGDRUM, 24, 33, 24, 36 },
{ XGDRUM, 24, 34, 24, 38 },
{ XGDRUM, 24, 62, 24, 101 },
{ XGDRUM, 24, 63, 24, 102 },
{ XGDRUM, 24, 64, 24, 103 },
{ XGDRUM, 24, 78, 0, 17 },
{ XGDRUM, 24, 79, 0, 18 },
{ XGDRUM, 25, 25, 40, 38 },
{ XGDRUM, 25, 26, 40, 40 },
{ XGDRUM, 25, 27, 40, 39 },
{ XGDRUM, 25, 28, 25, 100 },
{ XGDRUM, 25, 29, 25, 25 },
{ XGDRUM, 25, 30, 25, 15 },
{ XGDRUM, 25, 31, 25, 38 },
{ XGDRUM, 25, 32, 25, 37 },
{ XGDRUM, 25, 33, 25, 36 },
{ XGDRUM, 25, 34, 25, 38 },
{ XGDRUM, 25, 78, 0, 17 },
{ XGDRUM, 25, 79, 0, 18 },
{ XGDRUM, 32, 25, 40, 38 },
{ XGDRUM, 32, 26, 40, 40 },
{ XGDRUM, 32, 27, 40, 39 },
{ XGDRUM, 32, 28, 40, 40 },
{ XGDRUM, 32, 29, 32, 25 },
{ XGDRUM, 32, 30, 32, 85 },
{ XGDRUM, 32, 31, 32, 38 },
{ XGDRUM, 32, 32, 32, 37 },
{ XGDRUM, 32, 33, 32, 36 },
{ XGDRUM, 32, 34, 32, 38 },
{ XGDRUM, 32, 62, 32, 101 },
{ XGDRUM, 32, 63, 32, 102 },
{ XGDRUM, 32, 64, 32, 103 },
{ XGDRUM, 40, 25, 40, 38 },
{ XGDRUM, 40, 26, 40, 40 },
{ XGDRUM, 40, 27, 40, 39 },
{ XGDRUM, 40, 28, 40, 40 },
{ XGDRUM, 40, 29, 40, 25 },
{ XGDRUM, 40, 30, 40, 85 },
{ XGDRUM, 40, 31, 40, 39 },
{ XGDRUM, 40, 32, 40, 37 },
{ XGDRUM, 40, 33, 40, 36 },
{ XGDRUM, 40, 34, 40, 38 },
{ XGDRUM, 40, 38, 40, 39 },
{ XGDRUM, 40, 39, 0, 39 },
{ XGDRUM, 40, 40, 40, 38 },
{ XGDRUM, 40, 42, 0, 42 },
{ XGDRUM, 40, 46, 0, 46 },
{ XGDRUM, 40, 62, 40, 101 },
{ XGDRUM, 40, 63, 40, 102 },
{ XGDRUM, 40, 64, 40, 103 },
{ XGDRUM, 40, 87, 40, 87 }
};
