/* 
 * (c) 2009 Rafael Paz <rpaz@atc.us.es>
 *
 *************
 *
 *	This file is part of IKARUS_OSD.
 *
 *  FPVOSD is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  FPVOSD is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with IKARUS_OSD.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "Plugin.h"

char GetSelectedBauds();
char * SelectBauds(unsigned char c);
char * GetBaudStr(unsigned char c);

float getRelAltitude();

void initStruct();
void GPS_Calculate();

void SimulaADC();
void SimulaGPS();

struct GPSInfo
{
	float lon;
	float lat;
	float alt;
	float velo;
	float rumbo;
//	float mag_desv;
	char fix;
	char act;
	float hdop;
	int numsats;
	float hora;
	long fecha;

	// estado
	char conected;
	char nmea_ok;
	char pos_valid;

	char RMC_received;
	char GGA_received;
	unsigned char bad_crc;
	unsigned char uart_timeout;
	unsigned char nmea_timeout;

	// filtradas
	float alt_filter;
	float velo_filter;

	// calculadas	
	float verticalSpeed;
	float veloMAX;
	float altitudeMAX;
	char en_movimiento;
};

