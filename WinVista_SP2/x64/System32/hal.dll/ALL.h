enum _DEVICE_USAGE_NOTIFICATION_TYPE;
enum _EVENT_TYPE;
enum _POOL_TYPE;
enum _INTERFACE_TYPE;
union _LARGE_INTEGER;
enum _IRQ_DEVICE_POLICY;
enum _IRQ_PRIORITY;
struct _IO_RESOURCE_DESCRIPTOR;
struct _IO_RESOURCE_LIST;
struct _IO_RESOURCE_REQUIREMENTS_LIST;
enum _FILE_INFORMATION_CLASS;
enum _FSINFOCLASS;
enum _DEVICE_RELATION_TYPE;
enum BUS_QUERY_ID_TYPE;
enum DEVICE_TEXT_TYPE;
enum _SYSTEM_POWER_STATE;
enum _POWER_STATE_TYPE;
enum POWER_ACTION;
enum _WHEA_ERROR_TYPE;
enum _WHEA_ERROR_SEVERITY;
enum _WHEA_ERROR_SOURCE_TYPE;
enum _DEVICE_POWER_STATE;
union _POWER_STATE;
enum _WHEA_RAW_DATA_FORMAT;
enum _MEMORY_CACHING_TYPE_ORIG;
enum WHEA_PCIEXPRESS_DEVICE_TYPE;
enum _IO_ALLOCATION_ACTION;
struct _SYSTEM_POWER_STATE_CONTEXT;
enum _INTERLOCKED_RESULT;
enum _REG_NOTIFY_CLASS;
union _WHEA_MEMORY_ERROR_VALIDBITS;
union _WHEA_ERROR_STATUS;
struct _WHEA_MEMORY_ERROR;
enum _SECURITY_IMPERSONATION_LEVEL;
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS;
struct LIST_ENTRY64;
struct LIST_ENTRY32;
union _WHEA_GENERIC_PROCESSOR_ERROR_VALIDBITS;
struct _LIST_ENTRY;
struct _SINGLE_LIST_ENTRY;
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_LIST;
struct _CM_FULL_RESOURCE_DESCRIPTOR;
struct _UNICODE_STRING;
struct _STRING;
union _ULARGE_INTEGER;
struct _RTL_BITMAP;
struct _KTHREAD;
struct _DISPATCHER_HEADER;
struct _KEVENT;
struct _FAST_MUTEX;
struct _SLIST_ENTRY;
union _SLIST_HEADER;
struct _GENERAL_LOOKASIDE_POOL;
struct _LOOKASIDE_LIST_EX;
struct _EVENT_DESCRIPTOR;
struct _EVENT_DATA_DESCRIPTOR;
union _WHEA_REVISION;
struct _IO_DRIVER_CREATE_CONTEXT;
union _WHEA_ERROR_RECORD_HEADER_VALIDBITS;
union _WHEA_TIMESTAMP;
struct _GUID;
union _WHEA_ERROR_RECORD_HEADER_FLAGS;
union _WHEA_PERSISTENCE_INFO;
struct _WHEA_ERROR_RECORD_HEADER;
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS;
struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR;
struct _WHEA_ERROR_RECORD;
struct _GENERAL_LOOKASIDE;
struct _NPAGED_LOOKASIDE_LIST;
struct _PAGED_LOOKASIDE_LIST;
struct _IO_STATUS_BLOCK;
struct _KDEVICE_QUEUE_ENTRY;
struct _KAPC;
struct _IRP;
struct _MDL;
union _WHEA_PCIEXPRESS_COMMAND_STATUS;
struct _EPROCESS;
struct _WHEA_GENERIC_PROCESSOR_ERROR;
union _WHEA_NMI_ERROR_FLAGS;
struct _WHEA_NMI_ERROR;
union _WHEA_PCIEXPRESS_ERROR_VALIDBITS;
union _WHEA_PCIEXPRESS_VERSION;
struct _WHEA_PCIEXPRESS_DEVICE_ID;
union _WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS;
struct _WHEA_PCIEXPRESS_ERROR;
union _WHEA_PCIXBUS_ERROR_VALIDBITS;
union _WHEA_PCIXBUS_ID;
union _WHEA_PCIXBUS_COMMAND;
struct _WHEA_PCIXBUS_ERROR;
union _WHEA_PCIXDEVICE_ERROR_VALIDBITS;
struct _WHEA_PCIXDEVICE_ID;
struct WHEA_PCIXDEVICE_REGISTER_PAIR;
struct _WHEA_PCIXDEVICE_ERROR;
struct _WAIT_CONTEXT_BLOCK;
struct _KDEVICE_QUEUE;
struct _KDPC;
struct _DEVICE_OBJECT;
struct _DRIVER_OBJECT;
struct _DRIVER_EXTENSION;
union _WHEA_ERROR_PACKET_FLAGS;
struct _WHEA_ERROR_PACKET;
struct _FAST_IO_DISPATCH;
struct _FILE_OBJECT;
struct _VPB;
struct _SECTION_OBJECT_POINTERS;
struct _IO_COMPLETION_CONTEXT;
struct _FILE_BASIC_INFORMATION;
struct _FILE_STANDARD_INFORMATION;
struct _KPROCESS;
struct _DEVOBJ_EXTENSION;
struct _LUID;
struct _LUID_AND_ATTRIBUTES;
struct _INITIAL_PRIVILEGE_SET;
struct _PRIVILEGE_SET;
struct _IOAPIC;
struct _COMPRESSED_DATA_INFO;
struct _FILE_NETWORK_OPEN_INFORMATION;
struct _OWNER_ENTRY;
struct _ERESOURCE;
struct _KSEMAPHORE;
struct _SCSI_REQUEST_BLOCK;
struct _INTERFACE;
struct _IO_TIMER;
struct _ETHREAD;
struct _IO_STACK_LOCATION;
struct _IO_SECURITY_CONTEXT;
struct _SECURITY_QUALITY_OF_SERVICE;
struct _SECURITY_SUBJECT_CONTEXT;
struct _ACCESS_STATE;
struct _FILE_GET_QUOTA_INFORMATION;
struct _DEVICE_CAPABILITIES;
struct _DESCRIPTION_HEADER;
struct _GEN_ADDR;
struct _FADT;
struct _MAPIC;
struct _POWER_SEQUENCE;
struct _CM_RESOURCE_LIST;
struct _M128A;
struct _ECP_LIST;
struct _TXN_PARAMETER_BLOCK;
struct _KDESCRIPTOR;
struct _KSPECIAL_REGISTERS;
struct _XMM_SAVE_AREA32;
struct _CONTEXT;
struct _KPROCESSOR_STATE;
struct _KPRCB;
struct _OBJECT_TYPE;
struct _OBJECT_ATTRIBUTES;
struct _CONTROLLER_OBJECT;
struct _RSDT_32;
struct _LOCAL_NMISOURCE;
struct _IOSAPIC;
struct _PROCLOCALSAPIC;
struct _RSDP;
struct _ISA_VECTOR;
struct _PLATFORM_INTERRUPT;
struct _PROCLOCALAPIC;
struct _IO_NMISOURCE;
struct _FACS;

typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE
{
  DeviceUsageTypeUndefined = 0,
  DeviceUsageTypePaging = 1,
  DeviceUsageTypeHibernation = 2,
  DeviceUsageTypeDumpFile = 3,
} DEVICE_USAGE_NOTIFICATION_TYPE, *PDEVICE_USAGE_NOTIFICATION_TYPE;

typedef enum _EVENT_TYPE
{
  NotificationEvent = 0,
  SynchronizationEvent = 1,
} EVENT_TYPE, *PEVENT_TYPE;

typedef enum _POOL_TYPE
{
  NonPagedPool = 0,
  PagedPool = 1,
  NonPagedPoolMustSucceed = 2,
  DontUseThisType = 3,
  NonPagedPoolCacheAligned = 4,
  PagedPoolCacheAligned = 5,
  NonPagedPoolCacheAlignedMustS = 6,
  MaxPoolType = 7,
  NonPagedPoolSession = 32,
  PagedPoolSession = 33,
  NonPagedPoolMustSucceedSession = 34,
  DontUseThisTypeSession = 35,
  NonPagedPoolCacheAlignedSession = 36,
  PagedPoolCacheAlignedSession = 37,
  NonPagedPoolCacheAlignedMustSSession = 38,
} POOL_TYPE, *PPOOL_TYPE;

typedef enum _INTERFACE_TYPE
{
  InterfaceTypeUndefined = -1,
  Internal = 0,
  Isa = 1,
  Eisa = 2,
  MicroChannel = 3,
  TurboChannel = 4,
  PCIBus = 5,
  VMEBus = 6,
  NuBus = 7,
  PCMCIABus = 8,
  CBus = 9,
  MPIBus = 10,
  MPSABus = 11,
  ProcessorInternal = 12,
  InternalPowerBus = 13,
  PNPISABus = 14,
  PNPBus = 15,
  Vmcs = 16,
  MaximumInterfaceType = 17,
} INTERFACE_TYPE, *PINTERFACE_TYPE;

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef enum _IRQ_DEVICE_POLICY
{
  IrqPolicyMachineDefault = 0,
  IrqPolicyAllCloseProcessors = 1,
  IrqPolicyOneCloseProcessor = 2,
  IrqPolicyAllProcessorsInMachine = 3,
  IrqPolicySpecifiedProcessors = 4,
  IrqPolicySpreadMessagesAcrossAllProcessors = 5,
} IRQ_DEVICE_POLICY, *PIRQ_DEVICE_POLICY;

typedef enum _IRQ_PRIORITY
{
  IrqPriorityUndefined = 0,
  IrqPriorityLow = 1,
  IrqPriorityNormal = 2,
  IrqPriorityHigh = 3,
} IRQ_PRIORITY, *PIRQ_PRIORITY;

typedef struct _IO_RESOURCE_DESCRIPTOR
{
  /* 0x0000 */ unsigned char Option;
  /* 0x0001 */ unsigned char Type;
  /* 0x0002 */ unsigned char ShareDisposition;
  /* 0x0003 */ unsigned char Spare1;
  /* 0x0004 */ unsigned short Flags;
  /* 0x0006 */ unsigned short Spare2;
  union
  {
    union
    {
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long Alignment;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Port;
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long Alignment;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Memory;
      struct
      {
        /* 0x0008 */ unsigned long MinimumVector;
        /* 0x000c */ unsigned long MaximumVector;
        /* 0x0010 */ enum _IRQ_DEVICE_POLICY AffinityPolicy;
        /* 0x0014 */ enum _IRQ_PRIORITY PriorityPolicy;
        /* 0x0018 */ unsigned __int64 TargetedProcessors;
      } /* size: 0x0018 */ Interrupt;
      struct
      {
        /* 0x0008 */ unsigned long MinimumChannel;
        /* 0x000c */ unsigned long MaximumChannel;
      } /* size: 0x0008 */ Dma;
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long Alignment;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Generic;
      struct
      {
        /* 0x0008 */ unsigned long Data[3];
      } /* size: 0x000c */ DevicePrivate;
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long MinBusNumber;
        /* 0x0010 */ unsigned long MaxBusNumber;
        /* 0x0014 */ unsigned long Reserved;
      } /* size: 0x0010 */ BusNumber;
      struct
      {
        /* 0x0008 */ unsigned long Priority;
        /* 0x000c */ unsigned long Reserved1;
        /* 0x0010 */ unsigned long Reserved2;
      } /* size: 0x000c */ ConfigData;
      struct
      {
        /* 0x0008 */ unsigned long Length40;
        /* 0x000c */ unsigned long Alignment40;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Memory40;
      struct
      {
        /* 0x0008 */ unsigned long Length48;
        /* 0x000c */ unsigned long Alignment48;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Memory48;
      struct
      {
        /* 0x0008 */ unsigned long Length64;
        /* 0x000c */ unsigned long Alignment64;
        /* 0x0010 */ union _LARGE_INTEGER MinimumAddress;
        /* 0x0018 */ union _LARGE_INTEGER MaximumAddress;
      } /* size: 0x0018 */ Memory64;
    }; /* size: 0x0018 */
  } /* size: 0x0018 */ u;
} IO_RESOURCE_DESCRIPTOR, *PIO_RESOURCE_DESCRIPTOR; /* size: 0x0020 */

typedef struct _IO_RESOURCE_LIST
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Revision;
  /* 0x0004 */ unsigned long Count;
  /* 0x0008 */ struct _IO_RESOURCE_DESCRIPTOR Descriptors[1];
} IO_RESOURCE_LIST, *PIO_RESOURCE_LIST; /* size: 0x0028 */

typedef struct _IO_RESOURCE_REQUIREMENTS_LIST
{
  /* 0x0000 */ unsigned long ListSize;
  /* 0x0004 */ enum _INTERFACE_TYPE InterfaceType;
  /* 0x0008 */ unsigned long BusNumber;
  /* 0x000c */ unsigned long SlotNumber;
  /* 0x0010 */ unsigned long Reserved[3];
  /* 0x001c */ unsigned long AlternativeLists;
  /* 0x0020 */ struct _IO_RESOURCE_LIST List[1];
} IO_RESOURCE_REQUIREMENTS_LIST, *PIO_RESOURCE_REQUIREMENTS_LIST; /* size: 0x0048 */

typedef enum _FILE_INFORMATION_CLASS
{
  FileDirectoryInformation = 1,
  FileFullDirectoryInformation = 2,
  FileBothDirectoryInformation = 3,
  FileBasicInformation = 4,
  FileStandardInformation = 5,
  FileInternalInformation = 6,
  FileEaInformation = 7,
  FileAccessInformation = 8,
  FileNameInformation = 9,
  FileRenameInformation = 10,
  FileLinkInformation = 11,
  FileNamesInformation = 12,
  FileDispositionInformation = 13,
  FilePositionInformation = 14,
  FileFullEaInformation = 15,
  FileModeInformation = 16,
  FileAlignmentInformation = 17,
  FileAllInformation = 18,
  FileAllocationInformation = 19,
  FileEndOfFileInformation = 20,
  FileAlternateNameInformation = 21,
  FileStreamInformation = 22,
  FilePipeInformation = 23,
  FilePipeLocalInformation = 24,
  FilePipeRemoteInformation = 25,
  FileMailslotQueryInformation = 26,
  FileMailslotSetInformation = 27,
  FileCompressionInformation = 28,
  FileObjectIdInformation = 29,
  FileCompletionInformation = 30,
  FileMoveClusterInformation = 31,
  FileQuotaInformation = 32,
  FileReparsePointInformation = 33,
  FileNetworkOpenInformation = 34,
  FileAttributeTagInformation = 35,
  FileTrackingInformation = 36,
  FileIdBothDirectoryInformation = 37,
  FileIdFullDirectoryInformation = 38,
  FileValidDataLengthInformation = 39,
  FileShortNameInformation = 40,
  FileIoCompletionNotificationInformation = 41,
  FileIoStatusBlockRangeInformation = 42,
  FileIoPriorityHintInformation = 43,
  FileSfioReserveInformation = 44,
  FileSfioVolumeInformation = 45,
  FileHardLinkInformation = 46,
  FileProcessIdsUsingFileInformation = 47,
  FileNormalizedNameInformation = 48,
  FileNetworkPhysicalNameInformation = 49,
  FileIdGlobalTxDirectoryInformation = 50,
  FileMaximumInformation = 51,
} FILE_INFORMATION_CLASS, *PFILE_INFORMATION_CLASS;

typedef enum _FSINFOCLASS
{
  FileFsVolumeInformation = 1,
  FileFsLabelInformation = 2,
  FileFsSizeInformation = 3,
  FileFsDeviceInformation = 4,
  FileFsAttributeInformation = 5,
  FileFsControlInformation = 6,
  FileFsFullSizeInformation = 7,
  FileFsObjectIdInformation = 8,
  FileFsDriverPathInformation = 9,
  FileFsVolumeFlagsInformation = 10,
  FileFsMaximumInformation = 11,
} FSINFOCLASS, *PFSINFOCLASS;

typedef enum _DEVICE_RELATION_TYPE
{
  BusRelations = 0,
  EjectionRelations = 1,
  PowerRelations = 2,
  RemovalRelations = 3,
  TargetDeviceRelation = 4,
  SingleBusRelations = 5,
} DEVICE_RELATION_TYPE, *PDEVICE_RELATION_TYPE;

enum BUS_QUERY_ID_TYPE
{
  BusQueryDeviceID = 0,
  BusQueryHardwareIDs = 1,
  BusQueryCompatibleIDs = 2,
  BusQueryInstanceID = 3,
  BusQueryDeviceSerialNumber = 4,
};

enum DEVICE_TEXT_TYPE
{
  DeviceTextDescription = 0,
  DeviceTextLocationInformation = 1,
};

typedef enum _SYSTEM_POWER_STATE
{
  PowerSystemUnspecified = 0,
  PowerSystemWorking = 1,
  PowerSystemSleeping1 = 2,
  PowerSystemSleeping2 = 3,
  PowerSystemSleeping3 = 4,
  PowerSystemHibernate = 5,
  PowerSystemShutdown = 6,
  PowerSystemMaximum = 7,
} SYSTEM_POWER_STATE, *PSYSTEM_POWER_STATE;

typedef enum _POWER_STATE_TYPE
{
  SystemPowerState = 0,
  DevicePowerState = 1,
} POWER_STATE_TYPE, *PPOWER_STATE_TYPE;

enum POWER_ACTION
{
  PowerActionNone = 0,
  PowerActionReserved = 1,
  PowerActionSleep = 2,
  PowerActionHibernate = 3,
  PowerActionShutdown = 4,
  PowerActionShutdownReset = 5,
  PowerActionShutdownOff = 6,
  PowerActionWarmEject = 7,
};

typedef enum _WHEA_ERROR_TYPE
{
  WheaErrTypeProcessor = 0,
  WheaErrTypeMemory = 1,
  WheaErrTypePCIExpress = 2,
  WheaErrTypeNMI = 3,
  WheaErrTypePCIXBus = 4,
  WheaErrTypePCIXDevice = 5,
  WheaErrTypeGeneric = 6,
} WHEA_ERROR_TYPE, *PWHEA_ERROR_TYPE;

typedef enum _WHEA_ERROR_SEVERITY
{
  WheaErrSevRecoverable = 0,
  WheaErrSevFatal = 1,
  WheaErrSevCorrected = 2,
  WheaErrSevNone = 3,
} WHEA_ERROR_SEVERITY, *PWHEA_ERROR_SEVERITY;

typedef enum _WHEA_ERROR_SOURCE_TYPE
{
  WheaErrSrcTypeMCE = 0,
  WheaErrSrcTypeCMC = 1,
  WheaErrSrcTypeCPE = 2,
  WheaErrSrcTypeNMI = 3,
  WheaErrSrcTypePCIe = 4,
  WheaErrSrcTypeGeneric = 5,
  WheaErrSrcTypeINIT = 6,
  WheaErrSrcTypeBOOT = 7,
  WheaErrSrcTypeSCIGeneric = 8,
  WheaErrSrcTypeIPFMCA = 9,
  WheaErrSrcTypeIPFCMC = 10,
  WheaErrSrcTypeIPFCPE = 11,
  WheaErrSrcTypeMax = 12,
} WHEA_ERROR_SOURCE_TYPE, *PWHEA_ERROR_SOURCE_TYPE;

typedef enum _DEVICE_POWER_STATE
{
  PowerDeviceUnspecified = 0,
  PowerDeviceD0 = 1,
  PowerDeviceD1 = 2,
  PowerDeviceD2 = 3,
  PowerDeviceD3 = 4,
  PowerDeviceMaximum = 5,
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;

typedef union _POWER_STATE
{
  union
  {
    /* 0x0000 */ enum _SYSTEM_POWER_STATE SystemState;
    /* 0x0000 */ enum _DEVICE_POWER_STATE DeviceState;
  }; /* size: 0x0004 */
} POWER_STATE, *PPOWER_STATE; /* size: 0x0004 */

typedef enum _WHEA_RAW_DATA_FORMAT
{
  WheaRawDataFormatIPFSalRecord = 0,
  WheaRawDataFormatIA32MCA = 1,
  WheaRawDataFormatIntel64MCA = 2,
  WheaRawDataFormatAMD64MCA = 3,
  WheaRawDataFormatMemory = 4,
  WheaRawDataFormatPCIExpress = 5,
  WheaRawDataFormatNMIPort = 6,
  WheaRawDataFormatPCIXBus = 7,
  WheaRawDataFormatPCIXDevice = 8,
  WheaRawDataFormatGeneric = 9,
  WheaRawDataFormatMax = 10,
} WHEA_RAW_DATA_FORMAT, *PWHEA_RAW_DATA_FORMAT;

typedef enum _MEMORY_CACHING_TYPE_ORIG
{
  MmFrameBufferCached = 2,
} MEMORY_CACHING_TYPE_ORIG, *PMEMORY_CACHING_TYPE_ORIG;

enum WHEA_PCIEXPRESS_DEVICE_TYPE
{
  WheaPciExpressEndpoint = 0,
  WheaPciExpressLegacyEndpoint = 1,
  WheaPciExpressRootPort = 4,
  WheaPciExpressUpstreamSwitchPort = 5,
  WheaPciExpressDownstreamSwitchPort = 6,
  WheaPciExpressToPciXBridge = 7,
  WheaPciXToExpressBridge = 8,
  WheaPciExpressRootComplexIntegratedEndpoint = 9,
  WheaPciExpressRootComplexEventCollector = 10,
};

typedef enum _IO_ALLOCATION_ACTION
{
  KeepObject = 1,
  DeallocateObject = 2,
  DeallocateObjectKeepRegisters = 3,
} IO_ALLOCATION_ACTION, *PIO_ALLOCATION_ACTION;

typedef struct _SYSTEM_POWER_STATE_CONTEXT
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Reserved1 : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned long TargetSystemState : 4; /* bit position: 8 */
      /* 0x0000 */ unsigned long EffectiveSystemState : 4; /* bit position: 12 */
      /* 0x0000 */ unsigned long CurrentSystemState : 4; /* bit position: 16 */
      /* 0x0000 */ unsigned long IgnoreHibernationPath : 1; /* bit position: 20 */
      /* 0x0000 */ unsigned long PseudoTransition : 1; /* bit position: 21 */
      /* 0x0000 */ unsigned long Reserved2 : 10; /* bit position: 22 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long ContextAsUlong;
  }; /* size: 0x0004 */
} SYSTEM_POWER_STATE_CONTEXT, *PSYSTEM_POWER_STATE_CONTEXT; /* size: 0x0004 */

typedef enum _INTERLOCKED_RESULT
{
  ResultNegative = 1,
  ResultZero = 0,
  ResultPositive = 2,
} INTERLOCKED_RESULT, *PINTERLOCKED_RESULT;

typedef enum _REG_NOTIFY_CLASS
{
  RegNtDeleteKey = 0,
  RegNtPreDeleteKey = 0,
  RegNtSetValueKey = 1,
  RegNtPreSetValueKey = 1,
  RegNtDeleteValueKey = 2,
  RegNtPreDeleteValueKey = 2,
  RegNtSetInformationKey = 3,
  RegNtPreSetInformationKey = 3,
  RegNtRenameKey = 4,
  RegNtPreRenameKey = 4,
  RegNtEnumerateKey = 5,
  RegNtPreEnumerateKey = 5,
  RegNtEnumerateValueKey = 6,
  RegNtPreEnumerateValueKey = 6,
  RegNtQueryKey = 7,
  RegNtPreQueryKey = 7,
  RegNtQueryValueKey = 8,
  RegNtPreQueryValueKey = 8,
  RegNtQueryMultipleValueKey = 9,
  RegNtPreQueryMultipleValueKey = 9,
  RegNtPreCreateKey = 10,
  RegNtPostCreateKey = 11,
  RegNtPreOpenKey = 12,
  RegNtPostOpenKey = 13,
  RegNtKeyHandleClose = 14,
  RegNtPreKeyHandleClose = 14,
  RegNtPostDeleteKey = 15,
  RegNtPostSetValueKey = 16,
  RegNtPostDeleteValueKey = 17,
  RegNtPostSetInformationKey = 18,
  RegNtPostRenameKey = 19,
  RegNtPostEnumerateKey = 20,
  RegNtPostEnumerateValueKey = 21,
  RegNtPostQueryKey = 22,
  RegNtPostQueryValueKey = 23,
  RegNtPostQueryMultipleValueKey = 24,
  RegNtPostKeyHandleClose = 25,
  RegNtPreCreateKeyEx = 26,
  RegNtPostCreateKeyEx = 27,
  RegNtPreOpenKeyEx = 28,
  RegNtPostOpenKeyEx = 29,
  RegNtPreFlushKey = 30,
  RegNtPostFlushKey = 31,
  RegNtPreLoadKey = 32,
  RegNtPostLoadKey = 33,
  RegNtPreUnLoadKey = 34,
  RegNtPostUnLoadKey = 35,
  RegNtPreQueryKeySecurity = 36,
  RegNtPostQueryKeySecurity = 37,
  RegNtPreSetKeySecurity = 38,
  RegNtPostSetKeySecurity = 39,
  RegNtCallbackObjectContextCleanup = 40,
  RegNtPreRestoreKey = 41,
  RegNtPostRestoreKey = 42,
  RegNtPreSaveKey = 43,
  RegNtPostSaveKey = 44,
  RegNtPreReplaceKey = 45,
  RegNtPostReplaceKey = 46,
  MaxRegNtNotifyClass = 47,
} REG_NOTIFY_CLASS, *PREG_NOTIFY_CLASS;

typedef union _WHEA_MEMORY_ERROR_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 ErrorStatus : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 PhysicalAddress : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 PhysicalAddressMask : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 Node : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Card : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 Module : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 Bank : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 Device : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 Row : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 Column : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned __int64 BitPosition : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned __int64 RequesterId : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned __int64 ResponderId : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned __int64 TargetId : 1; /* bit position: 13 */
      /* 0x0000 */ unsigned __int64 ErrorType : 1; /* bit position: 14 */
      /* 0x0000 */ unsigned __int64 Reserved : 49; /* bit position: 15 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 ValidBits;
  }; /* size: 0x0008 */
} WHEA_MEMORY_ERROR_VALIDBITS, *PWHEA_MEMORY_ERROR_VALIDBITS; /* size: 0x0008 */

typedef union _WHEA_ERROR_STATUS
{
  union
  {
    /* 0x0000 */ unsigned __int64 ErrorStatus;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Reserved1 : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 ErrorType : 8; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 Address : 1; /* bit position: 16 */
      /* 0x0000 */ unsigned __int64 Control : 1; /* bit position: 17 */
      /* 0x0000 */ unsigned __int64 Data : 1; /* bit position: 18 */
      /* 0x0000 */ unsigned __int64 Responder : 1; /* bit position: 19 */
      /* 0x0000 */ unsigned __int64 Requester : 1; /* bit position: 20 */
      /* 0x0000 */ unsigned __int64 FirstError : 1; /* bit position: 21 */
      /* 0x0000 */ unsigned __int64 Overflow : 1; /* bit position: 22 */
      /* 0x0000 */ unsigned __int64 Reserved2 : 41; /* bit position: 23 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} WHEA_ERROR_STATUS, *PWHEA_ERROR_STATUS; /* size: 0x0008 */

typedef struct _WHEA_MEMORY_ERROR
{
  /* 0x0000 */ union _WHEA_MEMORY_ERROR_VALIDBITS ValidBits;
  /* 0x0008 */ union _WHEA_ERROR_STATUS ErrorStatus;
  /* 0x0010 */ unsigned __int64 PhysicalAddress;
  /* 0x0018 */ unsigned __int64 PhysicalAddressMask;
  /* 0x0020 */ unsigned short Node;
  /* 0x0022 */ unsigned short Card;
  /* 0x0024 */ unsigned short Module;
  /* 0x0026 */ unsigned short Bank;
  /* 0x0028 */ unsigned short Device;
  /* 0x002a */ unsigned short Row;
  /* 0x002c */ unsigned short Column;
  /* 0x002e */ unsigned short BitPosition;
  /* 0x0030 */ unsigned __int64 RequesterId;
  /* 0x0038 */ unsigned __int64 ResponderId;
  /* 0x0040 */ unsigned __int64 TargetId;
  /* 0x0048 */ unsigned char ErrorType;
} WHEA_MEMORY_ERROR, *PWHEA_MEMORY_ERROR; /* size: 0x0049 */

typedef enum _SECURITY_IMPERSONATION_LEVEL
{
  SecurityAnonymous = 0,
  SecurityIdentification = 1,
  SecurityImpersonation = 2,
  SecurityDelegation = 3,
} SECURITY_IMPERSONATION_LEVEL, *PSECURITY_IMPERSONATION_LEVEL;

typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Primary : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long ContainmentWarning : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Reset : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long ThresholdExceeded : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long ResourceNotAvailable : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long LatentError : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long Reserved : 26; /* bit position: 6 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS, *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS; /* size: 0x0004 */

struct LIST_ENTRY64
{
  /* 0x0000 */ unsigned __int64 Flink;
  /* 0x0008 */ unsigned __int64 Blink;
}; /* size: 0x0010 */

struct LIST_ENTRY32
{
  /* 0x0000 */ unsigned long Flink;
  /* 0x0004 */ unsigned long Blink;
}; /* size: 0x0008 */

typedef union _WHEA_GENERIC_PROCESSOR_ERROR_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 ProcessorType : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 InstructionSet : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 ErrorType : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 Operation : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Flags : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 Level : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 CPUVersion : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 CPUBrandString : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 ProcessorId : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 TargetAddress : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned __int64 RequesterId : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned __int64 ResponderId : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned __int64 InstructionPointer : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned __int64 Reserved : 51; /* bit position: 13 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 ValidBits;
  }; /* size: 0x0008 */
} WHEA_GENERIC_PROCESSOR_ERROR_VALIDBITS, *PWHEA_GENERIC_PROCESSOR_ERROR_VALIDBITS; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char ShareDisposition;
  /* 0x0002 */ unsigned short Flags;
  union
  {
    union
    {
      struct
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x000c */ Generic;
      struct
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x000c */ Port;
      struct
      {
        /* 0x0004 */ unsigned long Level;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned __int64 Affinity;
      } /* size: 0x0010 */ Interrupt;
      struct
      {
        union
        {
          struct
          {
            /* 0x0004 */ unsigned short Reserved;
            /* 0x0006 */ unsigned short MessageCount;
            /* 0x0008 */ unsigned long Vector;
            /* 0x000c */ unsigned __int64 Affinity;
          } /* size: 0x0010 */ Raw;
          struct
          {
            /* 0x0004 */ unsigned long Level;
            /* 0x0008 */ unsigned long Vector;
            /* 0x000c */ unsigned __int64 Affinity;
          } /* size: 0x0010 */ Translated;
        }; /* size: 0x0010 */
      } /* size: 0x0010 */ MessageInterrupt;
      struct
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x000c */ Memory;
      struct
      {
        /* 0x0004 */ unsigned long Channel;
        /* 0x0008 */ unsigned long Port;
        /* 0x000c */ unsigned long Reserved1;
      } /* size: 0x000c */ Dma;
      struct
      {
        /* 0x0004 */ unsigned long Data[3];
      } /* size: 0x000c */ DevicePrivate;
      struct
      {
        /* 0x0004 */ unsigned long Start;
        /* 0x0008 */ unsigned long Length;
        /* 0x000c */ unsigned long Reserved;
      } /* size: 0x000c */ BusNumber;
      struct
      {
        /* 0x0004 */ unsigned long DataSize;
        /* 0x0008 */ unsigned long Reserved1;
        /* 0x000c */ unsigned long Reserved2;
      } /* size: 0x000c */ DeviceSpecificData;
      struct
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length40;
      } /* size: 0x000c */ Memory40;
      struct
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length48;
      } /* size: 0x000c */ Memory48;
      struct
      {
        /* 0x0004 */ union _LARGE_INTEGER Start;
        /* 0x000c */ unsigned long Length64;
      } /* size: 0x000c */ Memory64;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ u;
} CM_PARTIAL_RESOURCE_DESCRIPTOR, *PCM_PARTIAL_RESOURCE_DESCRIPTOR; /* size: 0x0014 */

typedef struct _CM_PARTIAL_RESOURCE_LIST
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Revision;
  /* 0x0004 */ unsigned long Count;
  /* 0x0008 */ struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];
} CM_PARTIAL_RESOURCE_LIST, *PCM_PARTIAL_RESOURCE_LIST; /* size: 0x001c */

typedef struct _CM_FULL_RESOURCE_DESCRIPTOR
{
  /* 0x0000 */ enum _INTERFACE_TYPE InterfaceType;
  /* 0x0004 */ unsigned long BusNumber;
  /* 0x0008 */ struct _CM_PARTIAL_RESOURCE_LIST PartialResourceList;
} CM_FULL_RESOURCE_DESCRIPTOR, *PCM_FULL_RESOURCE_DESCRIPTOR; /* size: 0x0024 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ long Padding_0;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ long Padding_1;
  /* 0x0008 */ char* Buffer;
} STRING, *PSTRING; /* size: 0x0010 */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ long Padding_2;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

struct _KTHREAD;

typedef struct _DISPATCHER_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char Type;
      union
      {
        /* 0x0001 */ unsigned char Abandoned;
        /* 0x0001 */ unsigned char Absolute;
        /* 0x0001 */ unsigned char NpxIrql;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char Size;
            struct
            {
              /* 0x0002 */ unsigned char Hand;
              union
              {
                /* 0x0003 */ unsigned char Inserted;
                /* 0x0003 */ unsigned char DebugActive;
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
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

typedef struct _FAST_MUTEX
{
  /* 0x0000 */ volatile long Count;
  /* 0x0004 */ long Padding_3;
  /* 0x0008 */ struct _KTHREAD* Owner;
  /* 0x0010 */ unsigned long Contention;
  /* 0x0014 */ long Padding_4;
  /* 0x0018 */ struct _KEVENT Gate;
  /* 0x0030 */ unsigned long OldIrql;
  /* 0x0034 */ long __PADDING__[1];
} FAST_MUTEX, *PFAST_MUTEX; /* size: 0x0038 */

typedef struct _SLIST_ENTRY
{
  /* 0x0000 */ struct _SLIST_ENTRY* Next;
  /* 0x0008 */ long __PADDING__[2];
} SLIST_ENTRY, *PSLIST_ENTRY; /* size: 0x0010 */

typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 9; /* bit position: 16 */
        /* 0x0000 */ unsigned __int64 NextEntry : 39; /* bit position: 25 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Init : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 Reserved : 59; /* bit position: 2 */
        /* 0x0008 */ unsigned __int64 Region : 3; /* bit position: 61 */
      }; /* bitfield */
    } /* size: 0x0010 */ Header8;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Init : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 Reserved : 2; /* bit position: 2 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ Header16;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Reserved : 3; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _GENERAL_LOOKASIDE_POOL
{
  union
  {
    /* 0x0000 */ union _SLIST_HEADER ListHead;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY SingleListHead;
  }; /* size: 0x0010 */
  /* 0x0010 */ unsigned short Depth;
  /* 0x0012 */ unsigned short MaximumDepth;
  /* 0x0014 */ unsigned long TotalAllocates;
  union
  {
    /* 0x0018 */ unsigned long AllocateMisses;
    /* 0x0018 */ unsigned long AllocateHits;
  }; /* size: 0x0004 */
  /* 0x001c */ unsigned long TotalFrees;
  union
  {
    /* 0x0020 */ unsigned long FreeMisses;
    /* 0x0020 */ unsigned long FreeHits;
  }; /* size: 0x0004 */
  /* 0x0024 */ enum _POOL_TYPE Type;
  /* 0x0028 */ unsigned long Tag;
  /* 0x002c */ unsigned long Size;
  union
  {
    /* 0x0030 */ void* AllocateEx /* function */;
    /* 0x0030 */ void* Allocate /* function */;
  }; /* size: 0x0008 */
  union
  {
    /* 0x0038 */ void* FreeEx /* function */;
    /* 0x0038 */ void* Free /* function */;
  }; /* size: 0x0008 */
  /* 0x0040 */ struct _LIST_ENTRY ListEntry;
  /* 0x0050 */ unsigned long LastTotalAllocates;
  union
  {
    /* 0x0054 */ unsigned long LastAllocateMisses;
    /* 0x0054 */ unsigned long LastAllocateHits;
  }; /* size: 0x0004 */
  /* 0x0058 */ unsigned long Future[2];
} GENERAL_LOOKASIDE_POOL, *PGENERAL_LOOKASIDE_POOL; /* size: 0x0060 */

typedef struct _LOOKASIDE_LIST_EX
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE_POOL L;
} LOOKASIDE_LIST_EX, *PLOOKASIDE_LIST_EX; /* size: 0x0060 */

typedef struct _EVENT_DESCRIPTOR
{
  /* 0x0000 */ unsigned short Id;
  /* 0x0002 */ unsigned char Version;
  /* 0x0003 */ unsigned char Channel;
  /* 0x0004 */ unsigned char Level;
  /* 0x0005 */ unsigned char Opcode;
  /* 0x0006 */ unsigned short Task;
  /* 0x0008 */ unsigned __int64 Keyword;
} EVENT_DESCRIPTOR, *PEVENT_DESCRIPTOR; /* size: 0x0010 */

typedef struct _EVENT_DATA_DESCRIPTOR
{
  /* 0x0000 */ unsigned __int64 Ptr;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ unsigned long Reserved;
} EVENT_DATA_DESCRIPTOR, *PEVENT_DATA_DESCRIPTOR; /* size: 0x0010 */

typedef union _WHEA_REVISION
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char MinorRevision;
      /* 0x0001 */ unsigned char MajorRevision;
    }; /* size: 0x0002 */
    /* 0x0000 */ unsigned short AsUSHORT;
  }; /* size: 0x0002 */
} WHEA_REVISION, *PWHEA_REVISION; /* size: 0x0002 */

typedef struct _IO_DRIVER_CREATE_CONTEXT
{
  /* 0x0000 */ short Size;
  /* 0x0002 */ char Padding_5[6];
  /* 0x0008 */ struct _ECP_LIST* ExtraCreateParameter;
  /* 0x0010 */ void* DeviceObjectHint;
  /* 0x0018 */ struct _TXN_PARAMETER_BLOCK* TxnParameters;
} IO_DRIVER_CREATE_CONTEXT, *PIO_DRIVER_CREATE_CONTEXT; /* size: 0x0020 */

typedef union _WHEA_ERROR_RECORD_HEADER_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Timestamp : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long PlatformId : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long PartitionId : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long Reserved : 29; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_ERROR_RECORD_HEADER_VALIDBITS, *PWHEA_ERROR_RECORD_HEADER_VALIDBITS; /* size: 0x0004 */

typedef union _WHEA_TIMESTAMP
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Seconds : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Minutes : 8; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 Hours : 8; /* bit position: 16 */
      /* 0x0000 */ unsigned __int64 Reserved : 8; /* bit position: 24 */
      /* 0x0000 */ unsigned __int64 Day : 8; /* bit position: 32 */
      /* 0x0000 */ unsigned __int64 Month : 8; /* bit position: 40 */
      /* 0x0000 */ unsigned __int64 Year : 8; /* bit position: 48 */
      /* 0x0000 */ unsigned __int64 Century : 8; /* bit position: 56 */
    }; /* bitfield */
    /* 0x0000 */ union _LARGE_INTEGER AsLARGE_INTEGER;
  }; /* size: 0x0008 */
} WHEA_TIMESTAMP, *PWHEA_TIMESTAMP; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef union _WHEA_ERROR_RECORD_HEADER_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Recovered : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long PreviousError : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Simulated : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long Reserved : 29; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_ERROR_RECORD_HEADER_FLAGS, *PWHEA_ERROR_RECORD_HEADER_FLAGS; /* size: 0x0004 */

typedef union _WHEA_PERSISTENCE_INFO
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Signature : 16; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Length : 24; /* bit position: 16 */
      /* 0x0000 */ unsigned __int64 Identifier : 16; /* bit position: 40 */
      /* 0x0000 */ unsigned __int64 Attributes : 2; /* bit position: 56 */
      /* 0x0000 */ unsigned __int64 DoNotLog : 1; /* bit position: 58 */
      /* 0x0000 */ unsigned __int64 Reserved : 5; /* bit position: 59 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 AsULONGLONG;
  }; /* size: 0x0008 */
} WHEA_PERSISTENCE_INFO, *PWHEA_PERSISTENCE_INFO; /* size: 0x0008 */

typedef struct _WHEA_ERROR_RECORD_HEADER
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ union _WHEA_REVISION Revision;
  /* 0x0006 */ unsigned long SignatureEnd;
  /* 0x000a */ unsigned short SectionCount;
  /* 0x000c */ enum _WHEA_ERROR_SEVERITY Severity;
  /* 0x0010 */ union _WHEA_ERROR_RECORD_HEADER_VALIDBITS ValidBits;
  /* 0x0014 */ unsigned long Length;
  /* 0x0018 */ union _WHEA_TIMESTAMP Timestamp;
  /* 0x0020 */ struct _GUID PlatformId;
  /* 0x0030 */ struct _GUID PartitionId;
  /* 0x0040 */ struct _GUID CreatorId;
  /* 0x0050 */ struct _GUID NotifyType;
  /* 0x0060 */ unsigned __int64 RecordId;
  /* 0x0068 */ union _WHEA_ERROR_RECORD_HEADER_FLAGS Flags;
  /* 0x006c */ union _WHEA_PERSISTENCE_INFO PersistenceInfo;
  /* 0x0074 */ unsigned char Reserved[12];
} WHEA_ERROR_RECORD_HEADER, *PWHEA_ERROR_RECORD_HEADER; /* size: 0x0080 */

typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char FRUId : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char FRUText : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char Reserved : 6; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AsUCHAR;
  }; /* size: 0x0001 */
} WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS, *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS; /* size: 0x0001 */

typedef struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR
{
  /* 0x0000 */ unsigned long SectionOffset;
  /* 0x0004 */ unsigned long SectionLength;
  /* 0x0008 */ union _WHEA_REVISION Revision;
  /* 0x000a */ union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS ValidBits;
  /* 0x000b */ unsigned char Reserved;
  /* 0x000c */ union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS Flags;
  /* 0x0010 */ struct _GUID SectionType;
  /* 0x0020 */ struct _GUID FRUId;
  /* 0x0030 */ enum _WHEA_ERROR_SEVERITY SectionSeverity;
  /* 0x0034 */ char FRUText[20];
} WHEA_ERROR_RECORD_SECTION_DESCRIPTOR, *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR; /* size: 0x0048 */

typedef struct _WHEA_ERROR_RECORD
{
  /* 0x0000 */ struct _WHEA_ERROR_RECORD_HEADER Header;
  /* 0x0080 */ struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR SectionDescriptor[1];
} WHEA_ERROR_RECORD, *PWHEA_ERROR_RECORD; /* size: 0x00c8 */

typedef struct _GENERAL_LOOKASIDE
{
  union
  {
    /* 0x0000 */ union _SLIST_HEADER ListHead;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY SingleListHead;
  }; /* size: 0x0010 */
  /* 0x0010 */ unsigned short Depth;
  /* 0x0012 */ unsigned short MaximumDepth;
  /* 0x0014 */ unsigned long TotalAllocates;
  union
  {
    /* 0x0018 */ unsigned long AllocateMisses;
    /* 0x0018 */ unsigned long AllocateHits;
  }; /* size: 0x0004 */
  /* 0x001c */ unsigned long TotalFrees;
  union
  {
    /* 0x0020 */ unsigned long FreeMisses;
    /* 0x0020 */ unsigned long FreeHits;
  }; /* size: 0x0004 */
  /* 0x0024 */ enum _POOL_TYPE Type;
  /* 0x0028 */ unsigned long Tag;
  /* 0x002c */ unsigned long Size;
  union
  {
    /* 0x0030 */ void* AllocateEx /* function */;
    /* 0x0030 */ void* Allocate /* function */;
  }; /* size: 0x0008 */
  union
  {
    /* 0x0038 */ void* FreeEx /* function */;
    /* 0x0038 */ void* Free /* function */;
  }; /* size: 0x0008 */
  /* 0x0040 */ struct _LIST_ENTRY ListEntry;
  /* 0x0050 */ unsigned long LastTotalAllocates;
  union
  {
    /* 0x0054 */ unsigned long LastAllocateMisses;
    /* 0x0054 */ unsigned long LastAllocateHits;
  }; /* size: 0x0004 */
  /* 0x0058 */ unsigned long Future[2];
  /* 0x0060 */ long __PADDING__[8];
} GENERAL_LOOKASIDE, *PGENERAL_LOOKASIDE; /* size: 0x0080 */

typedef struct _NPAGED_LOOKASIDE_LIST
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE L;
} NPAGED_LOOKASIDE_LIST, *PNPAGED_LOOKASIDE_LIST; /* size: 0x0080 */

typedef struct _PAGED_LOOKASIDE_LIST
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE L;
} PAGED_LOOKASIDE_LIST, *PPAGED_LOOKASIDE_LIST; /* size: 0x0080 */

typedef struct _IO_STATUS_BLOCK
{
  union
  {
    /* 0x0000 */ long Status;
    /* 0x0000 */ void* Pointer;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned __int64 Information;
} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK; /* size: 0x0010 */

typedef struct _KDEVICE_QUEUE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY DeviceListEntry;
  /* 0x0010 */ unsigned long SortKey;
  /* 0x0014 */ unsigned char Inserted;
  /* 0x0015 */ char __PADDING__[3];
} KDEVICE_QUEUE_ENTRY, *PKDEVICE_QUEUE_ENTRY; /* size: 0x0018 */

typedef struct _KAPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char SpareByte0;
  /* 0x0002 */ unsigned char Size;
  /* 0x0003 */ unsigned char SpareByte1;
  /* 0x0004 */ unsigned long SpareLong0;
  /* 0x0008 */ struct _KTHREAD* Thread;
  /* 0x0010 */ struct _LIST_ENTRY ApcListEntry;
  /* 0x0020 */ void* KernelRoutine /* function */;
  /* 0x0028 */ void* RundownRoutine /* function */;
  /* 0x0030 */ void* NormalRoutine /* function */;
  /* 0x0038 */ void* NormalContext;
  /* 0x0040 */ void* SystemArgument1;
  /* 0x0048 */ void* SystemArgument2;
  /* 0x0050 */ char ApcStateIndex;
  /* 0x0051 */ char ApcMode;
  /* 0x0052 */ unsigned char Inserted;
  /* 0x0053 */ char __PADDING__[5];
} KAPC, *PKAPC; /* size: 0x0058 */

typedef struct _IRP
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ long Padding_6;
  /* 0x0008 */ struct _MDL* MdlAddress;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ long Padding_7;
  union
  {
    union
    {
      /* 0x0018 */ struct _IRP* MasterIrp;
      /* 0x0018 */ long IrpCount;
      /* 0x0018 */ void* SystemBuffer;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ AssociatedIrp;
  /* 0x0020 */ struct _LIST_ENTRY ThreadListEntry;
  /* 0x0030 */ struct _IO_STATUS_BLOCK IoStatus;
  /* 0x0040 */ char RequestorMode;
  /* 0x0041 */ unsigned char PendingReturned;
  /* 0x0042 */ char StackCount;
  /* 0x0043 */ char CurrentLocation;
  /* 0x0044 */ unsigned char Cancel;
  /* 0x0045 */ unsigned char CancelIrql;
  /* 0x0046 */ char ApcEnvironment;
  /* 0x0047 */ unsigned char AllocationFlags;
  /* 0x0048 */ struct _IO_STATUS_BLOCK* UserIosb;
  /* 0x0050 */ struct _KEVENT* UserEvent;
  union
  {
    union
    {
      struct
      {
        union
        {
          /* 0x0058 */ void* UserApcRoutine /* function */;
          /* 0x0058 */ void* IssuingProcess;
        }; /* size: 0x0008 */
        /* 0x0060 */ void* UserApcContext;
      } /* size: 0x0010 */ AsynchronousParameters;
      /* 0x0058 */ union _LARGE_INTEGER AllocationSize;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ Overlay;
  /* 0x0068 */ void* CancelRoutine /* function */;
  /* 0x0070 */ void* UserBuffer;
  union
  {
    union
    {
      struct
      {
        union
        {
          /* 0x0078 */ struct _KDEVICE_QUEUE_ENTRY DeviceQueueEntry;
          /* 0x0078 */ void* DriverContext[4];
        }; /* size: 0x0020 */
        /* 0x0098 */ struct _ETHREAD* Thread;
        /* 0x00a0 */ char* AuxiliaryBuffer;
        /* 0x00a8 */ struct _LIST_ENTRY ListEntry;
        union
        {
          /* 0x00b8 */ struct _IO_STACK_LOCATION* CurrentStackLocation;
          /* 0x00b8 */ unsigned long PacketType;
        }; /* size: 0x0008 */
        /* 0x00c0 */ struct _FILE_OBJECT* OriginalFileObject;
      } /* size: 0x0050 */ Overlay;
      /* 0x0078 */ struct _KAPC Apc;
      /* 0x0078 */ void* CompletionKey;
    }; /* size: 0x0058 */
  } /* size: 0x0058 */ Tail;
} IRP, *PIRP; /* size: 0x00d0 */

typedef struct _MDL
{
  /* 0x0000 */ struct _MDL* Next;
  /* 0x0008 */ short Size;
  /* 0x000a */ short MdlFlags;
  /* 0x000c */ long Padding_8;
  /* 0x0010 */ struct _EPROCESS* Process;
  /* 0x0018 */ void* MappedSystemVa;
  /* 0x0020 */ void* StartVa;
  /* 0x0028 */ unsigned long ByteCount;
  /* 0x002c */ unsigned long ByteOffset;
} MDL, *PMDL; /* size: 0x0030 */

typedef union _WHEA_PCIEXPRESS_COMMAND_STATUS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short Command;
      /* 0x0002 */ unsigned short Status;
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_PCIEXPRESS_COMMAND_STATUS, *PWHEA_PCIEXPRESS_COMMAND_STATUS; /* size: 0x0004 */

struct _EPROCESS;

typedef struct _WHEA_GENERIC_PROCESSOR_ERROR
{
  /* 0x0000 */ union _WHEA_GENERIC_PROCESSOR_ERROR_VALIDBITS ValidBits;
  /* 0x0008 */ unsigned char ProcessorType;
  /* 0x0009 */ unsigned char InstructionSet;
  /* 0x000a */ unsigned char ErrorType;
  /* 0x000b */ unsigned char Operation;
  /* 0x000c */ unsigned char Flags;
  /* 0x000d */ unsigned char Level;
  /* 0x000e */ unsigned short Reserved;
  /* 0x0010 */ unsigned __int64 CPUVersion;
  /* 0x0018 */ unsigned char CPUBrandString[128];
  /* 0x0098 */ unsigned __int64 ProcessorId;
  /* 0x00a0 */ unsigned __int64 TargetAddress;
  /* 0x00a8 */ unsigned __int64 RequesterId;
  /* 0x00b0 */ unsigned __int64 ResponderId;
  /* 0x00b8 */ unsigned __int64 InstructionPointer;
} WHEA_GENERIC_PROCESSOR_ERROR, *PWHEA_GENERIC_PROCESSOR_ERROR; /* size: 0x00c0 */

typedef union _WHEA_NMI_ERROR_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long HypervisorError : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Reserved : 31; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_NMI_ERROR_FLAGS, *PWHEA_NMI_ERROR_FLAGS; /* size: 0x0004 */

typedef struct _WHEA_NMI_ERROR
{
  /* 0x0000 */ unsigned char Data[8];
  /* 0x0008 */ union _WHEA_NMI_ERROR_FLAGS Flags;
} WHEA_NMI_ERROR, *PWHEA_NMI_ERROR; /* size: 0x000c */

typedef union _WHEA_PCIEXPRESS_ERROR_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 PortType : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Version : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 CommandStatus : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 DeviceId : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 DeviceSerialNumber : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 BridgeControlStatus : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 ExpressCapability : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 AerInfo : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 Reserved : 56; /* bit position: 8 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 ValidBits;
  }; /* size: 0x0008 */
} WHEA_PCIEXPRESS_ERROR_VALIDBITS, *PWHEA_PCIEXPRESS_ERROR_VALIDBITS; /* size: 0x0008 */

typedef union _WHEA_PCIEXPRESS_VERSION
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char MinorVersion;
      /* 0x0001 */ unsigned char MajorVersion;
      /* 0x0002 */ unsigned short Reserved;
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_PCIEXPRESS_VERSION, *PWHEA_PCIEXPRESS_VERSION; /* size: 0x0004 */

typedef struct _WHEA_PCIEXPRESS_DEVICE_ID
{
  /* 0x0000 */ unsigned short VendorID;
  /* 0x0002 */ unsigned short DeviceID;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long ClassCode : 24; /* bit position: 0 */
    /* 0x0004 */ unsigned long FunctionNumber : 8; /* bit position: 24 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned long DeviceNumber : 8; /* bit position: 0 */
    /* 0x0008 */ unsigned long Segment : 16; /* bit position: 8 */
    /* 0x0008 */ unsigned long PrimaryBusNumber : 8; /* bit position: 24 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x000c */ unsigned long SecondaryBusNumber : 8; /* bit position: 0 */
    /* 0x000c */ unsigned long Reserved1 : 2; /* bit position: 8 */
    /* 0x000c */ unsigned long SlotNumber : 14; /* bit position: 10 */
    /* 0x000c */ unsigned long Reserved2 : 8; /* bit position: 24 */
  }; /* bitfield */
} WHEA_PCIEXPRESS_DEVICE_ID, *PWHEA_PCIEXPRESS_DEVICE_ID; /* size: 0x0010 */

typedef union _WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short BridgeSecondaryStatus;
      /* 0x0002 */ unsigned short BridgeControl;
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS, *PWHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS; /* size: 0x0004 */

typedef struct _WHEA_PCIEXPRESS_ERROR
{
  /* 0x0000 */ union _WHEA_PCIEXPRESS_ERROR_VALIDBITS ValidBits;
  /* 0x0008 */ enum WHEA_PCIEXPRESS_DEVICE_TYPE PortType;
  /* 0x000c */ union _WHEA_PCIEXPRESS_VERSION Version;
  /* 0x0010 */ union _WHEA_PCIEXPRESS_COMMAND_STATUS CommandStatus;
  /* 0x0014 */ unsigned long Reserved;
  /* 0x0018 */ struct _WHEA_PCIEXPRESS_DEVICE_ID DeviceId;
  /* 0x0028 */ unsigned __int64 DeviceSerialNumber;
  /* 0x0030 */ union _WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS BridgeControlStatus;
  /* 0x0034 */ unsigned char ExpressCapability[60];
  /* 0x0070 */ unsigned char AerInfo[96];
} WHEA_PCIEXPRESS_ERROR, *PWHEA_PCIEXPRESS_ERROR; /* size: 0x00d0 */

typedef union _WHEA_PCIXBUS_ERROR_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 ErrorStatus : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 ErrorType : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 BusId : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 BusAddress : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 BusData : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 BusCommand : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 RequesterId : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 CompleterId : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 TargetId : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 Reserved : 55; /* bit position: 9 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 ValidBits;
  }; /* size: 0x0008 */
} WHEA_PCIXBUS_ERROR_VALIDBITS, *PWHEA_PCIXBUS_ERROR_VALIDBITS; /* size: 0x0008 */

typedef union _WHEA_PCIXBUS_ID
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char BusNumber;
      /* 0x0001 */ unsigned char BusSegment;
    }; /* size: 0x0002 */
    /* 0x0000 */ unsigned short AsUSHORT;
  }; /* size: 0x0002 */
} WHEA_PCIXBUS_ID, *PWHEA_PCIXBUS_ID; /* size: 0x0002 */

typedef union _WHEA_PCIXBUS_COMMAND
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Command : 56; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 PCIXCommand : 1; /* bit position: 56 */
      /* 0x0000 */ unsigned __int64 Reserved : 7; /* bit position: 57 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 AsULONGLONG;
  }; /* size: 0x0008 */
} WHEA_PCIXBUS_COMMAND, *PWHEA_PCIXBUS_COMMAND; /* size: 0x0008 */

typedef struct _WHEA_PCIXBUS_ERROR
{
  /* 0x0000 */ union _WHEA_PCIXBUS_ERROR_VALIDBITS ValidBits;
  /* 0x0008 */ union _WHEA_ERROR_STATUS ErrorStatus;
  /* 0x0010 */ unsigned short ErrorType;
  /* 0x0012 */ union _WHEA_PCIXBUS_ID BusId;
  /* 0x0014 */ unsigned long Reserved;
  /* 0x0018 */ unsigned __int64 BusAddress;
  /* 0x0020 */ unsigned __int64 BusData;
  /* 0x0028 */ union _WHEA_PCIXBUS_COMMAND BusCommand;
  /* 0x0030 */ unsigned __int64 RequesterId;
  /* 0x0038 */ unsigned __int64 CompleterId;
  /* 0x0040 */ unsigned __int64 TargetId;
} WHEA_PCIXBUS_ERROR, *PWHEA_PCIXBUS_ERROR; /* size: 0x0048 */

typedef union _WHEA_PCIXDEVICE_ERROR_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 ErrorStatus : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 IdInfo : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 MemoryNumber : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 IoNumber : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 RegisterDataPairs : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 Reserved : 59; /* bit position: 5 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 ValidBits;
  }; /* size: 0x0008 */
} WHEA_PCIXDEVICE_ERROR_VALIDBITS, *PWHEA_PCIXDEVICE_ERROR_VALIDBITS; /* size: 0x0008 */

typedef struct _WHEA_PCIXDEVICE_ID
{
  /* 0x0000 */ unsigned short VendorId;
  /* 0x0002 */ unsigned short DeviceId;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long ClassCode : 24; /* bit position: 0 */
    /* 0x0004 */ unsigned long FunctionNumber : 8; /* bit position: 24 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned long DeviceNumber : 8; /* bit position: 0 */
    /* 0x0008 */ unsigned long BusNumber : 8; /* bit position: 8 */
    /* 0x0008 */ unsigned long SegmentNumber : 8; /* bit position: 16 */
    /* 0x0008 */ unsigned long Reserved1 : 8; /* bit position: 24 */
  }; /* bitfield */
  /* 0x000c */ unsigned long Reserved2;
} WHEA_PCIXDEVICE_ID, *PWHEA_PCIXDEVICE_ID; /* size: 0x0010 */

struct WHEA_PCIXDEVICE_REGISTER_PAIR
{
  /* 0x0000 */ unsigned __int64 Register;
  /* 0x0008 */ unsigned __int64 Data;
}; /* size: 0x0010 */

typedef struct _WHEA_PCIXDEVICE_ERROR
{
  /* 0x0000 */ union _WHEA_PCIXDEVICE_ERROR_VALIDBITS ValidBits;
  /* 0x0008 */ union _WHEA_ERROR_STATUS ErrorStatus;
  /* 0x0010 */ struct _WHEA_PCIXDEVICE_ID IdInfo;
  /* 0x0020 */ unsigned long MemoryNumber;
  /* 0x0024 */ unsigned long IoNumber;
  /* 0x0028 */ struct WHEA_PCIXDEVICE_REGISTER_PAIR RegisterDataPairs[4];
} WHEA_PCIXDEVICE_ERROR, *PWHEA_PCIXDEVICE_ERROR; /* size: 0x0068 */

typedef struct _WAIT_CONTEXT_BLOCK
{
  /* 0x0000 */ struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry;
  /* 0x0018 */ void* DeviceRoutine /* function */;
  /* 0x0020 */ void* DeviceContext;
  /* 0x0028 */ unsigned long NumberOfMapRegisters;
  /* 0x002c */ long Padding_9;
  /* 0x0030 */ void* DeviceObject;
  /* 0x0038 */ void* CurrentIrp;
  /* 0x0040 */ struct _KDPC* BufferChainingDpc;
} WAIT_CONTEXT_BLOCK, *PWAIT_CONTEXT_BLOCK; /* size: 0x0048 */

typedef struct _KDEVICE_QUEUE
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ long Padding_10;
  /* 0x0008 */ struct _LIST_ENTRY DeviceListHead;
  /* 0x0018 */ unsigned __int64 Lock;
  union
  {
    /* 0x0020 */ unsigned char Busy;
    struct /* bitfield */
    {
      /* 0x0020 */ __int64 Reserved : 8; /* bit position: 0 */
      /* 0x0020 */ __int64 Hint : 56; /* bit position: 8 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} KDEVICE_QUEUE, *PKDEVICE_QUEUE; /* size: 0x0028 */

typedef struct _KDPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Importance;
  /* 0x0002 */ volatile unsigned short Number;
  /* 0x0004 */ long Padding_11;
  /* 0x0008 */ struct _LIST_ENTRY DpcListEntry;
  /* 0x0018 */ void* DeferredRoutine /* function */;
  /* 0x0020 */ void* DeferredContext;
  /* 0x0028 */ void* SystemArgument1;
  /* 0x0030 */ void* SystemArgument2;
  /* 0x0038 */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0040 */

typedef struct _DEVICE_OBJECT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ long ReferenceCount;
  /* 0x0008 */ struct _DRIVER_OBJECT* DriverObject;
  /* 0x0010 */ struct _DEVICE_OBJECT* NextDevice;
  /* 0x0018 */ struct _DEVICE_OBJECT* AttachedDevice;
  /* 0x0020 */ struct _IRP* CurrentIrp;
  /* 0x0028 */ struct _IO_TIMER* Timer;
  /* 0x0030 */ unsigned long Flags;
  /* 0x0034 */ unsigned long Characteristics;
  /* 0x0038 */ struct _VPB* Vpb;
  /* 0x0040 */ void* DeviceExtension;
  /* 0x0048 */ unsigned long DeviceType;
  /* 0x004c */ char StackSize;
  /* 0x004d */ char Padding_12[3];
  union
  {
    union
    {
      /* 0x0050 */ struct _LIST_ENTRY ListEntry;
      /* 0x0050 */ struct _WAIT_CONTEXT_BLOCK Wcb;
    }; /* size: 0x0048 */
  } /* size: 0x0048 */ Queue;
  /* 0x0098 */ unsigned long AlignmentRequirement;
  /* 0x009c */ long Padding_13;
  /* 0x00a0 */ struct _KDEVICE_QUEUE DeviceQueue;
  /* 0x00c8 */ struct _KDPC Dpc;
  /* 0x0108 */ unsigned long ActiveThreadCount;
  /* 0x010c */ long Padding_14;
  /* 0x0110 */ void* SecurityDescriptor;
  /* 0x0118 */ struct _KEVENT DeviceLock;
  /* 0x0130 */ unsigned short SectorSize;
  /* 0x0132 */ unsigned short Spare1;
  /* 0x0134 */ long Padding_15;
  /* 0x0138 */ struct _DEVOBJ_EXTENSION* DeviceObjectExtension;
  /* 0x0140 */ void* Reserved;
  /* 0x0148 */ long __PADDING__[2];
} DEVICE_OBJECT, *PDEVICE_OBJECT; /* size: 0x0150 */

typedef struct _DRIVER_OBJECT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ long Padding_16;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ long Padding_17;
  /* 0x0018 */ void* DriverStart;
  /* 0x0020 */ unsigned long DriverSize;
  /* 0x0024 */ long Padding_18;
  /* 0x0028 */ void* DriverSection;
  /* 0x0030 */ struct _DRIVER_EXTENSION* DriverExtension;
  /* 0x0038 */ struct _UNICODE_STRING DriverName;
  /* 0x0048 */ struct _UNICODE_STRING* HardwareDatabase;
  /* 0x0050 */ struct _FAST_IO_DISPATCH* FastIoDispatch;
  /* 0x0058 */ void* DriverInit /* function */;
  /* 0x0060 */ void* DriverStartIo /* function */;
  /* 0x0068 */ void* DriverUnload /* function */;
  /* 0x0070 */ void* MajorFunction[28] /* function */;
} DRIVER_OBJECT, *PDRIVER_OBJECT; /* size: 0x0150 */

typedef struct _DRIVER_EXTENSION
{
  /* 0x0000 */ struct _DRIVER_OBJECT* DriverObject;
  /* 0x0008 */ void* AddDevice /* function */;
  /* 0x0010 */ unsigned long Count;
  /* 0x0014 */ long Padding_19;
  /* 0x0018 */ struct _UNICODE_STRING ServiceKeyName;
} DRIVER_EXTENSION, *PDRIVER_EXTENSION; /* size: 0x0028 */

typedef union _WHEA_ERROR_PACKET_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long PreviousError : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long CpuValid : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long HypervisorError : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long Simulated : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Reserved : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_ERROR_PACKET_FLAGS, *PWHEA_ERROR_PACKET_FLAGS; /* size: 0x0004 */

typedef struct _WHEA_ERROR_PACKET
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ union _WHEA_ERROR_PACKET_FLAGS Flags;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ unsigned long RawDataLength;
  /* 0x0010 */ unsigned __int64 Reserved1;
  /* 0x0018 */ unsigned __int64 Context;
  /* 0x0020 */ enum _WHEA_ERROR_TYPE ErrorType;
  /* 0x0024 */ enum _WHEA_ERROR_SEVERITY ErrorSeverity;
  /* 0x0028 */ unsigned long ErrorSourceId;
  /* 0x002c */ enum _WHEA_ERROR_SOURCE_TYPE ErrorSourceType;
  /* 0x0030 */ unsigned long Reserved2;
  /* 0x0034 */ unsigned long Version;
  /* 0x0038 */ unsigned __int64 Cpu;
  union
  {
    union
    {
      /* 0x0040 */ struct _WHEA_GENERIC_PROCESSOR_ERROR ProcessorError;
      /* 0x0040 */ struct _WHEA_MEMORY_ERROR MemoryError;
      /* 0x0040 */ struct _WHEA_NMI_ERROR NmiError;
      /* 0x0040 */ struct _WHEA_PCIEXPRESS_ERROR PciExpressError;
      /* 0x0040 */ struct _WHEA_PCIXBUS_ERROR PciXBusError;
      /* 0x0040 */ struct _WHEA_PCIXDEVICE_ERROR PciXDeviceError;
    }; /* size: 0x00d0 */
  } /* size: 0x00d0 */ u;
  /* 0x0110 */ enum _WHEA_RAW_DATA_FORMAT RawDataFormat;
  /* 0x0114 */ unsigned long RawDataOffset;
  /* 0x0118 */ unsigned char RawData[1];
} WHEA_ERROR_PACKET, *PWHEA_ERROR_PACKET; /* size: 0x0119 */

typedef struct _FAST_IO_DISPATCH
{
  /* 0x0000 */ unsigned long SizeOfFastIoDispatch;
  /* 0x0004 */ long Padding_20;
  /* 0x0008 */ void* FastIoCheckIfPossible /* function */;
  /* 0x0010 */ void* FastIoRead /* function */;
  /* 0x0018 */ void* FastIoWrite /* function */;
  /* 0x0020 */ void* FastIoQueryBasicInfo /* function */;
  /* 0x0028 */ void* FastIoQueryStandardInfo /* function */;
  /* 0x0030 */ void* FastIoLock /* function */;
  /* 0x0038 */ void* FastIoUnlockSingle /* function */;
  /* 0x0040 */ void* FastIoUnlockAll /* function */;
  /* 0x0048 */ void* FastIoUnlockAllByKey /* function */;
  /* 0x0050 */ void* FastIoDeviceControl /* function */;
  /* 0x0058 */ void* AcquireFileForNtCreateSection /* function */;
  /* 0x0060 */ void* ReleaseFileForNtCreateSection /* function */;
  /* 0x0068 */ void* FastIoDetachDevice /* function */;
  /* 0x0070 */ void* FastIoQueryNetworkOpenInfo /* function */;
  /* 0x0078 */ void* AcquireForModWrite /* function */;
  /* 0x0080 */ void* MdlRead /* function */;
  /* 0x0088 */ void* MdlReadComplete /* function */;
  /* 0x0090 */ void* PrepareMdlWrite /* function */;
  /* 0x0098 */ void* MdlWriteComplete /* function */;
  /* 0x00a0 */ void* FastIoReadCompressed /* function */;
  /* 0x00a8 */ void* FastIoWriteCompressed /* function */;
  /* 0x00b0 */ void* MdlReadCompleteCompressed /* function */;
  /* 0x00b8 */ void* MdlWriteCompleteCompressed /* function */;
  /* 0x00c0 */ void* FastIoQueryOpen /* function */;
  /* 0x00c8 */ void* ReleaseForModWrite /* function */;
  /* 0x00d0 */ void* AcquireForCcFlush /* function */;
  /* 0x00d8 */ void* ReleaseForCcFlush /* function */;
} FAST_IO_DISPATCH, *PFAST_IO_DISPATCH; /* size: 0x00e0 */

typedef struct _FILE_OBJECT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ long Padding_21;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0010 */ struct _VPB* Vpb;
  /* 0x0018 */ void* FsContext;
  /* 0x0020 */ void* FsContext2;
  /* 0x0028 */ struct _SECTION_OBJECT_POINTERS* SectionObjectPointer;
  /* 0x0030 */ void* PrivateCacheMap;
  /* 0x0038 */ long FinalStatus;
  /* 0x003c */ long Padding_22;
  /* 0x0040 */ struct _FILE_OBJECT* RelatedFileObject;
  /* 0x0048 */ unsigned char LockOperation;
  /* 0x0049 */ unsigned char DeletePending;
  /* 0x004a */ unsigned char ReadAccess;
  /* 0x004b */ unsigned char WriteAccess;
  /* 0x004c */ unsigned char DeleteAccess;
  /* 0x004d */ unsigned char SharedRead;
  /* 0x004e */ unsigned char SharedWrite;
  /* 0x004f */ unsigned char SharedDelete;
  /* 0x0050 */ unsigned long Flags;
  /* 0x0054 */ long Padding_23;
  /* 0x0058 */ struct _UNICODE_STRING FileName;
  /* 0x0068 */ union _LARGE_INTEGER CurrentByteOffset;
  /* 0x0070 */ unsigned long Waiters;
  /* 0x0074 */ unsigned long Busy;
  /* 0x0078 */ void* LastLock;
  /* 0x0080 */ struct _KEVENT Lock;
  /* 0x0098 */ struct _KEVENT Event;
  /* 0x00b0 */ struct _IO_COMPLETION_CONTEXT* CompletionContext;
  /* 0x00b8 */ unsigned __int64 IrpListLock;
  /* 0x00c0 */ struct _LIST_ENTRY IrpList;
  /* 0x00d0 */ void* FileObjectExtension;
} FILE_OBJECT, *PFILE_OBJECT; /* size: 0x00d8 */

typedef struct _VPB
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ unsigned short Flags;
  /* 0x0006 */ unsigned short VolumeLabelLength;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0010 */ struct _DEVICE_OBJECT* RealDevice;
  /* 0x0018 */ unsigned long SerialNumber;
  /* 0x001c */ unsigned long ReferenceCount;
  /* 0x0020 */ wchar_t VolumeLabel[32];
} VPB, *PVPB; /* size: 0x0060 */

typedef struct _SECTION_OBJECT_POINTERS
{
  /* 0x0000 */ void* DataSectionObject;
  /* 0x0008 */ void* SharedCacheMap;
  /* 0x0010 */ void* ImageSectionObject;
} SECTION_OBJECT_POINTERS, *PSECTION_OBJECT_POINTERS; /* size: 0x0018 */

typedef struct _IO_COMPLETION_CONTEXT
{
  /* 0x0000 */ void* Port;
  /* 0x0008 */ void* Key;
} IO_COMPLETION_CONTEXT, *PIO_COMPLETION_CONTEXT; /* size: 0x0010 */

typedef struct _FILE_BASIC_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER CreationTime;
  /* 0x0008 */ union _LARGE_INTEGER LastAccessTime;
  /* 0x0010 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x0018 */ union _LARGE_INTEGER ChangeTime;
  /* 0x0020 */ unsigned long FileAttributes;
  /* 0x0024 */ long __PADDING__[1];
} FILE_BASIC_INFORMATION, *PFILE_BASIC_INFORMATION; /* size: 0x0028 */

typedef struct _FILE_STANDARD_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER AllocationSize;
  /* 0x0008 */ union _LARGE_INTEGER EndOfFile;
  /* 0x0010 */ unsigned long NumberOfLinks;
  /* 0x0014 */ unsigned char DeletePending;
  /* 0x0015 */ unsigned char Directory;
  /* 0x0016 */ char __PADDING__[2];
} FILE_STANDARD_INFORMATION, *PFILE_STANDARD_INFORMATION; /* size: 0x0018 */

struct _KPROCESS;

typedef struct _DEVOBJ_EXTENSION
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ long Padding_24;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
} DEVOBJ_EXTENSION, *PDEVOBJ_EXTENSION; /* size: 0x0010 */

typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

typedef struct _LUID_AND_ATTRIBUTES
{
  /* 0x0000 */ struct _LUID Luid;
  /* 0x0008 */ unsigned long Attributes;
} LUID_AND_ATTRIBUTES, *PLUID_AND_ATTRIBUTES; /* size: 0x000c */

typedef struct _INITIAL_PRIVILEGE_SET
{
  /* 0x0000 */ unsigned long PrivilegeCount;
  /* 0x0004 */ unsigned long Control;
  /* 0x0008 */ struct _LUID_AND_ATTRIBUTES Privilege[3];
} INITIAL_PRIVILEGE_SET, *PINITIAL_PRIVILEGE_SET; /* size: 0x002c */

typedef struct _PRIVILEGE_SET
{
  /* 0x0000 */ unsigned long PrivilegeCount;
  /* 0x0004 */ unsigned long Control;
  /* 0x0008 */ struct _LUID_AND_ATTRIBUTES Privilege[1];
} PRIVILEGE_SET, *PPRIVILEGE_SET; /* size: 0x0014 */

typedef struct _IOAPIC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char IOAPICID;
  /* 0x0003 */ unsigned char Reserved;
  /* 0x0004 */ unsigned long IOAPICAddress;
  /* 0x0008 */ unsigned long SystemVectorBase;
} IOAPIC, *PIOAPIC; /* size: 0x000c */

struct _COMPRESSED_DATA_INFO;

typedef struct _FILE_NETWORK_OPEN_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER CreationTime;
  /* 0x0008 */ union _LARGE_INTEGER LastAccessTime;
  /* 0x0010 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x0018 */ union _LARGE_INTEGER ChangeTime;
  /* 0x0020 */ union _LARGE_INTEGER AllocationSize;
  /* 0x0028 */ union _LARGE_INTEGER EndOfFile;
  /* 0x0030 */ unsigned long FileAttributes;
  /* 0x0034 */ long __PADDING__[1];
} FILE_NETWORK_OPEN_INFORMATION, *PFILE_NETWORK_OPEN_INFORMATION; /* size: 0x0038 */

typedef struct _OWNER_ENTRY
{
  /* 0x0000 */ unsigned __int64 OwnerThread;
  union
  {
    /* 0x0008 */ long OwnerCount;
    /* 0x0008 */ unsigned long TableSize;
  }; /* size: 0x0004 */
  /* 0x000c */ long __PADDING__[1];
} OWNER_ENTRY, *POWNER_ENTRY; /* size: 0x0010 */

typedef struct _ERESOURCE
{
  /* 0x0000 */ struct _LIST_ENTRY SystemResourcesList;
  /* 0x0010 */ struct _OWNER_ENTRY* OwnerTable;
  /* 0x0018 */ short ActiveCount;
  /* 0x001a */ unsigned short Flag;
  /* 0x001c */ long Padding_25;
  /* 0x0020 */ struct _KSEMAPHORE* SharedWaiters;
  /* 0x0028 */ struct _KEVENT* ExclusiveWaiters;
  /* 0x0030 */ struct _OWNER_ENTRY OwnerEntry;
  /* 0x0040 */ unsigned long ActiveEntries;
  /* 0x0044 */ unsigned long ContentionCount;
  /* 0x0048 */ unsigned long NumberOfSharedWaiters;
  /* 0x004c */ unsigned long NumberOfExclusiveWaiters;
  /* 0x0050 */ void* Reserved2;
  union
  {
    /* 0x0058 */ void* Address;
    /* 0x0058 */ unsigned __int64 CreatorBackTraceIndex;
  }; /* size: 0x0008 */
  /* 0x0060 */ unsigned __int64 SpinLock;
} ERESOURCE, *PERESOURCE; /* size: 0x0068 */

typedef struct _KSEMAPHORE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ long Limit;
  /* 0x001c */ long __PADDING__[1];
} KSEMAPHORE, *PKSEMAPHORE; /* size: 0x0020 */

struct _SCSI_REQUEST_BLOCK;

typedef struct _INTERFACE
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  /* 0x0004 */ long Padding_26;
  /* 0x0008 */ void* Context;
  /* 0x0010 */ void* InterfaceReference /* function */;
  /* 0x0018 */ void* InterfaceDereference /* function */;
} INTERFACE, *PINTERFACE; /* size: 0x0020 */

struct _IO_TIMER;

struct _ETHREAD;

typedef struct _IO_STACK_LOCATION
{
  /* 0x0000 */ unsigned char MajorFunction;
  /* 0x0001 */ unsigned char MinorFunction;
  /* 0x0002 */ unsigned char Flags;
  /* 0x0003 */ unsigned char Control;
  /* 0x0004 */ long Padding_27;
  union
  {
    union
    {
      struct
      {
        /* 0x0008 */ struct _IO_SECURITY_CONTEXT* SecurityContext;
        /* 0x0010 */ unsigned long Options;
        /* 0x000c */ long Padding_28;
        /* 0x0018 */ unsigned short FileAttributes;
        /* 0x001a */ unsigned short ShareAccess;
        /* 0x0014 */ long Padding_29;
        /* 0x0020 */ unsigned long EaLength;
        /* 0x0024 */ long __PADDING__[1];
      } /* size: 0x0020 */ Create;
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0004 */ long Padding_30;
        /* 0x0010 */ unsigned long Key;
        /* 0x000c */ long Padding_31;
        /* 0x0018 */ union _LARGE_INTEGER ByteOffset;
      } /* size: 0x0018 */ Read;
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0004 */ long Padding_32;
        /* 0x0010 */ unsigned long Key;
        /* 0x000c */ long Padding_33;
        /* 0x0018 */ union _LARGE_INTEGER ByteOffset;
      } /* size: 0x0018 */ Write;
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0004 */ long Padding_34;
        /* 0x0010 */ struct _UNICODE_STRING* FileName;
        /* 0x0018 */ enum _FILE_INFORMATION_CLASS FileInformationClass;
        /* 0x0014 */ long Padding_35;
        /* 0x0020 */ unsigned long FileIndex;
        /* 0x0024 */ long __PADDING__[1];
      } /* size: 0x0020 */ QueryDirectory;
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0004 */ long Padding_36;
        /* 0x0010 */ unsigned long CompletionFilter;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0010 */ NotifyDirectory;
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0004 */ long Padding_37;
        /* 0x0010 */ enum _FILE_INFORMATION_CLASS FileInformationClass;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0010 */ QueryFile;
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0004 */ long Padding_38;
        /* 0x0010 */ enum _FILE_INFORMATION_CLASS FileInformationClass;
        /* 0x000c */ long Padding_39;
        /* 0x0018 */ struct _FILE_OBJECT* FileObject;
        union
        {
          struct
          {
            /* 0x0020 */ unsigned char ReplaceIfExists;
            /* 0x0021 */ unsigned char AdvanceOnly;
          }; /* size: 0x0002 */
          /* 0x0020 */ unsigned long ClusterCount;
          /* 0x0020 */ void* DeleteHandle;
        }; /* size: 0x0008 */
      } /* size: 0x0020 */ SetFile;
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0004 */ long Padding_40;
        /* 0x0010 */ void* EaList;
        /* 0x0018 */ unsigned long EaListLength;
        /* 0x0014 */ long Padding_41;
        /* 0x0020 */ unsigned long EaIndex;
        /* 0x0024 */ long __PADDING__[1];
      } /* size: 0x0020 */ QueryEa;
      struct
      {
        /* 0x0008 */ unsigned long Length;
      } /* size: 0x0004 */ SetEa;
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0004 */ long Padding_42;
        /* 0x0010 */ enum _FSINFOCLASS FsInformationClass;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0010 */ QueryVolume;
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0004 */ long Padding_43;
        /* 0x0010 */ enum _FSINFOCLASS FsInformationClass;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0010 */ SetVolume;
      struct
      {
        /* 0x0008 */ unsigned long OutputBufferLength;
        /* 0x0004 */ long Padding_44;
        /* 0x0010 */ unsigned long InputBufferLength;
        /* 0x000c */ long Padding_45;
        /* 0x0018 */ unsigned long FsControlCode;
        /* 0x0014 */ long Padding_46;
        /* 0x0020 */ void* Type3InputBuffer;
      } /* size: 0x0020 */ FileSystemControl;
      struct
      {
        /* 0x0008 */ union _LARGE_INTEGER* Length;
        /* 0x0010 */ unsigned long Key;
        /* 0x000c */ long Padding_47;
        /* 0x0018 */ union _LARGE_INTEGER ByteOffset;
      } /* size: 0x0018 */ LockControl;
      struct
      {
        /* 0x0008 */ unsigned long OutputBufferLength;
        /* 0x0004 */ long Padding_48;
        /* 0x0010 */ unsigned long InputBufferLength;
        /* 0x000c */ long Padding_49;
        /* 0x0018 */ unsigned long IoControlCode;
        /* 0x0014 */ long Padding_50;
        /* 0x0020 */ void* Type3InputBuffer;
      } /* size: 0x0020 */ DeviceIoControl;
      struct
      {
        /* 0x0008 */ unsigned long SecurityInformation;
        /* 0x0004 */ long Padding_51;
        /* 0x0010 */ unsigned long Length;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0010 */ QuerySecurity;
      struct
      {
        /* 0x0008 */ unsigned long SecurityInformation;
        /* 0x0004 */ long Padding_52;
        /* 0x0010 */ void* SecurityDescriptor;
      } /* size: 0x0010 */ SetSecurity;
      struct
      {
        /* 0x0008 */ struct _VPB* Vpb;
        /* 0x0010 */ struct _DEVICE_OBJECT* DeviceObject;
      } /* size: 0x0010 */ MountVolume;
      struct
      {
        /* 0x0008 */ struct _VPB* Vpb;
        /* 0x0010 */ struct _DEVICE_OBJECT* DeviceObject;
      } /* size: 0x0010 */ VerifyVolume;
      struct
      {
        /* 0x0008 */ struct _SCSI_REQUEST_BLOCK* Srb;
      } /* size: 0x0008 */ Scsi;
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0004 */ long Padding_53;
        /* 0x0010 */ void* StartSid;
        /* 0x0018 */ struct _FILE_GET_QUOTA_INFORMATION* SidList;
        /* 0x0020 */ unsigned long SidListLength;
        /* 0x0024 */ long __PADDING__[1];
      } /* size: 0x0020 */ QueryQuota;
      struct
      {
        /* 0x0008 */ unsigned long Length;
      } /* size: 0x0004 */ SetQuota;
      struct
      {
        /* 0x0008 */ enum _DEVICE_RELATION_TYPE Type;
      } /* size: 0x0004 */ QueryDeviceRelations;
      struct
      {
        /* 0x0008 */ const struct _GUID* InterfaceType;
        /* 0x0010 */ unsigned short Size;
        /* 0x0012 */ unsigned short Version;
        /* 0x000c */ long Padding_54;
        /* 0x0018 */ struct _INTERFACE* Interface;
        /* 0x0020 */ void* InterfaceSpecificData;
      } /* size: 0x0020 */ QueryInterface;
      struct
      {
        /* 0x0008 */ struct _DEVICE_CAPABILITIES* Capabilities;
      } /* size: 0x0008 */ DeviceCapabilities;
      struct
      {
        /* 0x0008 */ struct _IO_RESOURCE_REQUIREMENTS_LIST* IoResourceRequirementList;
      } /* size: 0x0008 */ FilterResourceRequirements;
      struct
      {
        /* 0x0008 */ unsigned long WhichSpace;
        /* 0x0004 */ long Padding_55;
        /* 0x0010 */ void* Buffer;
        /* 0x0018 */ unsigned long Offset;
        /* 0x0014 */ long Padding_56;
        /* 0x0020 */ unsigned long Length;
        /* 0x0024 */ long __PADDING__[1];
      } /* size: 0x0020 */ ReadWriteConfig;
      struct
      {
        /* 0x0008 */ unsigned char Lock;
      } /* size: 0x0001 */ SetLock;
      struct
      {
        /* 0x0008 */ enum BUS_QUERY_ID_TYPE IdType;
      } /* size: 0x0004 */ QueryId;
      struct
      {
        /* 0x0008 */ enum DEVICE_TEXT_TYPE DeviceTextType;
        /* 0x0004 */ long Padding_57;
        /* 0x0010 */ unsigned long LocaleId;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0010 */ QueryDeviceText;
      struct
      {
        /* 0x0008 */ unsigned char InPath;
        /* 0x0009 */ unsigned char Reserved[3];
        /* 0x0004 */ long Padding_58;
        /* 0x0010 */ enum _DEVICE_USAGE_NOTIFICATION_TYPE Type;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0010 */ UsageNotification;
      struct
      {
        /* 0x0008 */ enum _SYSTEM_POWER_STATE PowerState;
      } /* size: 0x0004 */ WaitWake;
      struct
      {
        /* 0x0008 */ struct _POWER_SEQUENCE* PowerSequence;
      } /* size: 0x0008 */ PowerSequence;
      struct
      {
        union
        {
          /* 0x0008 */ unsigned long SystemContext;
          /* 0x0008 */ struct _SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext;
        }; /* size: 0x0004 */
        /* 0x0004 */ long Padding_59;
        /* 0x0010 */ enum _POWER_STATE_TYPE Type;
        /* 0x000c */ long Padding_60;
        /* 0x0018 */ union _POWER_STATE State;
        /* 0x0014 */ long Padding_61;
        /* 0x0020 */ enum POWER_ACTION ShutdownType;
        /* 0x0024 */ long __PADDING__[1];
      } /* size: 0x0020 */ Power;
      struct
      {
        /* 0x0008 */ struct _CM_RESOURCE_LIST* AllocatedResources;
        /* 0x0010 */ struct _CM_RESOURCE_LIST* AllocatedResourcesTranslated;
      } /* size: 0x0010 */ StartDevice;
      struct
      {
        /* 0x0008 */ unsigned __int64 ProviderId;
        /* 0x0010 */ void* DataPath;
        /* 0x0018 */ unsigned long BufferSize;
        /* 0x0014 */ long Padding_62;
        /* 0x0020 */ void* Buffer;
      } /* size: 0x0020 */ WMI;
      struct
      {
        /* 0x0008 */ void* Argument1;
        /* 0x0010 */ void* Argument2;
        /* 0x0018 */ void* Argument3;
        /* 0x0020 */ void* Argument4;
      } /* size: 0x0020 */ Others;
    }; /* size: 0x0020 */
  } /* size: 0x0020 */ Parameters;
  /* 0x0028 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0030 */ struct _FILE_OBJECT* FileObject;
  /* 0x0038 */ void* CompletionRoutine /* function */;
  /* 0x0040 */ void* Context;
} IO_STACK_LOCATION, *PIO_STACK_LOCATION; /* size: 0x0048 */

typedef struct _IO_SECURITY_CONTEXT
{
  /* 0x0000 */ struct _SECURITY_QUALITY_OF_SERVICE* SecurityQos;
  /* 0x0008 */ struct _ACCESS_STATE* AccessState;
  /* 0x0010 */ unsigned long DesiredAccess;
  /* 0x0014 */ unsigned long FullCreateOptions;
} IO_SECURITY_CONTEXT, *PIO_SECURITY_CONTEXT; /* size: 0x0018 */

typedef struct _SECURITY_QUALITY_OF_SERVICE
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  /* 0x0008 */ unsigned char ContextTrackingMode;
  /* 0x0009 */ unsigned char EffectiveOnly;
  /* 0x000a */ char __PADDING__[2];
} SECURITY_QUALITY_OF_SERVICE, *PSECURITY_QUALITY_OF_SERVICE; /* size: 0x000c */

typedef struct _SECURITY_SUBJECT_CONTEXT
{
  /* 0x0000 */ void* ClientToken;
  /* 0x0008 */ enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  /* 0x000c */ long Padding_63;
  /* 0x0010 */ void* PrimaryToken;
  /* 0x0018 */ void* ProcessAuditId;
} SECURITY_SUBJECT_CONTEXT, *PSECURITY_SUBJECT_CONTEXT; /* size: 0x0020 */

typedef struct _ACCESS_STATE
{
  /* 0x0000 */ struct _LUID OperationID;
  /* 0x0008 */ unsigned char SecurityEvaluated;
  /* 0x0009 */ unsigned char GenerateAudit;
  /* 0x000a */ unsigned char GenerateOnClose;
  /* 0x000b */ unsigned char PrivilegesAllocated;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ unsigned long RemainingDesiredAccess;
  /* 0x0014 */ unsigned long PreviouslyGrantedAccess;
  /* 0x0018 */ unsigned long OriginalDesiredAccess;
  /* 0x001c */ long Padding_64;
  /* 0x0020 */ struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext;
  /* 0x0040 */ void* SecurityDescriptor;
  /* 0x0048 */ void* AuxData;
  union
  {
    union
    {
      /* 0x0050 */ struct _INITIAL_PRIVILEGE_SET InitialPrivilegeSet;
      /* 0x0050 */ struct _PRIVILEGE_SET PrivilegeSet;
    }; /* size: 0x002c */
  } /* size: 0x002c */ Privileges;
  /* 0x007c */ unsigned char AuditPrivileges;
  /* 0x007d */ char Padding_65[3];
  /* 0x0080 */ struct _UNICODE_STRING ObjectName;
  /* 0x0090 */ struct _UNICODE_STRING ObjectTypeName;
} ACCESS_STATE, *PACCESS_STATE; /* size: 0x00a0 */

struct _FILE_GET_QUOTA_INFORMATION;

typedef struct _DEVICE_CAPABILITIES
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long DeviceD1 : 1; /* bit position: 0 */
    /* 0x0004 */ unsigned long DeviceD2 : 1; /* bit position: 1 */
    /* 0x0004 */ unsigned long LockSupported : 1; /* bit position: 2 */
    /* 0x0004 */ unsigned long EjectSupported : 1; /* bit position: 3 */
    /* 0x0004 */ unsigned long Removable : 1; /* bit position: 4 */
    /* 0x0004 */ unsigned long DockDevice : 1; /* bit position: 5 */
    /* 0x0004 */ unsigned long UniqueID : 1; /* bit position: 6 */
    /* 0x0004 */ unsigned long SilentInstall : 1; /* bit position: 7 */
    /* 0x0004 */ unsigned long RawDeviceOK : 1; /* bit position: 8 */
    /* 0x0004 */ unsigned long SurpriseRemovalOK : 1; /* bit position: 9 */
    /* 0x0004 */ unsigned long WakeFromD0 : 1; /* bit position: 10 */
    /* 0x0004 */ unsigned long WakeFromD1 : 1; /* bit position: 11 */
    /* 0x0004 */ unsigned long WakeFromD2 : 1; /* bit position: 12 */
    /* 0x0004 */ unsigned long WakeFromD3 : 1; /* bit position: 13 */
    /* 0x0004 */ unsigned long HardwareDisabled : 1; /* bit position: 14 */
    /* 0x0004 */ unsigned long NonDynamic : 1; /* bit position: 15 */
    /* 0x0004 */ unsigned long WarmEjectSupported : 1; /* bit position: 16 */
    /* 0x0004 */ unsigned long NoDisplayInUI : 1; /* bit position: 17 */
    /* 0x0004 */ unsigned long Reserved : 14; /* bit position: 18 */
  }; /* bitfield */
  /* 0x0008 */ unsigned long Address;
  /* 0x000c */ unsigned long UINumber;
  /* 0x0010 */ enum _DEVICE_POWER_STATE DeviceState[7];
  /* 0x002c */ enum _SYSTEM_POWER_STATE SystemWake;
  /* 0x0030 */ enum _DEVICE_POWER_STATE DeviceWake;
  /* 0x0034 */ unsigned long D1Latency;
  /* 0x0038 */ unsigned long D2Latency;
  /* 0x003c */ unsigned long D3Latency;
} DEVICE_CAPABILITIES, *PDEVICE_CAPABILITIES; /* size: 0x0040 */

typedef struct _DESCRIPTION_HEADER
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long Length;
  /* 0x0008 */ unsigned char Revision;
  /* 0x0009 */ unsigned char Checksum;
  /* 0x000a */ char OEMID[6];
  /* 0x0010 */ char OEMTableID[8];
  /* 0x0018 */ unsigned long OEMRevision;
  /* 0x001c */ char CreatorID[4];
  /* 0x0020 */ unsigned long CreatorRev;
} DESCRIPTION_HEADER, *PDESCRIPTION_HEADER; /* size: 0x0024 */

typedef struct _GEN_ADDR
{
  /* 0x0000 */ unsigned char AddressSpaceID;
  /* 0x0001 */ unsigned char BitWidth;
  /* 0x0002 */ unsigned char BitOffset;
  /* 0x0003 */ unsigned char AccessSize;
  /* 0x0004 */ union _LARGE_INTEGER Address;
} GEN_ADDR, *PGEN_ADDR; /* size: 0x000c */

typedef struct _FADT
{
  /* 0x0000 */ struct _DESCRIPTION_HEADER Header;
  /* 0x0024 */ unsigned long facs;
  /* 0x0028 */ unsigned long dsdt;
  /* 0x002c */ unsigned char int_model;
  /* 0x002d */ unsigned char pm_profile;
  /* 0x002e */ unsigned short sci_int_vector;
  /* 0x0030 */ unsigned long smi_cmd_io_port;
  /* 0x0034 */ unsigned char acpi_on_value;
  /* 0x0035 */ unsigned char acpi_off_value;
  /* 0x0036 */ unsigned char s4bios_req;
  /* 0x0037 */ unsigned char pstate_control;
  /* 0x0038 */ unsigned long pm1a_evt_blk_io_port;
  /* 0x003c */ unsigned long pm1b_evt_blk_io_port;
  /* 0x0040 */ unsigned long pm1a_ctrl_blk_io_port;
  /* 0x0044 */ unsigned long pm1b_ctrl_blk_io_port;
  /* 0x0048 */ unsigned long pm2_ctrl_blk_io_port;
  /* 0x004c */ unsigned long pm_tmr_blk_io_port;
  /* 0x0050 */ unsigned long gp0_blk_io_port;
  /* 0x0054 */ unsigned long gp1_blk_io_port;
  /* 0x0058 */ unsigned char pm1_evt_len;
  /* 0x0059 */ unsigned char pm1_ctrl_len;
  /* 0x005a */ unsigned char pm2_ctrl_len;
  /* 0x005b */ unsigned char pm_tmr_len;
  /* 0x005c */ unsigned char gp0_blk_len;
  /* 0x005d */ unsigned char gp1_blk_len;
  /* 0x005e */ unsigned char gp1_base;
  /* 0x005f */ unsigned char cstate_control;
  /* 0x0060 */ unsigned short lvl2_latency;
  /* 0x0062 */ unsigned short lvl3_latency;
  /* 0x0064 */ unsigned short flush_size;
  /* 0x0066 */ unsigned short flush_stride;
  /* 0x0068 */ unsigned char duty_offset;
  /* 0x0069 */ unsigned char duty_width;
  /* 0x006a */ unsigned char day_alarm_index;
  /* 0x006b */ unsigned char month_alarm_index;
  /* 0x006c */ unsigned char century_alarm_index;
  /* 0x006d */ unsigned short boot_arch;
  /* 0x006f */ unsigned char reserved3[1];
  /* 0x0070 */ unsigned long flags;
  /* 0x0074 */ struct _GEN_ADDR reset_reg;
  /* 0x0080 */ unsigned char reset_val;
  /* 0x0081 */ unsigned char reserved4[3];
  /* 0x0084 */ union _LARGE_INTEGER x_firmware_ctrl;
  /* 0x008c */ union _LARGE_INTEGER x_dsdt;
  /* 0x0094 */ struct _GEN_ADDR x_pm1a_evt_blk;
  /* 0x00a0 */ struct _GEN_ADDR x_pm1b_evt_blk;
  /* 0x00ac */ struct _GEN_ADDR x_pm1a_ctrl_blk;
  /* 0x00b8 */ struct _GEN_ADDR x_pm1b_ctrl_blk;
  /* 0x00c4 */ struct _GEN_ADDR x_pm2_ctrl_blk;
  /* 0x00d0 */ struct _GEN_ADDR x_pm_tmr_blk;
  /* 0x00dc */ struct _GEN_ADDR x_gp0_blk;
  /* 0x00e8 */ struct _GEN_ADDR x_gp1_blk;
} FADT, *PFADT; /* size: 0x00f4 */

typedef struct _MAPIC
{
  /* 0x0000 */ struct _DESCRIPTION_HEADER Header;
  /* 0x0024 */ unsigned long LocalAPICAddress;
  /* 0x0028 */ unsigned long Flags;
  /* 0x002c */ unsigned long APICTables[1];
} MAPIC, *PMAPIC; /* size: 0x0030 */

typedef struct _POWER_SEQUENCE
{
  /* 0x0000 */ unsigned long SequenceD1;
  /* 0x0004 */ unsigned long SequenceD2;
  /* 0x0008 */ unsigned long SequenceD3;
} POWER_SEQUENCE, *PPOWER_SEQUENCE; /* size: 0x000c */

typedef struct _CM_RESOURCE_LIST
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ struct _CM_FULL_RESOURCE_DESCRIPTOR List[1];
} CM_RESOURCE_LIST, *PCM_RESOURCE_LIST; /* size: 0x0028 */

typedef struct _M128A
{
  /* 0x0000 */ unsigned __int64 Low;
  /* 0x0008 */ __int64 High;
} M128A, *PM128A; /* size: 0x0010 */

struct _ECP_LIST;

typedef struct _TXN_PARAMETER_BLOCK
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short TxFsContext;
  /* 0x0004 */ long Padding_66;
  /* 0x0008 */ void* TransactionObject;
} TXN_PARAMETER_BLOCK, *PTXN_PARAMETER_BLOCK; /* size: 0x0010 */

typedef struct _KDESCRIPTOR
{
  /* 0x0000 */ unsigned short Pad[3];
  /* 0x0006 */ unsigned short Limit;
  /* 0x0008 */ void* Base;
} KDESCRIPTOR, *PKDESCRIPTOR; /* size: 0x0010 */

typedef struct _KSPECIAL_REGISTERS
{
  /* 0x0000 */ unsigned __int64 Cr0;
  /* 0x0008 */ unsigned __int64 Cr2;
  /* 0x0010 */ unsigned __int64 Cr3;
  /* 0x0018 */ unsigned __int64 Cr4;
  /* 0x0020 */ unsigned __int64 KernelDr0;
  /* 0x0028 */ unsigned __int64 KernelDr1;
  /* 0x0030 */ unsigned __int64 KernelDr2;
  /* 0x0038 */ unsigned __int64 KernelDr3;
  /* 0x0040 */ unsigned __int64 KernelDr6;
  /* 0x0048 */ unsigned __int64 KernelDr7;
  /* 0x0050 */ struct _KDESCRIPTOR Gdtr;
  /* 0x0060 */ struct _KDESCRIPTOR Idtr;
  /* 0x0070 */ unsigned short Tr;
  /* 0x0072 */ unsigned short Ldtr;
  /* 0x0074 */ unsigned long MxCsr;
  /* 0x0078 */ unsigned __int64 DebugControl;
  /* 0x0080 */ unsigned __int64 LastBranchToRip;
  /* 0x0088 */ unsigned __int64 LastBranchFromRip;
  /* 0x0090 */ unsigned __int64 LastExceptionToRip;
  /* 0x0098 */ unsigned __int64 LastExceptionFromRip;
  /* 0x00a0 */ unsigned __int64 Cr8;
  /* 0x00a8 */ unsigned __int64 MsrGsBase;
  /* 0x00b0 */ unsigned __int64 MsrGsSwap;
  /* 0x00b8 */ unsigned __int64 MsrStar;
  /* 0x00c0 */ unsigned __int64 MsrLStar;
  /* 0x00c8 */ unsigned __int64 MsrCStar;
  /* 0x00d0 */ unsigned __int64 MsrSyscallMask;
} KSPECIAL_REGISTERS, *PKSPECIAL_REGISTERS; /* size: 0x00d8 */

typedef struct _XMM_SAVE_AREA32
{
  /* 0x0000 */ unsigned short ControlWord;
  /* 0x0002 */ unsigned short StatusWord;
  /* 0x0004 */ unsigned char TagWord;
  /* 0x0005 */ unsigned char Reserved1;
  /* 0x0006 */ unsigned short ErrorOpcode;
  /* 0x0008 */ unsigned long ErrorOffset;
  /* 0x000c */ unsigned short ErrorSelector;
  /* 0x000e */ unsigned short Reserved2;
  /* 0x0010 */ unsigned long DataOffset;
  /* 0x0014 */ unsigned short DataSelector;
  /* 0x0016 */ unsigned short Reserved3;
  /* 0x0018 */ unsigned long MxCsr;
  /* 0x001c */ unsigned long MxCsr_Mask;
  /* 0x0020 */ struct _M128A FloatRegisters[8];
  /* 0x00a0 */ struct _M128A XmmRegisters[16];
  /* 0x01a0 */ unsigned char Reserved4[96];
} XMM_SAVE_AREA32, *PXMM_SAVE_AREA32; /* size: 0x0200 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned __int64 P1Home;
  /* 0x0008 */ unsigned __int64 P2Home;
  /* 0x0010 */ unsigned __int64 P3Home;
  /* 0x0018 */ unsigned __int64 P4Home;
  /* 0x0020 */ unsigned __int64 P5Home;
  /* 0x0028 */ unsigned __int64 P6Home;
  /* 0x0030 */ unsigned long ContextFlags;
  /* 0x0034 */ unsigned long MxCsr;
  /* 0x0038 */ unsigned short SegCs;
  /* 0x003a */ unsigned short SegDs;
  /* 0x003c */ unsigned short SegEs;
  /* 0x003e */ unsigned short SegFs;
  /* 0x0040 */ unsigned short SegGs;
  /* 0x0042 */ unsigned short SegSs;
  /* 0x0044 */ unsigned long EFlags;
  /* 0x0048 */ unsigned __int64 Dr0;
  /* 0x0050 */ unsigned __int64 Dr1;
  /* 0x0058 */ unsigned __int64 Dr2;
  /* 0x0060 */ unsigned __int64 Dr3;
  /* 0x0068 */ unsigned __int64 Dr6;
  /* 0x0070 */ unsigned __int64 Dr7;
  /* 0x0078 */ unsigned __int64 Rax;
  /* 0x0080 */ unsigned __int64 Rcx;
  /* 0x0088 */ unsigned __int64 Rdx;
  /* 0x0090 */ unsigned __int64 Rbx;
  /* 0x0098 */ unsigned __int64 Rsp;
  /* 0x00a0 */ unsigned __int64 Rbp;
  /* 0x00a8 */ unsigned __int64 Rsi;
  /* 0x00b0 */ unsigned __int64 Rdi;
  /* 0x00b8 */ unsigned __int64 R8;
  /* 0x00c0 */ unsigned __int64 R9;
  /* 0x00c8 */ unsigned __int64 R10;
  /* 0x00d0 */ unsigned __int64 R11;
  /* 0x00d8 */ unsigned __int64 R12;
  /* 0x00e0 */ unsigned __int64 R13;
  /* 0x00e8 */ unsigned __int64 R14;
  /* 0x00f0 */ unsigned __int64 R15;
  /* 0x00f8 */ unsigned __int64 Rip;
  union
  {
    /* 0x0100 */ struct _XMM_SAVE_AREA32 FltSave;
    struct
    {
      /* 0x0100 */ struct _M128A Header[2];
      /* 0x0120 */ struct _M128A Legacy[8];
      /* 0x01a0 */ struct _M128A Xmm0;
      /* 0x01b0 */ struct _M128A Xmm1;
      /* 0x01c0 */ struct _M128A Xmm2;
      /* 0x01d0 */ struct _M128A Xmm3;
      /* 0x01e0 */ struct _M128A Xmm4;
      /* 0x01f0 */ struct _M128A Xmm5;
      /* 0x0200 */ struct _M128A Xmm6;
      /* 0x0210 */ struct _M128A Xmm7;
      /* 0x0220 */ struct _M128A Xmm8;
      /* 0x0230 */ struct _M128A Xmm9;
      /* 0x0240 */ struct _M128A Xmm10;
      /* 0x0250 */ struct _M128A Xmm11;
      /* 0x0260 */ struct _M128A Xmm12;
      /* 0x0270 */ struct _M128A Xmm13;
      /* 0x0280 */ struct _M128A Xmm14;
      /* 0x0290 */ struct _M128A Xmm15;
    }; /* size: 0x01a0 */
  }; /* size: 0x0200 */
  /* 0x0300 */ struct _M128A VectorRegister[26];
  /* 0x04a0 */ unsigned __int64 VectorControl;
  /* 0x04a8 */ unsigned __int64 DebugControl;
  /* 0x04b0 */ unsigned __int64 LastBranchToRip;
  /* 0x04b8 */ unsigned __int64 LastBranchFromRip;
  /* 0x04c0 */ unsigned __int64 LastExceptionToRip;
  /* 0x04c8 */ unsigned __int64 LastExceptionFromRip;
} CONTEXT, *PCONTEXT; /* size: 0x04d0 */

typedef struct _KPROCESSOR_STATE
{
  /* 0x0000 */ struct _KSPECIAL_REGISTERS SpecialRegisters;
  /* 0x00d8 */ long Padding_67[2];
  /* 0x00e0 */ struct _CONTEXT ContextFrame;
} KPROCESSOR_STATE, *PKPROCESSOR_STATE; /* size: 0x05b0 */

typedef struct _KPRCB
{
  /* 0x0000 */ unsigned long MxCsr;
  /* 0x0004 */ unsigned short Number;
  /* 0x0006 */ unsigned char InterruptRequest;
  /* 0x0007 */ unsigned char IdleHalt;
  /* 0x0008 */ struct _KTHREAD* CurrentThread;
  /* 0x0010 */ struct _KTHREAD* NextThread;
  /* 0x0018 */ struct _KTHREAD* IdleThread;
  /* 0x0020 */ unsigned char NestingLevel;
  /* 0x0021 */ unsigned char Group;
  /* 0x0022 */ unsigned char PrcbPad00[6];
  /* 0x0028 */ unsigned __int64 RspBase;
  /* 0x0030 */ unsigned __int64 PrcbLock;
  /* 0x0038 */ unsigned __int64 SetMember;
  /* 0x0040 */ struct _KPROCESSOR_STATE ProcessorState;
  /* 0x05f0 */ char CpuType;
  /* 0x05f1 */ char CpuID;
  union
  {
    /* 0x05f2 */ unsigned short CpuStep;
    struct
    {
      /* 0x05f2 */ unsigned char CpuStepping;
      /* 0x05f3 */ unsigned char CpuModel;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x05f4 */ unsigned long MHz;
  /* 0x05f8 */ unsigned __int64 HalReserved[8];
  /* 0x0638 */ unsigned short MinorVersion;
  /* 0x063a */ unsigned short MajorVersion;
  /* 0x063c */ unsigned char BuildType;
  /* 0x063d */ unsigned char CpuVendor;
  /* 0x063e */ unsigned char CoresPerPhysicalProcessor;
  /* 0x063f */ unsigned char LogicalProcessorsPerCore;
  /* 0x0640 */ unsigned long ApicMask;
  /* 0x0644 */ unsigned long CFlushSize;
  /* 0x0648 */ void* AcpiReserved;
  /* 0x0650 */ unsigned long InitialApicId;
  /* 0x0654 */ unsigned long Stride;
  /* 0x0658 */ unsigned __int64 PrcbPad01[3];
} KPRCB, *PKPRCB; /* size: 0x0670 */

struct _OBJECT_TYPE;

typedef struct _OBJECT_ATTRIBUTES
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ long Padding_68;
  /* 0x0008 */ void* RootDirectory;
  /* 0x0010 */ struct _UNICODE_STRING* ObjectName;
  /* 0x0018 */ unsigned long Attributes;
  /* 0x001c */ long Padding_69;
  /* 0x0020 */ void* SecurityDescriptor;
  /* 0x0028 */ void* SecurityQualityOfService;
} OBJECT_ATTRIBUTES, *POBJECT_ATTRIBUTES; /* size: 0x0030 */

typedef struct _CONTROLLER_OBJECT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ long Padding_70;
  /* 0x0008 */ void* ControllerExtension;
  /* 0x0010 */ struct _KDEVICE_QUEUE DeviceWaitQueue;
  /* 0x0038 */ unsigned long Spare1;
  /* 0x003c */ long Padding_71;
  /* 0x0040 */ union _LARGE_INTEGER Spare2;
} CONTROLLER_OBJECT, *PCONTROLLER_OBJECT; /* size: 0x0048 */

typedef struct _RSDT_32
{
  /* 0x0000 */ struct _DESCRIPTION_HEADER Header;
  /* 0x0024 */ unsigned long Tables[1];
} RSDT_32, *PRSDT_32; /* size: 0x0028 */

typedef struct _LOCAL_NMISOURCE
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char ProcessorID;
  /* 0x0003 */ unsigned short Flags;
  /* 0x0005 */ unsigned char LINTIN;
} LOCAL_NMISOURCE, *PLOCAL_NMISOURCE; /* size: 0x0006 */

typedef struct _IOSAPIC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0004 */ unsigned long SystemVectorBase;
  /* 0x0008 */ unsigned __int64 IOSAPICAddress;
} IOSAPIC, *PIOSAPIC; /* size: 0x0010 */

typedef struct _PROCLOCALSAPIC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char ACPIProcessorID;
  /* 0x0003 */ unsigned char APICID;
  /* 0x0004 */ unsigned char APICEID;
  /* 0x0005 */ unsigned char Reserved[3];
  /* 0x0008 */ unsigned long Flags;
} PROCLOCALSAPIC, *PPROCLOCALSAPIC; /* size: 0x000c */

typedef struct _RSDP
{
  /* 0x0000 */ unsigned __int64 Signature;
  /* 0x0008 */ unsigned char Checksum;
  /* 0x0009 */ unsigned char OEMID[6];
  /* 0x000f */ unsigned char Revision;
  /* 0x0010 */ unsigned long RsdtAddress;
  /* 0x0014 */ unsigned long Length;
  /* 0x0018 */ union _LARGE_INTEGER XsdtAddress;
  /* 0x0020 */ unsigned char XChecksum;
  /* 0x0021 */ unsigned char Reserved[3];
} RSDP, *PRSDP; /* size: 0x0024 */

typedef struct _ISA_VECTOR
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char Bus;
  /* 0x0003 */ unsigned char Source;
  /* 0x0004 */ unsigned long GlobalSystemInterruptVector;
  /* 0x0008 */ unsigned short Flags;
} ISA_VECTOR, *PISA_VECTOR; /* size: 0x000a */

typedef struct _PLATFORM_INTERRUPT
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ unsigned char InterruptType;
  /* 0x0005 */ unsigned char APICID;
  /* 0x0006 */ unsigned char ACPIEID;
  /* 0x0007 */ unsigned char IOSAPICVector;
  /* 0x0008 */ unsigned long GlobalVector;
  /* 0x000c */ unsigned long Reserved;
} PLATFORM_INTERRUPT, *PPLATFORM_INTERRUPT; /* size: 0x0010 */

typedef struct _PROCLOCALAPIC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char ACPIProcessorID;
  /* 0x0003 */ unsigned char APICID;
  /* 0x0004 */ unsigned long Flags;
} PROCLOCALAPIC, *PPROCLOCALAPIC; /* size: 0x0008 */

typedef struct _IO_NMISOURCE
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ unsigned long GlobalSystemInterruptVector;
} IO_NMISOURCE, *PIO_NMISOURCE; /* size: 0x0008 */

typedef struct _FACS
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long Length;
  /* 0x0008 */ unsigned long HardwareSignature;
  /* 0x000c */ unsigned long pFirmwareWakingVector;
  /* 0x0010 */ unsigned long GlobalLock;
  /* 0x0014 */ unsigned long Flags;
  /* 0x0018 */ union _LARGE_INTEGER x_FirmwareWakingVector;
  /* 0x0020 */ unsigned char version;
  /* 0x0021 */ unsigned char Reserved[31];
} FACS, *PFACS; /* size: 0x0040 */

/*
Amd64DisableMonitoring
Amd64EnableMonitoring
Amd64FreeCounter
Amd64GetProfileDescriptor
Amd64InitializeProfiling
Amd64OverflowHandler
Amd64QueryInformation
Amd64SetInterval
DbgBreakPoint
DbgPrint
DefaultDisableMonitoring
DefaultEnableMonitoring
DefaultInitializeProfiling
DefaultOverflowHandler
DefaultQueryInformation
DefaultSetInterval
DetectAcpiMP
EmClientQueryRuleState
EmonDisableMonitoring
EmonEnableMonitoring
EmonFreeCounter
EmonGetProfileDescriptor
EmonInitializeProfiling
EmonOverflowHandler
EmonQueryInformation
EmonSetInterval
EmpProviderRegister
ExAcquireSpinLockExclusive
ExAcquireSpinLockShared
ExReleaseSpinLockExclusive
ExReleaseSpinLockShared
HalAcpiEmCheckOperator
HalAcpiGetAllTablesDispatch
HalAcpiGetFacsMappingDispatch
HalAcpiGetRsdpDispatch
HalAcpiGetTable
HalAcpiGetTableDispatch
HalAcquireDisplayOwnership
HalAdjustResourceList
HalAllProcessorsStarted
HalAllocateAdapterChannel
HalAllocateCommonBuffer
HalAllocateCrashDumpRegisters
HalAssignSlotResources
HalBugCheckSystem
HalBuildMdlFromScatterGatherList
HalBuildScatterGatherList
HalCalculateScatterGatherListSize
HalCalibratePerformanceCounter
HalClearSoftwareInterrupt
HalConvertDeviceIdtToIrql
HalDisableInterrupt
HalDisplayString
HalEfiSetEnvironmentVariable
HalEnableInterrupt
HalEnumerateEnvironmentVariablesEx
HalEnumerateProcessors
HalFlushCommonBuffer
HalFreeCommonBuffer
HalGetAdapter
HalGetBusData
HalGetBusDataByOffset
HalGetDmaAlignment
HalGetEnvironmentVariable
HalGetEnvironmentVariableEx
HalGetInterruptTargetInformation
HalGetInterruptVector
HalGetMessageRoutingInfo
HalGetProcessorIdByNtNumber
HalGetScatterGatherList
HalGetVectorInput
HalHandleMcheck
HalHandleNMI
HalInitSystem
HalInitializeBios
HalInitializeCMC
HalInitializeErrSrc
HalInitializeMCA
HalInitializeNMI
HalInitializeOnResume
HalInitializeProcessor
HalIsHyperThreadingEnabled
HalMakeBeep
HalMatchAcpiCreatorRevision
HalMatchAcpiFADTBootArch
HalMatchAcpiOemId
HalMatchAcpiOemRevision
HalMatchAcpiOemTableId
HalMatchAcpiRevision
HalPnpGetDmaAdapter
HalPnpInterfaceDereference
HalPnpInterfaceReference
HalProcessorIdle
HalPutDmaAdapter
HalPutScatterGatherList
HalQueryDisplayParameters
HalQueryEnvironmentVariableInfoEx
HalQueryMaximumProcessorCount
HalQueryRealTimeClock
HalReadDmaCounter
HalRealAllocateAdapterChannel
HalRegisterDynamicProcessor
HalRegisterErrataCallbacks
HalReportResourceUsage
HalRequestIpi
HalRequestSoftwareInterrupt
HalReturnToFirmware
HalSendNMI
HalSendSoftwareInterrupt
HalSetBusData
HalSetBusDataByOffset
HalSetDisplayParameters
HalSetEnvironmentVariable
HalSetEnvironmentVariableEx
HalSetProfileInterval
HalSetRealTimeClock
HalSetTimeIncrement
HalStartDynamicProcessor
HalStartNextProcessor
HalStartProcessor
HalStartProfileInterrupt
HalStopProfileInterrupt
HalSystemVectorDispatchEntry
HalTranslateBusAddress
HalWriteBootRegister
HalaAcpiTimerInit
HalacpIrqTranslatorDereference
HalacpiIrqTranslateResourceRequirementsIsa
HalacpiIrqTranslateResourcesIsa
HalacpiIrqTranslatorReference
HaliAcpiMachineStateInit
HaliAcpiQueryFlags
HaliAcpiSleep
HaliAcpiTimerCarry
HaliAcpiTimerInit
HaliGetDmaAdapter
HaliGetInterruptTranslator
HaliHaltSystem
HaliHandlePCIConfigSpaceAccess
HaliInitPnpDriver
HaliInitPowerManagement
HaliIsVectorValid
HaliLocateHiberRanges
HaliPciInterfaceReadConfig
HaliPciInterfaceWriteConfig
HaliQuerySystemInformation
HaliSetMaxLegacyPciBusNumber
HaliSetPciErrorHandlerCallback
HaliSetWakeAlarm
HaliSetWakeEnable
HalpAcpiAllocateMemory
HalpAcpiCacheTable
HalpAcpiCheckAndMapTable
HalpAcpiCopyBiosTable
HalpAcpiDetectMachineSpecificActions
HalpAcpiFallbackOnLegacyConfigMethod
HalpAcpiFindRsdp
HalpAcpiFlushCache
HalpAcpiGetAllTablesWork
HalpAcpiGetCachedTable
HalpAcpiGetFacsMapping
HalpAcpiGetRsdt
HalpAcpiGetTable
HalpAcpiGetTableFromBios
HalpAcpiGetTableWork
HalpAcpiIBMExaMatch
HalpAcpiIBMVigilMatch
HalpAcpiIsCachedTableCompromised
HalpAcpiPicStateIntact
HalpAcpiPostSleep
HalpAcpiPreSleep
HalpAcpiTableCacheInit
HalpAcquireCmosSpinLockAndWait
HalpAcquireCmosSpinLockEx
HalpAcquireHighLevelLock
HalpAddAdapterToList
HalpAddDevice
HalpAllocPhysicalMemory
HalpAllocateAdapterCallback
HalpAllocateCR3Root
HalpAllocateMapRegisters
HalpApicRebootService
HalpApicSpuriousService
HalpAssignDriveLetters
HalpAssignSlotResourcesStub
HalpBiosDisplayReset
HalpBroadcastCallService
HalpBugCheckCallback
HalpBuildIpiDestinationMap
HalpBuildKGDTEntry32
HalpBuildRealModeStartBlock
HalpBuildResumeStructures
HalpBuildTiledCR3Ex
HalpCheckLowMemoryPostSleep
HalpCheckLowMemoryPreSleep
HalpCheckPowerButton
HalpCheckWakeupTimeAndAdjust
HalpCmcPollingDpcRoutine
HalpCmcPollingWorkerRoutine
HalpCmciCurrentProcessorInitErrorPacket
HalpCmciCurrentProcessorSetConfigAMD
HalpCmciCurrentProcessorSetConfigIntel
HalpCmciInit
HalpCmciService
HalpCmciSetConfigAMD
HalpCmosNullReference
HalpCmosRangeHandler
HalpCmosReadByte
HalpCmosWriteByte
HalpCommitCR3Worker
HalpConsumeLowMemory
HalpCpuID
HalpCreateInterrupt
HalpDisableSystemInterrupt
HalpDispatchPnp
HalpDispatchPower
HalpDispatchSystemStateTransition
HalpDispatchWmi
HalpDmaAcquireBufferMappings
HalpDmaAllocateChildAdapter
HalpDmaAllocateContiguousMemory
HalpDmaAllocateContiguousPagesFromContiguousPool
HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel
HalpDmaAllocateEmergencyResources
HalpDmaAllocateLocalContiguousPool
HalpDmaAllocateLocalScatterPool
HalpDmaAllocateMapRegisters
HalpDmaAllocateMapRegistersAtHighLevel
HalpDmaAllocateMappingResources
HalpDmaAllocateNewTranslationBuffer
HalpDmaAllocateReservedMapping
HalpDmaAllocateReservedMappingArray
HalpDmaAllocateScatterMemory
HalpDmaAllocateScatterPagesFromContiguousPool
HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevel
HalpDmaAllocateScatterPagesFromScatterPool
HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel
HalpDmaAllocateTranslationBuffer
HalpDmaCommitContiguousMapBuffers
HalpDmaCommitScatterMapBuffers
HalpDmaFinalizeDoubleBufferingDisposition
HalpDmaFlushScatterTransfer
HalpDmaForceAllocation
HalpDmaFreeChildAdapter
HalpDmaFreeChildAdapterWorker
HalpDmaFreeMapRegisters
HalpDmaGetTranslationEntries
HalpDmaGrowContiguousMapBuffers
HalpDmaGrowScatterMapBuffers
HalpDmaInit
HalpDmaInitializeMasterAdapter
HalpDmaLinkContiguousTranslations
HalpDmaMapScatterTransfer
HalpDmaNextContiguousPiece
HalpDmaPrependTranslations
HalpDmaQueueAdapter
HalpDmaReleaseBufferMappings
HalpDmaReturnPageToOwner
HalpDmaReturnPageToSource
HalpDmaReturnToContiguousPool
HalpDmaReturnToScatterPool
HalpDmaSyncMapBuffers
HalpDmaSyncMapBuffersWithEmergencyResources
HalpDmaZeroMapBuffers
HalpDpPostReplaceInitialization
HalpDpReplaceBegin
HalpDpReplaceControl
HalpDpReplaceEnd
HalpDpReplaceTarget
HalpDpStartProcessor
HalpDpSwapProcessorIdentifiers
HalpDriverEntry
HalpECmosReadByte
HalpECmosWriteByte
HalpEfiInitialization
HalpEfiInitializeOnResume
HalpEnableNMI
HalpEnablePerfInterupt
HalpEnableRedirEntry
HalpEnableSystemInterrupt
HalpEndOfBoot
HalpFDMANotificationCallback
HalpFillAMD64ProcessorErrorSection
HalpFillIntel64ProcessorErrorSection
HalpFindBusAddressTranslation
HalpFixupPhysicalIntiDestinations
HalpFreeTiledCR3Ex
HalpGenericCall
HalpGenericPolledDpcRoutine
HalpGenericPolledWorkerRoutine
HalpGetAcpiStaticNumaTopology
HalpGetApicIdByProcessorNumber
HalpGetApicInti
HalpGetApicVersion
HalpGetCPUVendor
HalpGetChipHacks
HalpGetCmosData
HalpGetDisplayBiosInformation
HalpGetEisaData
HalpGetFeatureBits
HalpGetMcaLog
HalpGetNextProcessorApicId
HalpGetPCIData
HalpGetParameters
HalpGetPmTimerPerfCounterValue
HalpGetPmTimerSleepModePerfCounterValue
HalpGetProcessorBrandString
HalpGetResourceSortValue
HalpGetSetCmosData
HalpGrowMapBufferWorker
HalpHalt
HalpHpetClockInterrupt
HalpHpetClockInterruptStub
HalpHpetClockInterruptWork
HalpHpetInitializeClock
HalpHpetRolloverInterrupt
HalpHpetStartProfileInterrupt
HalpHpetWriteEtwEvent
HalpHvCpuid
HalpInitChipHacks
HalpInitGenericErrorSourceEntry
HalpInitGenericErrorSourcePollingRoutine
HalpInitIntiInfo
HalpInitMpInfo
HalpInitNonBusHandler
HalpInitializeApicAddressing
HalpInitializeClock
HalpInitializeCmos
HalpInitializeGenericErrorSource
HalpInitializeHpet
HalpInitializeIOUnit
HalpInitializeIOUnits
HalpInitializeLocalUnit
HalpInitializePICs
HalpInitializePciBus
HalpInitializeProfiling
HalpInitializeWheaPhysicalMappings
HalpIoDelay
HalpIsCmciImplemented
HalpIsMicrosoftCompatibleHvLoaded
HalpKdAllocateAddressRange
HalpKdConfigureCardBusSocket
HalpKdConfigureDebuggingDevice
HalpKdExtendAddressRange
HalpKdFindFreeResourceLimits
HalpKdGetBarRange
HalpKdGetCardBusBridgeResources
HalpKdGetPciBridgeResources
HalpKdPowerUpDevice
HalpKdReadPCIConfig
HalpKdReleasePciDevice
HalpKdSearchBehindCardBusBridge
HalpKdSearchBehindPciBridge
HalpKdSearchForPciDebuggingDevice
HalpKdSearchForTopOfMMIO
HalpKdSetupPciDevice
HalpKdUnconfigureCardBusBridge
HalpKdUpdateAddressRange
HalpKdWidenCardBusBridgeBusRange
HalpKdWidenCardBusBridgeIoRange
HalpKdWidenCardBusBridgeMemoryRange
HalpKdWidenPciBridgeBusRange
HalpKdWidenPciBridgeIoRange
HalpKdWidenPciBridgeMemoryRange
HalpKdWritePCIConfig
HalpLMIdentityStub
HalpLMStub
HalpLoadMicrocode
HalpLocalApicErrorService
HalpMapCR3Ex
HalpMapNtToHwProcessorId
HalpMapNvsArea
HalpMapPhysicalMemory64
HalpMapPhysicalMemoryWriteThrough64
HalpMapTransfer
HalpMarkProcessorStarted
HalpMcUpdateFindDataTableEntry
HalpMcUpdateInitialize
HalpMcUpdateLock
HalpMcUpdateMicrocode
HalpMcUpdatePostUpdate
HalpMcUpdateUnlock
HalpMcaCurrentProcessorInitErrorPacket
HalpMcaCurrentProcessorSetConfig
HalpMcaExceptionHandler
HalpMcaInit
HalpMcaQueueDpc
HalpMcaReadProcessorException
HalpMcaReadRegisterInterface
HalpNMIHalt
HalpNumaAddRangeProximity
HalpNumaInitializeStaticConfiguration
HalpNumaQueryPageToNode
HalpNumaQueryProcessorNode
HalpNumaQueryProximityNode
HalpNumaSortMemoryRanges
HalpOfflineProcessor
HalpPCIConfig
HalpPCIConfigHoldingConfigLock
HalpPCIEndConfigAccess
HalpPCIISALine2Pin
HalpPCIPerformConfigAccess
HalpPCIPin2ISALine
HalpPCIReadUcharType1
HalpPCIReadUcharType2
HalpPCIReadUlongType1
HalpPCIReadUlongType2
HalpPCIReadUshortType1
HalpPCIReadUshortType2
HalpPCIStartConfigAccess
HalpPCIWriteUcharType1
HalpPCIWriteUcharType2
HalpPCIWriteUlongType1
HalpPCIWriteUlongType2
HalpPCIWriteUshortType1
HalpPCIWriteUshortType2
HalpPassIrpFromFdoToPdo
HalpPciAddMmConfigEntry
HalpPciInitializeMmConfigAccess
HalpPciReadMmConfigUchar
HalpPciReadMmConfigUlong
HalpPciReadMmConfigUshort
HalpPciReportMmConfigAddressRange
HalpPciWriteMmConfigUchar
HalpPciWriteMmConfigUlong
HalpPciWriteMmConfigUshort
HalpPerfInterrupt
HalpPhase0GetPciDataByOffset
HalpPhase0SetPciDataByOffset
HalpPiix4Detect
HalpPmTimerTickCountStall
HalpPowerStateCallback
HalpPreAllocateKInterrupts
HalpPrepareForBugcheck
HalpPreserveNvsArea
HalpProbeIoApic
HalpProcessAcpiStartDevice
HalpProcessorFence
HalpProfileInterrupt
HalpProgramHpetClock
HalpProgramRtcClock
HalpPutAcpiHacksInRegistry
HalpQueryAcpiResourceRequirements
HalpQueryDeviceRelations
HalpQueryHpetCount
HalpQueryIdFdo
HalpQueryIdPdo
HalpQueryInterface
HalpQueryPciRegistryInfo
HalpQueryResources
HalpQueueMapBufferWorker
HalpReadErrorInfo
HalpReadGenericErrorInfo
HalpReadLocalApicID
HalpReadPCIConfig
HalpReadPartitionTable
HalpReadRtcStdPCAT
HalpReadStdCmosData
HalpReadWheaPhysicalMemory
HalpReadWriteWheaPhysicalMemory
HalpRegisterPciDebuggingDeviceInfo
HalpRegisterVector
HalpReleaseCmosSpinLock
HalpReleaseHighLevelLock
HalpRemapVirtualAddress64
HalpReportMachineCheck
HalpReportResourceUsage
HalpRequestIpiSpecifyVector
HalpReserveHalPtes
HalpResetAllProcessors
HalpResetSBF
HalpResetThisProcessor
HalpRestartProfileTimeInterrupt
HalpRestoreDmaControllerState
HalpRestoreInterruptControllerState
HalpRestoreNvsArea
HalpRestorePerformanceCounter
HalpResumeClock
HalpRtcClockInterrupt
HalpRtcClockInterruptStub
HalpSaveContextTargetProcessor
HalpSaveDmaControllerState
HalpSavePerformanceCounter
HalpSaveProcessorStateAndWait
HalpScaleTimers
HalpSendFlatIpi
HalpSendNodeIpi64
HalpSendPhysicalIpi
HalpSet8259Mask
HalpSetClockAfterSleep
HalpSetClockBeforeSleep
HalpSetCmosData
HalpSetHandlerAddressToIDTIrql
HalpSetInternalVector
HalpSetInterruptControllerWakeupState
HalpSetPCIData
HalpSetPartitionInformation
HalpSetProfileSourceInterval
HalpSetRedirEntry
HalpSetSystemInformation
HalpSetWakeAlarm
HalpSetupAcpiPhase0
HalpSetupRealModeResume
HalpSetupSystemClockSupport
HalpSortLocalApicTable
HalpStartProcessor
HalpStopOhciInterrupt
HalpStopUhciInterrupt
HalpStoreFreeCr3
HalpSuspendClock
HalpTranslateBusAddress
HalpUnloadMicrocode
HalpUnmapVirtualAddress
HalpUnmaskCriticalClockInterruptSources
HalpUpdateProcessorApicId
HalpValidPCISlot
HalpVerifyIOUnit
HalpWaitForPending
HalpWhackICHUsbSmi
HalpWriteCmosTime
HalpWritePCIConfig
HalpWritePartitionTable
HalpWriteResetCommand
HalpWriteRtcStdPCAT
HalpWriteStdCmosData
HalpWriteWheaPhysicalMemory
HalpcGetCmosDataByType
HalpcSetCmosDataByType
IoFlushAdapterBuffers
IoFreeAdapterChannel
IoFreeMapRegisters
IoMapTransfer
KdRestore
KeFlushWriteBuffer
KeQueryPerformanceCounter
KeStallExecutionProcessor
PicNopHandlerInt
PicSpuriousService37
PoSetFixedWakeSource
PshedGetErrorSourceInfo
PshedIsSystemWheaEnabled
PshedRetrieveErrorInfo
RtlMoveMemory
RtlStringCbPrintfW
WheaGetErrorSource
WheaRegisterErrSrcInitializer
WheaReportHwError
XmAaaOp
XmAadOp
XmAamOp
XmAasOp
XmAccumImmediate
XmAccumRegister
XmAdcOp
XmAddOp
XmAddOperands
XmAndOp
XmBitScanGeneral
XmBoundOp
XmBsfOp
XmBsrOp
XmBswapOp
XmBtOp
XmBtcOp
XmBtrOp
XmBtsOp
XmByteImmediate
XmCallOp
XmCbwOp
XmClcOp
XmCldOp
XmCliOp
XmCmcOp
XmCmpOp
XmCmpsOp
XmCmpxchgOp
XmCompareOperands
XmCwdOp
XmDaaOp
XmDasOp
XmDecOp
XmDivOp
XmEffectiveOffset
XmEmulateStream
XmEnterOp
XmEvaluateAddressSpecifier
XmEvaluateIndexSpecifier
XmExecuteInt1a
XmFlagsRegister
XmGeneralBitOffset
XmGeneralRegister
XmGetCodeByte
XmGetImmediateSourceValue
XmGetLongImmediate
XmGetOffsetAddress
XmGetStringAddress
XmGetWordImmediate
XmGroup1General
XmGroup1Immediate
XmGroup2By1
XmGroup2ByByte
XmGroup2ByCL
XmGroup3General
XmGroup45General
XmGroup7General
XmGroup8BitOffset
XmHltOp
XmIdivOp
XmIllOp
XmImmediateEnter
XmImmediateJump
XmImulImmediate
XmImulOp
XmImulxOp
XmInOp
XmIncOp
XmInsOp
XmInt1aFindPciClassCode
XmInt1aFindPciDevice
XmInt1aReadConfigRegister
XmInt1aWriteConfigRegister
XmIntOp
XmIretOp
XmJcxzOp
XmJmpOp
XmJxxOp
XmLahfOp
XmLeaveOp
XmLoadSegment
XmLodsOp
XmLongJump
XmLoopOp
XmMovOp
XmMoveGeneral
XmMoveImmediate
XmMoveRegImmediate
XmMoveSegment
XmMoveXxGeneral
XmMovsOp
XmMulOp
XmNegOp
XmNoOperands
XmNopOp
XmNotOp
XmOpcodeEscape
XmOpcodeRegister
XmOrOp
XmOutOp
XmOutsOp
XmPopGeneral
XmPopOp
XmPopStack
XmPopaOp
XmPortDX
XmPortImmediate
XmPrefixOpcode
XmPushImmediate
XmPushOp
XmPushPopSegment
XmPushStack
XmPushaOp
XmRclOp
XmRcrOp
XmRdtscOp
XmRetOp
XmRolOp
XmRorOp
XmSahfOp
XmSarOp
XmSbbOp
XmScasOp
XmSegmentOffset
XmSetDataType
XmSetLogicalResult
XmSetccByte
XmShiftDouble
XmShlOp
XmShldOp
XmShortJump
XmShrOp
XmShrdOp
XmSmswOp
XmStcOp
XmStdOp
XmStiOp
XmStosOp
XmStringOperands
XmSubOp
XmSubOperands
XmSxxOp
XmTestOp
XmXaddOp
XmXchgOp
XmXlatOpcode
XmXorOp
ZwClose
ZwDeleteValueKey
ZwOpenKey
ZwSetValueKey
__GSHandlerCheck
__GSHandlerCheckCommon
__security_check_cookie
_invalid_parameter
_iswctype_l
_setjmp
_stricmp
_vsnwprintf
_wchartodigit
_wcsicmp
atoi
longjmp
memcmp
memcpy
memset
strncmp
strncpy_s
strstr
wcstoul
x86BiosAllocateBuffer
x86BiosCall
x86BiosExecuteInterruptShadowed
x86BiosFreeBuffer
x86BiosGetPciBusData
x86BiosInitializeBiosEx
x86BiosInitializeBiosShadowed
x86BiosReadCmosPortByte
x86BiosReadIoSpace
x86BiosReadMemory
x86BiosSetPciBusData
x86BiosTranslateAddress
x86BiosWriteCmosPortByte
x86BiosWriteIoSpace
x86BiosWriteMemory
*/
