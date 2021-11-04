// Enum EngineSettings.ESubLevelStripMode
enum class ESubLevelStripMode : uint8 {
	ExactClass = 0,
	IsChildOf = 1,
	ESubLevelStripMode_MAX = 2
};

// Enum EngineSettings.EFourPlayerSplitScreenType
enum class EFourPlayerSplitScreenType : uint8 {
	Grid = 0,
	Vertical = 1,
	Horizontal = 2,
	EFourPlayerSplitScreenType_MAX = 3
};

// Enum EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8 {
	FavorTop = 0,
	FavorBottom = 1,
	Vertical = 2,
	Horizontal = 3,
	EThreePlayerSplitScreenType_MAX = 4
};

// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8 {
	Horizontal = 0,
	Vertical = 1,
	ETwoPlayerSplitScreenType_MAX = 2
};

// ScriptStruct EngineSettings.AutoCompleteCommand
// Size: 0x28 (Inherited: 0x00)
struct FAutoCompleteCommand {
	FString Command; // 0x00(0x10)
	FString Desc; // 0x10(0x10)
};

// ScriptStruct EngineSettings.GameModeName
// Size: 0x28 (Inherited: 0x00)
struct FGameModeName {
	FString Name; // 0x00(0x10)
	FSoftClassPath GameMode; // 0x10(0x18)
};

