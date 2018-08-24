typedef struct _RTL_BALANCED_LINKS
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS* Parent;
  /* 0x0004 */ struct _RTL_BALANCED_LINKS* LeftChild;
  /* 0x0008 */ struct _RTL_BALANCED_LINKS* RightChild;
  /* 0x000c */ char Balance;
  /* 0x000d */ unsigned char Reserved[3];
} RTL_BALANCED_LINKS, *PRTL_BALANCED_LINKS; /* size: 0x0010 */

typedef struct _KTMOBJECT_NAMESPACE_LINK
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS Links;
  /* 0x0010 */ unsigned char Expired;
  /* 0x0011 */ char __PADDING__[3];
} KTMOBJECT_NAMESPACE_LINK, *PKTMOBJECT_NAMESPACE_LINK; /* size: 0x0014 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char Type;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct /* bitfield */
        {
          /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
          /* 0x0001 */ unsigned char Coalescable : 1; /* bit position: 1 */
          /* 0x0001 */ unsigned char KeepShifting : 1; /* bit position: 2 */
          /* 0x0001 */ unsigned char EncodedTolerableDelay : 5; /* bit position: 3 */
        }; /* bitfield */
        /* 0x0001 */ unsigned char Abandoned;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char ThreadControlFlags;
            struct /* bitfield */
            {
              /* 0x0002 */ unsigned char CpuThrottled : 1; /* bit position: 0 */
              /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 1 */
              /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 2 */
              /* 0x0002 */ unsigned char Reserved : 5; /* bit position: 3 */
            }; /* bitfield */
            /* 0x0002 */ unsigned char Hand;
            struct
            {
              /* 0x0002 */ unsigned char Size;
              union
              {
                /* 0x0003 */ unsigned char TimerMiscFlags;
                struct /* bitfield */
                {
                  /* 0x0003 */ unsigned char Index : 1; /* bit position: 0 */
                  /* 0x0003 */ unsigned char Processor : 5; /* bit position: 1 */
                  /* 0x0003 */ unsigned char Inserted : 1; /* bit position: 6 */
                  /* 0x0003 */ volatile unsigned char Expired : 1; /* bit position: 7 */
                }; /* bitfield */
                /* 0x0003 */ unsigned char DebugActive;
                struct /* bitfield */
                {
                  /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
                  /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
                  /* 0x0003 */ unsigned char Reserved2 : 4; /* bit position: 2 */
                  /* 0x0003 */ unsigned char UmsScheduled : 1; /* bit position: 6 */
                  /* 0x0003 */ unsigned char UmsPrimary : 1; /* bit position: 7 */
                }; /* bitfield */
                /* 0x0003 */ unsigned char DpcActive;
              }; /* size: 0x0001 */
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    /* 0x0000 */ volatile long Lock;
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef struct _KMUTANT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ struct _LIST_ENTRY MutantListEntry;
  /* 0x0018 */ struct _KTHREAD* OwnerThread;
  /* 0x001c */ unsigned char Abandoned;
  /* 0x001d */ unsigned char ApcDisable;
  /* 0x001e */ char __PADDING__[2];
} KMUTANT, *PKMUTANT; /* size: 0x0020 */

typedef enum _KENLISTMENT_STATE
{
  KEnlistmentUninitialized = 0,
  KEnlistmentActive = 256,
  KEnlistmentPreparing = 257,
  KEnlistmentPrepared = 258,
  KEnlistmentInDoubt = 259,
  KEnlistmentCommitted = 260,
  KEnlistmentCommittedNotify = 261,
  KEnlistmentCommitRequested = 262,
  KEnlistmentAborted = 263,
  KEnlistmentDelegated = 264,
  KEnlistmentDelegatedDisconnected = 265,
  KEnlistmentPrePreparing = 266,
  KEnlistmentForgotten = 267,
  KEnlistmentRecovering = 268,
  KEnlistmentAborting = 269,
  KEnlistmentReadOnly = 270,
  KEnlistmentOutcomeUnavailable = 271,
  KEnlistmentOffline = 272,
  KEnlistmentPrePrepared = 273,
  KEnlistmentInitialized = 274,
} KENLISTMENT_STATE, *PKENLISTMENT_STATE;

typedef struct _KENLISTMENT_HISTORY
{
  /* 0x0000 */ unsigned long Notification;
  /* 0x0004 */ enum _KENLISTMENT_STATE NewState;
} KENLISTMENT_HISTORY, *PKENLISTMENT_HISTORY; /* size: 0x0008 */

typedef struct _KENLISTMENT
{
  /* 0x0000 */ unsigned long cookie;
  /* 0x0004 */ struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink;
  /* 0x0018 */ struct _GUID EnlistmentId;
  /* 0x0028 */ struct _KMUTANT Mutex;
  /* 0x0048 */ struct _LIST_ENTRY NextSameTx;
  /* 0x0050 */ struct _LIST_ENTRY NextSameRm;
  /* 0x0058 */ struct _KRESOURCEMANAGER* ResourceManager;
  /* 0x005c */ struct _KTRANSACTION* Transaction;
  /* 0x0060 */ enum _KENLISTMENT_STATE State;
  /* 0x0064 */ unsigned long Flags;
  /* 0x0068 */ unsigned long NotificationMask;
  /* 0x006c */ void* Key;
  /* 0x0070 */ unsigned long KeyRefCount;
  /* 0x0074 */ void* RecoveryInformation;
  /* 0x0078 */ unsigned long RecoveryInformationLength;
  /* 0x007c */ void* DynamicNameInformation;
  /* 0x0080 */ unsigned long DynamicNameInformationLength;
  /* 0x0084 */ struct _KTMNOTIFICATION_PACKET* FinalNotification;
  /* 0x0088 */ struct _KENLISTMENT* SupSubEnlistment;
  /* 0x008c */ void* SupSubEnlHandle;
  /* 0x0090 */ void* SubordinateTxHandle;
  /* 0x0094 */ struct _GUID CrmEnlistmentEnId;
  /* 0x00a4 */ struct _GUID CrmEnlistmentTmId;
  /* 0x00b4 */ struct _GUID CrmEnlistmentRmId;
  /* 0x00c4 */ unsigned long NextHistory;
  /* 0x00c8 */ struct _KENLISTMENT_HISTORY History[20];
} KENLISTMENT, *PKENLISTMENT; /* size: 0x0168 */

