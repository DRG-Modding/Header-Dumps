// Enum SimpleUGC.EUGCApprovalStatus
enum class EUGCApprovalStatus : uint8 {
	Fully = 0,
	Progression = 1,
	Sandbox = 2,
	All = 255,
	EUGCApprovalStatus_MAX = 256
};

// Enum SimpleUGC.EPackageSortField
enum class EPackageSortField : uint8 {
	None = 0,
	Name = 1,
	Status = 2,
	Author = 3,
	Mounted = 4,
	EPackageSortField_MAX = 5
};

// Enum SimpleUGC.EModioRequestType
enum class EModioRequestType : uint8 {
	InitializeLocalInstallation = 0,
	Authentication = 1,
	K2_Authentication = 2,
	TermsOfUse = 3,
	FetchModUpdates = 4,
	ModMetaData = 5,
	Thumbnail = 6,
	HostHiddenModsInstalled = 7,
	Subscribe = 8,
	ModDependencySubscribe = 9,
	ModDependencyList = 10,
	ModDependencyAdd = 11,
	EModioRequestType_MAX = 12
};

// Enum SimpleUGC.EUGCPackageError
enum class EUGCPackageError : uint8 {
	Exists = 0,
	Invalid = 1,
	Other = 2,
	EUGCPackageError_MAX = 3
};

// Enum SimpleUGC.EUGCBlueprintSpawning
enum class EUGCBlueprintSpawning : uint8 {
	Spacerig = 0,
	Cave = 1,
	Other = 2,
	EUGCBlueprintSpawning_MAX = 3
};

// ScriptStruct SimpleUGC.Mods
// Size: 0x10 (Inherited: 0x00)
struct FMods {
	TArray<FModDefinition> Mods; // 0x00(0x10)
};

// ScriptStruct SimpleUGC.ModDefinition
// Size: 0x28 (Inherited: 0x00)
struct FModDefinition {
	FString Name; // 0x00(0x10)
	int32_t Category; // 0x10(0x04)
	FString Version; // 0x18(0x10)
};

