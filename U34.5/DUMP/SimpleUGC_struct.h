// Enum SimpleUGC.EUGCApprovalStatus
enum class EUGCApprovalStatus : uint8 {
	Fully = 0,
	Progression = 1,
	Sandbox = 2,
	All = 255,
	EUGCApprovalStatus_MAX = 256
};

// Enum SimpleUGC.EUGCBlueprintSpawning
enum class EUGCBlueprintSpawning : uint8 {
	Spacerig = 0,
	Cave = 1,
	Other = 2,
	EUGCBlueprintSpawning_MAX = 3
};

// Enum SimpleUGC.EUGCPackageError
enum class EUGCPackageError : uint8 {
	Exists = 0,
	Invalid = 1,
	Other = 2,
	EUGCPackageError_MAX = 3
};

// ScriptStruct SimpleUGC.ModioTermsWrapper
// Size: 0x70 (Inherited: 0x00)
struct FModioTermsWrapper {
	FString AgreeButtonText; // 0x00(0x10)
	FString DisagreeButtonText; // 0x10(0x10)
	FString TermsLink; // 0x20(0x10)
	FString TermsText; // 0x30(0x10)
	FString PrivacyLink; // 0x40(0x10)
	FString PrivacyText; // 0x50(0x10)
	FString TermsOfUseText; // 0x60(0x10)
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

