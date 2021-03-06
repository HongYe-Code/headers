typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _PO_DEVICE_NOTIFY
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0008 */ struct _DEVICE_OBJECT* TargetDevice;
  /* 0x000c */ unsigned char OrderLevel;
  /* 0x0010 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0014 */ unsigned short* DeviceName;
  /* 0x0018 */ unsigned short* DriverName;
  /* 0x001c */ unsigned long ChildCount;
  /* 0x0020 */ unsigned long ActiveChild;
} PO_DEVICE_NOTIFY, *PPO_DEVICE_NOTIFY; /* size: 0x0024 */

typedef struct _PO_IRP_QUEUE
{
  /* 0x0000 */ struct _IRP* CurrentIrp;
  /* 0x0004 */ struct _IRP* PendingIrpList;
} PO_IRP_QUEUE, *PPO_IRP_QUEUE; /* size: 0x0008 */

typedef struct _PO_IRP_MANAGER
{
  /* 0x0000 */ struct _PO_IRP_QUEUE DeviceIrpQueue;
  /* 0x0008 */ struct _PO_IRP_QUEUE SystemIrpQueue;
} PO_IRP_MANAGER, *PPO_IRP_MANAGER; /* size: 0x0010 */

typedef enum _PNP_DEVNODE_STATE
{
  DeviceNodeUnspecified = 768,
  DeviceNodeUninitialized = 769,
  DeviceNodeInitialized = 770,
  DeviceNodeDriversAdded = 771,
  DeviceNodeResourcesAssigned = 772,
  DeviceNodeStartPending = 773,
  DeviceNodeStartCompletion = 774,
  DeviceNodeStartPostWork = 775,
  DeviceNodeStarted = 776,
  DeviceNodeQueryStopped = 777,
  DeviceNodeStopped = 778,
  DeviceNodeRestartCompletion = 779,
  DeviceNodeEnumeratePending = 780,
  DeviceNodeEnumerateCompletion = 781,
  DeviceNodeAwaitingQueuedDeletion = 782,
  DeviceNodeAwaitingQueuedRemoval = 783,
  DeviceNodeQueryRemoved = 784,
  DeviceNodeRemovePendingCloses = 785,
  DeviceNodeRemoved = 786,
  DeviceNodeDeletePendingCloses = 787,
  DeviceNodeDeleted = 788,
  MaxDeviceNodeState = 789,
} PNP_DEVNODE_STATE, *PPNP_DEVNODE_STATE;

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

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
  MaximumInterfaceType = 16,
} INTERFACE_TYPE, *PINTERFACE_TYPE;

enum PROFILE_STATUS
{
  DOCK_NOTDOCKDEVICE = 0,
  DOCK_QUIESCENT = 1,
  DOCK_ARRIVING = 2,
  DOCK_DEPARTING = 3,
  DOCK_EJECTIRP_COMPLETED = 4,
};

typedef struct _DEVICE_NODE
{
  /* 0x0000 */ struct _DEVICE_NODE* Sibling;
  /* 0x0004 */ struct _DEVICE_NODE* Child;
  /* 0x0008 */ struct _DEVICE_NODE* Parent;
  /* 0x000c */ struct _DEVICE_NODE* LastChild;
  /* 0x0010 */ unsigned long Level;
  /* 0x0014 */ struct _PO_DEVICE_NOTIFY Notify;
  /* 0x0038 */ struct _PO_IRP_MANAGER PoIrpManager;
  /* 0x0048 */ enum _PNP_DEVNODE_STATE State;
  /* 0x004c */ enum _PNP_DEVNODE_STATE PreviousState;
  /* 0x0050 */ enum _PNP_DEVNODE_STATE StateHistory[20];
  /* 0x00a0 */ unsigned long StateHistoryEntry;
  /* 0x00a4 */ long CompletionStatus;
  /* 0x00a8 */ struct _IRP* PendingIrp;
  /* 0x00ac */ unsigned long Flags;
  /* 0x00b0 */ unsigned long UserFlags;
  /* 0x00b4 */ unsigned long Problem;
  /* 0x00b8 */ struct _DEVICE_OBJECT* PhysicalDeviceObject;
  /* 0x00bc */ struct _CM_RESOURCE_LIST* ResourceList;
  /* 0x00c0 */ struct _CM_RESOURCE_LIST* ResourceListTranslated;
  /* 0x00c4 */ struct _UNICODE_STRING InstancePath;
  /* 0x00cc */ struct _UNICODE_STRING ServiceName;
  /* 0x00d4 */ struct _DEVICE_OBJECT* DuplicatePDO;
  /* 0x00d8 */ struct _IO_RESOURCE_REQUIREMENTS_LIST* ResourceRequirements;
  /* 0x00dc */ enum _INTERFACE_TYPE InterfaceType;
  /* 0x00e0 */ unsigned long BusNumber;
  /* 0x00e4 */ enum _INTERFACE_TYPE ChildInterfaceType;
  /* 0x00e8 */ unsigned long ChildBusNumber;
  /* 0x00ec */ unsigned short ChildBusTypeIndex;
  /* 0x00ee */ unsigned char RemovalPolicy;
  /* 0x00ef */ unsigned char HardwareRemovalPolicy;
  /* 0x00f0 */ struct _LIST_ENTRY TargetDeviceNotify;
  /* 0x00f8 */ struct _LIST_ENTRY DeviceArbiterList;
  /* 0x0100 */ struct _LIST_ENTRY DeviceTranslatorList;
  /* 0x0108 */ unsigned short NoTranslatorMask;
  /* 0x010a */ unsigned short QueryTranslatorMask;
  /* 0x010c */ unsigned short NoArbiterMask;
  /* 0x010e */ unsigned short QueryArbiterMask;
  union
  {
    union
    {
      /* 0x0110 */ struct _DEVICE_NODE* LegacyDeviceNode;
      /* 0x0110 */ struct _DEVICE_RELATIONS* PendingDeviceRelations;
      /* 0x0110 */ void* Information;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ OverUsed1;
  union
  {
    /* 0x0114 */ struct _DEVICE_NODE* NextResourceDeviceNode;
  } /* size: 0x0004 */ OverUsed2;
  /* 0x0118 */ struct _CM_RESOURCE_LIST* BootResources;
  /* 0x011c */ struct _CM_RESOURCE_LIST* BootResourcesTranslated;
  /* 0x0120 */ unsigned long CapabilityFlags;
  struct
  {
    /* 0x0124 */ enum PROFILE_STATUS DockStatus;
    /* 0x0128 */ struct _LIST_ENTRY ListEntry;
    /* 0x0130 */ unsigned short* SerialNumber;
  } /* size: 0x0010 */ DockInfo;
  /* 0x0134 */ unsigned long DisableableDepends;
  /* 0x0138 */ struct _LIST_ENTRY PendedSetInterfaceState;
  /* 0x0140 */ struct _LIST_ENTRY LegacyBusListEntry;
  /* 0x0148 */ unsigned long DriverUnloadRetryCount;
  /* 0x014c */ struct _DEVICE_NODE* PreviousParent;
  /* 0x0150 */ unsigned long DeletedChildren;
  /* 0x0154 */ unsigned long NumaNodeIndex;
} DEVICE_NODE, *PDEVICE_NODE; /* size: 0x0158 */

