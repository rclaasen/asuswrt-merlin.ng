#include <typedefs.h>
#if 1

uint16 wl_srom_map_aa52[234] = {
/* NOTE: */
/* BCM943602MC2_1/01 (2.4G design)*/
/* PA values MUST be calibrated and refilled for the actual EEPROM/SROM-less design*/
/* MAC address are zero'ed */
/* CRC here is not recalculated, do not program this to EEPROM/SROM, this is for EEPROM/SROM-less use only */

/*  srom[000]:*/ 0x3801, 0x3000, 0x06f2, 0x14e4, 0x0218, 0x1b7e, 0x0a00, 0x2bc4,
/*  srom[008]:*/ 0x2a64, 0x2964, 0x2c64, 0x3ce7, 0x480a, 0x113c, 0x2132, 0x3164,
/*  srom[016]:*/ 0x1852, 0x0005, 0x1f2e, 0x4df7, 0x8080, 0x000b, 0x8630, 0x0190,
/*  srom[024]:*/ 0x5f00, 0x41f6, 0x8630, 0x0191, 0x8300, 0x01eb, 0x9f01, 0x65f5,
/*  srom[032]:*/ 0x8200, 0xd800, 0x8010, 0x007c, 0x1f00, 0x0004, 0x8000, 0x200c,
/*  srom[040]:*/ 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
/*  srom[048]:*/ 0x43bb, 0x8000, 0x0002, 0x0000, 0x3ff5, 0x1800, 0x0000, 0xffff,
/*  srom[056]:*/ 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[064]:*/ 0x0634, 0x1102, 0x1000, 0x0000, 0x0002, 0x0000, 0x0000, 0x0400,
/*  srom[072]:*/ 0x0000, 0x0000, 0x0000, 0x5830, 0x000f, 0xffff, 0xffff, 0xffff,
/*  srom[080]:*/ 0x0707, 0x0000, 0x0000, 0x0000, 0x0077, 0x3051, 0x0000, 0xffff,
/*  srom[088]:*/ 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[096]:*/ 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000,
/*  srom[104]:*/ 0x0000, 0x0000, 0x0000, 0x0004, 0xff50, 0xff31, 0x18a5, 0xfcef,
/*  srom[112]:*/ 0xffff, 0xbbb3, 0x5448, 0x5050, 0xff5a, 0x174b, 0xfd19, 0xff87,
/*  srom[120]:*/ 0x1a92, 0xfcce, 0xff58, 0x18e9, 0xfcec, 0xff57, 0x19ab, 0xfcd6,
/*  srom[128]:*/ 0xff50, 0xff36, 0x18f1, 0xfcf0, 0xffff, 0xbbb3, 0x5448, 0x5050,
/*  srom[136]:*/ 0xff53, 0x1726, 0xfd15, 0xff87, 0x1a92, 0xfcce, 0xff6d, 0x1a92,
/*  srom[144]:*/ 0xfcc3, 0xff53, 0x1984, 0xfcd4, 0xff50, 0xff32, 0x18dc, 0xfcf0,
/*  srom[152]:*/ 0xffff, 0xbbb3, 0x5448, 0x5050, 0xff5c, 0x178f, 0xfd16, 0xff8f,
/*  srom[160]:*/ 0x1ae7, 0xfcd4, 0xff5a, 0x1928, 0xfce9, 0xff58, 0x19cf, 0xfcd5,
/*  srom[168]:*/ 0x0000, 0x0000, 0x4000, 0xca64, 0x4000, 0xca64, 0x6420, 0x0000,
/*  srom[176]:*/ 0x0000, 0x5510, 0x0000, 0x5510, 0x0000, 0x5410, 0x0902, 0x0000,
/*  srom[184]:*/ 0x2000, 0xaa75, 0x0000, 0xba74, 0x0000, 0xba74, 0x0000, 0x0000,
/*  srom[192]:*/ 0x1000, 0x9953, 0x0000, 0x9963, 0x0000, 0xba64, 0x0000, 0x0000,
/*  srom[200]:*/ 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
/*  srom[208]:*/ 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
/*  srom[216]:*/ 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[224]:*/ 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[232]:*/ 0xffff, 0x2c0b,
};

#else

uint16 wl_srom_map_aa52[234] = {
/* NOTE: */
/* BCM943602MC5(5G design) */
/* PA values MUST be calibrated and refilled for the actual EEPROM/SROM-less design*/
/* MAC address and CRC are zero'ed */
/* CRC here is not recalculated, do not program this to EEPROM/SROM, this is for EEPROM/SROM-less use only */
/* srom[000]:*/ 0x3801, 0x3000, 0x06ea, 0x14e4, 0x0218, 0x1b7e, 0x0a00, 0x2bc4,
/* srom[008]:*/ 0x2a64, 0x2964, 0x2c64, 0x3ce7, 0x480a, 0x113c, 0x2132, 0x3164,
/* srom[016]:*/ 0x1852, 0x0005, 0x1f2e, 0x4df7, 0x8080, 0x000b, 0x8630, 0x0190,
/* srom[024]:*/ 0x5f00, 0x41f6, 0x8630, 0x0191, 0x8300, 0x01eb, 0x9f01, 0x65f5,
/* srom[032]:*/ 0x8200, 0xd800, 0x8010, 0x007c, 0x1f00, 0x0004, 0x8000, 0x200c,
/* srom[040]:*/ 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
/* srom[048]:*/ 0x43bc, 0x8000, 0x0002, 0x0000, 0x3ff5, 0x1800, 0x0000, 0xffff,
/* srom[056]:*/ 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
/* srom[064]:*/ 0x0634, 0x1102, 0x0000, 0x1000, 0x0002, 0x0000, 0x0000, 0x0400,
/* srom[072]:*/ 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff,
/* srom[080]:*/ 0x0707, 0x0000, 0x0000, 0x0000, 0x0077, 0x30a1, 0x00a1, 0x7800,
/* srom[088]:*/ 0xffff, 0xffff, 0xffff, 0xffff, 0x5500, 0xffff, 0xffff, 0xffff,
/* srom[096]:*/ 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x3222, 0x3222, 0x3222,
/* srom[104]:*/ 0x0000, 0x0000, 0x0000, 0x0004, 0xff42, 0xff24, 0x188e, 0xfce6,
/* srom[112]:*/ 0xffff, 0xb300, 0x4c4c, 0x4c4c, 0xff5d, 0x1760, 0xfd23, 0xff54,
/* srom[120]:*/ 0x1731, 0xfd1e, 0xff4c, 0x16ec, 0xfd22, 0xff62, 0x173d, 0xfd39,
/* srom[128]:*/ 0xff42, 0xff3e, 0x15f9, 0xfd36, 0xffff, 0xb300, 0x4c4c, 0x4c4c,
/* srom[136]:*/ 0xff5a, 0x1737, 0xfd26, 0xff52, 0x16f5, 0xfd28, 0xff4f, 0x171d,
/* srom[144]:*/ 0xfd20, 0xff50, 0x16d1, 0xfd2f, 0xff42, 0xff25, 0x18a6, 0xfce2,
/* srom[152]:*/ 0xffff, 0xb300, 0x4c4c, 0x4c4c, 0xff5a, 0x1729, 0xfd25, 0xff62,
/* srom[160]:*/ 0x175c, 0xfd30, 0xff48, 0x1720, 0xfd15, 0xff54, 0x1741, 0xfd21,
/* srom[168]:*/ 0x0000, 0x0000, 0x4000, 0x9944, 0x4000, 0x9944, 0x4400, 0x0000,
/* srom[176]:*/ 0x6420, 0xeca8, 0x6420, 0xeca8, 0x6420, 0xeca8, 0x0000, 0x0000,
/* srom[184]:*/ 0x6420, 0xcca8, 0x6420, 0xcca8, 0x6420, 0xcca8, 0x0000, 0x0000,
/* srom[192]:*/ 0x6420, 0xcca8, 0x6420, 0xcca8, 0x6420, 0xcca8, 0x0000, 0x0000,
/* srom[200]:*/ 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
/* srom[208]:*/ 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
/* srom[216]:*/ 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff,
/* srom[224]:*/ 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
/* srom[232]:*/ 0xffff, 0xbb0b,
};
#endif

#if 0     
uint16 wl_srom_map_aa52[234] = {
/* NOTE: */                           
/* BCM943602MCH2_1/01 (2.4G design), this is the original can be programed to the EEPROM */ 
/*  srom[000]:*/ 0x3801, 0x3000, 0x06f7, 0x14e4, 0x0218, 0x1b7e, 0x0a00, 0x2bc4,
/*  srom[008]:*/ 0x2a64, 0x2964, 0x2c64, 0x3ce7, 0x480a, 0x113c, 0x2132, 0x3164,
/*  srom[016]:*/ 0x1852, 0x0005, 0x1f2e, 0x4df7, 0x8080, 0x000b, 0x8630, 0x0190,
/*  srom[024]:*/ 0x5f00, 0x41f6, 0x8630, 0x0191, 0x8300, 0x01eb, 0x9f01, 0x65f5,
/*  srom[032]:*/ 0x8200, 0xd800, 0x8010, 0x007c, 0x1f00, 0x0004, 0x8000, 0x200c,
/*  srom[040]:*/ 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
/*  srom[048]:*/ 0x43bb, 0x8000, 0x0002, 0x0000, 0x3ff5, 0x1800, 0x0000, 0xffff,
/*  srom[056]:*/ 0x43bb, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[064]:*/ 0x0634, 0x1102, 0x1000, 0x0000, 0x0002, 0x0010, 0x0005, 0x0400,
/*  srom[072]:*/ 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff,
/*  srom[080]:*/ 0x0707, 0x0000, 0x0000, 0x0000, 0x0077, 0x1951, 0x00e1, 0xffff,
/*  srom[088]:*/ 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[096]:*/ 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000,
/*  srom[104]:*/ 0x0000, 0x0000, 0x0000, 0x0004, 0xff6c, 0xff3a, 0x1d1e, 0xfc96,
/*  srom[112]:*/ 0xffff, 0xb3bc, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[120]:*/ 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[128]:*/ 0xff6c, 0xff3e, 0x1d11, 0xfc9d, 0xffff, 0xb3bc, 0xffff, 0xffff,
/*  srom[136]:*/ 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[144]:*/ 0xffff, 0xffff, 0xffff, 0xffff, 0xff6c, 0xff3c, 0x1d06, 0xfc9f,
/*  srom[152]:*/ 0xffff, 0xb3bc, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[160]:*/ 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[168]:*/ 0x0000, 0x0000, 0x3320, 0xcc65, 0x3320, 0xcc65, 0x6533, 0x0000,
/*  srom[176]:*/ 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe1f5, 0x0000,
/*  srom[184]:*/ 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
/*  srom[192]:*/ 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
/*  srom[200]:*/ 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
/*  srom[208]:*/ 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
/*  srom[216]:*/ 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[224]:*/ 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
/*  srom[232]:*/ 0xffff, 0x7b0b,
}
#endif
