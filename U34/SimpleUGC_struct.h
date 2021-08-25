// Enum SimpleUGC.EUGCCategory
enum class EUGCCategory : uint8_t {
	Cosmetic,
	ServerOnly,
	RequiredByAll,
	EUGCCategory_MAX,
};

// ScriptStruct SimpleUGC.Mods
// Size: 0x10 (Inherited: 0x00)
struct FMods {
	struct TArray<struct FModDefinition> Mods; // 0x00(0x10)
};

// ScriptStruct SimpleUGC.ModDefinition
// Size: 0x10 (Inherited: 0x00)
struct FModDefinition {
	struct FString Name; // 0x00(0x10)
};

