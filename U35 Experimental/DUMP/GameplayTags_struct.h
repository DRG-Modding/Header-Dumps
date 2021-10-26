// Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8 {
	Undefined = 0,
	AnyTagsMatch = 1,
	AllTagsMatch = 2,
	NoTagsMatch = 3,
	AnyExprMatch = 4,
	AllExprMatch = 5,
	NoExprMatch = 6,
	EGameplayTagQueryExprType_MAX = 7
};

// Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8 {
	Any = 0,
	All = 1,
	EGameplayContainerMatchType_MAX = 2
};

// Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8 {
	Explicit = 0,
	IncludeParentTags = 1,
	EGameplayTagMatchType_MAX = 2
};

// Enum GameplayTags.EGameplayTagSelectionType
enum class EGameplayTagSelectionType : uint8 {
	None = 0,
	NonRestrictedOnly = 1,
	RestrictedOnly = 2,
	All = 3,
	EGameplayTagSelectionType_MAX = 4
};

// Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8 {
	Native = 0,
	DefaultTagList = 1,
	TagList = 2,
	RestrictedTagList = 3,
	DataTable = 4,
	Invalid = 5,
	EGameplayTagSourceType_MAX = 6
};

// ScriptStruct GameplayTags.GameplayTagContainer
// Size: 0x20 (Inherited: 0x00)
struct FGameplayTagContainer {
	TArray<FGameplayTag> GameplayTags; // 0x00(0x10)
	TArray<FGameplayTag> ParentTags; // 0x10(0x10)
};

// ScriptStruct GameplayTags.GameplayTag
// Size: 0x08 (Inherited: 0x00)
struct FGameplayTag {
	FName TagName; // 0x00(0x08)
};

// ScriptStruct GameplayTags.GameplayTagQuery
// Size: 0x48 (Inherited: 0x00)
struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x00(0x04)
	TArray<FGameplayTag> TagDictionary; // 0x08(0x10)
	TArray<char> QueryTokenStream; // 0x18(0x10)
	FString UserDescription; // 0x28(0x10)
	FString AutoDescription; // 0x38(0x10)
};

// ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
// Size: 0x01 (Inherited: 0x00)
struct FGameplayTagCreationWidgetHelper {
};

// ScriptStruct GameplayTags.GameplayTagReferenceHelper
// Size: 0x10 (Inherited: 0x00)
struct FGameplayTagReferenceHelper {
};

// ScriptStruct GameplayTags.GameplayTagNode
// Size: 0x50 (Inherited: 0x00)
struct FGameplayTagNode {
};

// ScriptStruct GameplayTags.GameplayTagSource
// Size: 0x20 (Inherited: 0x00)
struct FGameplayTagSource {
	FName SourceName; // 0x00(0x08)
	enum class EGameplayTagSourceType SourceType; // 0x08(0x01)
	UGameplayTagsList* SourceTagList; // 0x10(0x08)
	URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18(0x08)
};

// ScriptStruct GameplayTags.GameplayTagTableRow
// Size: 0x20 (Inherited: 0x08)
struct FGameplayTagTableRow : FTableRowBase {
	FName Tag; // 0x08(0x08)
	FString DevComment; // 0x10(0x10)
};

// ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
// Size: 0x28 (Inherited: 0x20)
struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; // 0x20(0x01)
};

// ScriptStruct GameplayTags.RestrictedConfigInfo
// Size: 0x20 (Inherited: 0x00)
struct FRestrictedConfigInfo {
	FString RestrictedConfigName; // 0x00(0x10)
	TArray<FString> Owners; // 0x10(0x10)
};

// ScriptStruct GameplayTags.GameplayTagCategoryRemap
// Size: 0x20 (Inherited: 0x00)
struct FGameplayTagCategoryRemap {
	FString BaseCategory; // 0x00(0x10)
	TArray<FString> RemapCategories; // 0x10(0x10)
};

// ScriptStruct GameplayTags.GameplayTagRedirect
// Size: 0x10 (Inherited: 0x00)
struct FGameplayTagRedirect {
	FName OldTagName; // 0x00(0x08)
	FName NewTagName; // 0x08(0x08)
};

