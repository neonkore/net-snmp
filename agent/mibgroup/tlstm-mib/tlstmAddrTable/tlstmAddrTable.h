/*
 * Note: this file originally auto-generated by mib2c using
 *  : mib2c.table_data.conf 15999 2007-03-25 22:32:02Z dts12 $
 */
#ifndef TLSTMADDRTABLE_H
#define TLSTMADDRTABLE_H

    /*
     * Typical data structure for a row entry 
     */
struct tlstmAddrTable_entry {
    /*
     * Index values 
     */
    char            snmpTargetAddrName[255];
    size_t          snmpTargetAddrName_len;

    /*
     * Column values 
     */
    char            tlstmAddrServerFingerprint[255];
    size_t          tlstmAddrServerFingerprint_len;
    char            old_tlstmAddrServerFingerprint[255];
    size_t          old_tlstmAddrServerFingerprint_len;
    char            tlstmAddrServerIdentity[255];
    size_t          tlstmAddrServerIdentity_len;
    char            old_tlstmAddrServerIdentity[255];
    size_t          old_tlstmAddrServerIdentity_len;
    long            tlstmAddrStorageType;
    long            old_tlstmAddrStorageType;
    long            tlstmAddrRowStatus;

    int             valid;

    /*
     * user data
     */
  char           *serverCert; /* full path to remote server cert */
  char           *serverId;   /* expected identity for server */
};


/*
 * function declarations 
 */
void            init_tlstmAddrTable(void);
void            initialize_table_tlstmAddrTable(void);
Netsnmp_Node_Handler tlstmAddrTable_handler;

/*
 * column number definitions for table tlstmAddrTable 
 */
#define COLUMN_TLSTMADDRSERVERFINGERPRINT		1
#define COLUMN_TLSTMADDRSERVERIDENTITY		2
#define COLUMN_TLSTMADDRSTORAGETYPE		3
#define COLUMN_TLSTMADDRROWSTATUS		4
#endif                          /* TLSTMADDRTABLE_H */
