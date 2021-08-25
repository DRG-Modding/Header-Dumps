// Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8_t {
	Undefined,
	AnyTagsMatch,
	AllTagsMatch,
	NoTagsMatch,
	AnyExprMatch,
	AllExprMatch,
	NoExprMatch,
	EGameplayTagQueryExprType_MAX,
};

// Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8_t {
	Any,
	All,
	EGameplayContainerMatchType_MAX,
};

// Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8_t {
	Explicit,
	IncludeParentTags,
	EGameplayTagMatchType_MAX,
};

// Enum GameplayTags.EGameplayTagSelectionType
enum class EGameplayTagSelectionType : uint8_t {
	None,
	NonRestrictedOnly,
	RestrictedOnly,
	All,
	EGameplayTagSelectionType_MAX,
};

// Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8_t {
	Native,
	DefaultTagList,
	TagList,
	RestrictedTagList,
	DataTable,
	Invalid,
	EGameplayTagSourceType_MAX,
};

// ScriptStruct GameplayTags.GameplayTagContainer
// Size: 0x20 (Inherited: 0x00)
struct FGameplayTagContainer {
	struct TArray<struct FGameplayTag> GameplayTags; // 0x00(0x10)
	struct TArray<struct FGameplayTag> ParentTags; // 0x10(0x10)
};

// ScriptStruct GameplayTags.GameplayTag
// Size: 0x08 (Inherited: 0x00)
struct FGameplayTag {
	struct FName TagName; // 0x00(0x08)
};

// ScriptStruct GameplayTags.GameplayTagQuery
// Size: 0x48 (Inherited: 0x00)
struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGameplayTag> TagDictionary; // 0x08(0x10)
	struct TArray<char> QueryTokenStream; // 0x18(0x10)
	struct FString UserDescription; // 0x28(0x10)
	struct FString AutoDescription; // 0x38(0x10)
};

// ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
// Size: 0x01 (Inherited: 0x00)
struct FGameplayTagCreationWidgetHelper {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct GameplayTags.GameplayTagReferenceHelper
// Size: 0x10 (Inherited: 0x00)
struct FGameplayTagReferenceHelper {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayTags.GameplayTagNode
// Size: 0x50 (Inherited: 0x00)
struct FGameplayTagNode {
	char UnknownData_0[0x50]; // 0x00(0x50)
};

// ScriptStruct GameplayTags.GameplayTagSource
// Size: 0x20 (Inherited: 0x00)
struct FGameplayTagSource {
	struct FName SourceName; // 0x00(0x08)
	enum class EGameplayTagSourceType SourceType; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct UGameplayTagsList* SourceTagList; // 0x10(0x08)
	struct URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18(0x08)
};

// ScriptStruct GameplayTags.GameplayTagTableRow
// Size: 0x20 (Inherited: 0x08)
struct FGameplayTagTableRow : FTableRowBase {
	struct FName Tag; // 0x08(0x08)
	struct FString DevComment; // 0x10(0x10)
};

// ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
// Size: 0x28 (Inherited: 0x20)
struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct GameplayTags.RestrictedConfigInfo
// Size: 0x20 (Inherited: 0x00)
struct FRestrictedConfigInfo {
	struct FString RestrictedConfigName; // 0x00(0x10)
	struct TArray<struct FString> Owners; // 0x10(0x10)
};

// ScriptStruct GameplayTags.GameplayTagCategoryRemap
// Size: 0x20 (Inherited: 0x00)
struct FGameplayTagCategoryRemap {
	struct FString BaseCategory; // 0x00(0x10)
	struct TArray<struct FString> RemapCategories; // 0x10(0x10)
};

// ScriptStruct GameplayTags.GameplayTagRedirect
// Size: 0x10 (Inherited: 0x00)
struct FGameplayTagRedirect {
	struct FName OldTagName; // 0x00(0x08)
	struct FName NewTagName; // 0x08(0x08)
};

