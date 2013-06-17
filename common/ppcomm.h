#ifndef __PPCOMM_H__
#define __PPCOMM_H__

#define CLTOMD_GETATTR 0x1000
#define MDTOCL_GETATTR 0x1001

#define CLTOMD_ACCESS 0x1002
#define MDTOCL_ACCESS 0x1003

#define CLTOMD_OPENDIR 0x1004
#define MDTOCL_OPENDIR 0x1005

#define CLTOMD_READDIR 0x1006
#define MDTOCL_READDIR 0x1007

#define CLTOMD_MKDIR 0x1008
#define MDTOCL_MKDIR 0x1009

#define CLTOMD_RELEASEDIR 0x100A
#define MDTOCL_RELEASEDIR 0x100B

#define CLTOMD_RMDIR 0x100C
#define MDTOCL_RMDIR 0x100D

#define CLTOMD_CREATE 0x100E
#define MDTOCL_CREATE 0x100F

#define CLTOMD_OPEN 0x1010
#define MDTOCL_OPEN 0x1011

#define CLTOMD_READ_CHUNK_INFO 0x1012
#define MDTOCL_READ_CHUNK_INFO 0x1013

#define CLTOMA_READ_CHUNK 0x1014
#define MATOCL_READ_CHUNK 0x1015

#define CLTOMD_WRITE_CHUNK 0x1016
#define MDTOCL_WRITE_CHUNK 0x1017

#define CLTOMD_RELEASE 0x1018
#define MDTOCL_RELEASE 0x1019

#define CLTOMD_RENAME 0x101A
#define MDTOCL_RENAME 0x101B

#define CLTOMD_CHMOD 0x101C
#define MDTOCL_CHMOD 0x101D

#define CLTOMD_CHOWN 0x101E
#define MDTOCL_CHOWN 0x101F

#define CLTOMD_CHGRP 0x1020
#define MDTOCL_CHGRP 0x1021

#define CLTOMD_UNLINK 0x1022
#define MDTOCL_UNLINK 0x1023

//======================================================================================

#define MDTOMI_GETATTR 0x2001
#define MITOMD_GETATTR 0x2002

#define MDTOMI_ACCESS 0x2003
#define MITOMD_ACCESS 0x2004

#define MDTOMI_OPENDIR 0x2005
#define MITOMD_OPENDIR 0x2006

#define MDTOMI_READDIR 0x2007
#define MITOMD_READDIR 0x2008

#define MDTOMI_MKDIR 0x2009
#define MITOMD_MKDIR 0x200A

#define MDTOMI_RELEASEDIR 0x200B
#define MITOMD_RELEASEDIR 0x200C

#define MDTOMI_RMDIR 0x200D
#define MITOMD_RMDIR 0x200E

#define MDTOMI_CREATE 0x200F
#define MITOMD_CREATE 0x2010

#define MDTOMI_OPEN 0x2011
#define MITOMD_OPEN 0x2012

#define MDTOMI_RELEASE 0x2013
#define MITOMD_RELEASE 0x2014

#define MDTOMI_RENAME 0x2015
#define MITOMD_RENAME 0x2016

#define MDTOMI_CHMOD 0x2017
#define MITOMD_CHMOD 0x2018

#define MDTOMI_CHGRP 0x2019
#define MITOMD_CHGRP 0x2020

#define MDTOMI_CHOWN 0x2021
#define MITOMD_CHOWN 0x2022

#define MDTOMI_UPDATE_ATTR 0x2023
#define MITOMD_UPDATE_ATTR 0x2024

#define MDTOMI_UNLINK 0x2025
#define MITOMD_UNLINK 0x2026

#define MDTOMI_READ_CHUNK_INFO 0x2027
#define MITOMD_READ_CHUNK_INFO 0x2028

#define MDTOMI_READ_CHUNK 0x2029
#define MITOMD_READ_CHUNK 0x202A

#define MDTOMI_WRITE_CHUNK 0x202B
#define MITOMD_WRITE_CHUNK 0x202C

//===============================================================

#define ANTOAN_NOOP 0x0001

//===============================================================

#define CSTOMD_REGISTER 0x3000

#define MDTOCS_CREATE 0x3001
#define CSTOMD_CREATE 0x3002

#define MDTOCS_DELETE 0x3003
#define CSTOMD_DELETE 0x3004

//#define MDTOCS_CHUNKOP 0x3005
//#define CSTOMD_CHUNKOP 0x3006

//===============================================================

#define CLTOCS_READ 0x4001
#define CSTOCL_READ 0x4002

#define CLTOCS_READ_STATUS 0x4003
#define CSTOCL_READ_STATUS 0x4004

#define CLTOCS_WRITE 0x4005
#define CSTOCL_WRITE 0x4006

//not needed for now...
//#define CLTOCS_WRITE_DONE 0x4007
//#define CSTOCL_WRITE_DONE 0x4008

//=================================================================

//for synchronization in the case of replication, not supported yet

//#define CSTOCS_GET_CHUNK_BLOCKS 0x4009
//#define CSTOCS_GET_CHUNK_STATUS 0x4010

#define HEADER_LEN 12

#define MDS_PORT 8224
#define MDS_PORT_STR "8224"
#define MDS_CS_PORT 8225
#define MDS_CS_PORT_STR "8225"

#define MIS_PORT 8123
#define MIS_PORT_STR "8123"

#define CS_PORT 8310

typedef struct ppacket{
  int size;
  int cmd;
  int id;
  char* buf;

  char* startptr;
  int bytesleft;

  struct ppacket* next;
} ppacket;

ppacket* createpacket_s(int size,int cmd,int id);
ppacket* createpacket_r(int size,int cmd,int id);

#endif
