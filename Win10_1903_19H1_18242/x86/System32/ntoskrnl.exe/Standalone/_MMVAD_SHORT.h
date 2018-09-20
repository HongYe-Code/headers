typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0004 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0008 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0008 */ unsigned long ParentValue;
  }; /* size: 0x0004 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x000c */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _MMVAD_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long VadType : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned long Protection : 5; /* bit position: 3 */
    /* 0x0000 */ unsigned long PreferredNode : 6; /* bit position: 8 */
    /* 0x0000 */ unsigned long PrivateMemory : 1; /* bit position: 14 */
    /* 0x0000 */ unsigned long PrivateFixup : 1; /* bit position: 15 */
    /* 0x0000 */ unsigned long Graphics : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned long GraphicsUseCoherentBus : 1; /* bit position: 17 */
    /* 0x0000 */ unsigned long GraphicsPageProtection : 3; /* bit position: 18 */
    /* 0x0000 */ unsigned long Enclave : 1; /* bit position: 21 */
    /* 0x0000 */ unsigned long PageSize64K : 1; /* bit position: 22 */
    /* 0x0000 */ unsigned long ShadowStack : 1; /* bit position: 23 */
    /* 0x0000 */ unsigned long Spare : 2; /* bit position: 24 */
    /* 0x0000 */ unsigned long HotPatchAllowed : 1; /* bit position: 26 */
    /* 0x0000 */ unsigned long NoChange : 1; /* bit position: 27 */
    /* 0x0000 */ unsigned long ManySubsections : 1; /* bit position: 28 */
    /* 0x0000 */ unsigned long DeleteInProgress : 1; /* bit position: 29 */
    /* 0x0000 */ unsigned long LockContended : 1; /* bit position: 30 */
    /* 0x0000 */ unsigned long Lock : 1; /* bit position: 31 */
  }; /* bitfield */
} MMVAD_FLAGS, *PMMVAD_FLAGS; /* size: 0x0004 */

typedef struct _MMVAD_FLAGS1
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long CommitCharge : 31; /* bit position: 0 */
    /* 0x0000 */ unsigned long MemCommit : 1; /* bit position: 31 */
  }; /* bitfield */
} MMVAD_FLAGS1, *PMMVAD_FLAGS1; /* size: 0x0004 */

typedef struct _MMVAD_SHORT
{
  union
  {
    struct
    {
      /* 0x0000 */ struct _MMVAD_SHORT* NextVad;
      /* 0x0004 */ void* ExtraCreateInfo;
    }; /* size: 0x0008 */
    /* 0x0000 */ struct _RTL_BALANCED_NODE VadNode;
  }; /* size: 0x000c */
  /* 0x000c */ unsigned long StartingVpn;
  /* 0x0010 */ unsigned long EndingVpn;
  /* 0x0014 */ long ReferenceCount;
  /* 0x0018 */ struct _EX_PUSH_LOCK PushLock;
  union // _TAG_UNNAMED_108
  {
    union
    {
      /* 0x001c */ unsigned long LongFlags;
      /* 0x001c */ struct _MMVAD_FLAGS VadFlags;
      /* 0x001c */ volatile unsigned long VolatileVadLong;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  union // _TAG_UNNAMED_109
  {
    union
    {
      /* 0x0020 */ unsigned long LongFlags1;
      /* 0x0020 */ struct _MMVAD_FLAGS1 VadFlags1;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x0024 */ struct _MI_VAD_EVENT_BLOCK* EventList;
} MMVAD_SHORT, *PMMVAD_SHORT; /* size: 0x0028 */
