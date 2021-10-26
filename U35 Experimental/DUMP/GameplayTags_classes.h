// Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary {

	bool RemoveGameplayTag(FGameplayTagContainer TagContainer, FGameplayTag Tag);
	bool NotEqual_TagTag(FGameplayTag A, FString B);
	bool NotEqual_TagContainerTagContainer(FGameplayTagContainer A, FString B);
	bool NotEqual_GameplayTagContainer(FGameplayTagContainer A, FGameplayTagContainer B);
	bool NotEqual_GameplayTag(FGameplayTag A, FGameplayTag B);
	bool MatchesTag(FGameplayTag TagOne, FGameplayTag TagTwo, bool bExactMatch);
	bool MatchesAnyTags(FGameplayTag TagOne, FGameplayTagContainer OtherContainer, bool bExactMatch);
	FGameplayTagContainer MakeLiteralGameplayTagContainer(FGameplayTagContainer Value);
	FGameplayTag MakeLiteralGameplayTag(FGameplayTag Value);
	FGameplayTagQuery MakeGameplayTagQuery(FGameplayTagQuery tagQuery);
	FGameplayTagContainer MakeGameplayTagContainerFromTag(FGameplayTag SingleTag);
	FGameplayTagContainer MakeGameplayTagContainerFromArray(TArray<FGameplayTag> GameplayTags);
	bool IsTagQueryEmpty(FGameplayTagQuery tagQuery);
	bool IsGameplayTagValid(FGameplayTag GameplayTag);
	bool HasTag(FGameplayTagContainer TagContainer, FGameplayTag Tag, bool bExactMatch);
	bool HasAnyTags(FGameplayTagContainer TagContainer, FGameplayTagContainer OtherContainer, bool bExactMatch);
	bool HasAllTags(FGameplayTagContainer TagContainer, FGameplayTagContainer OtherContainer, bool bExactMatch);
	bool HasAllMatchingGameplayTags(TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, FGameplayTagContainer OtherContainer);
	FName GetTagName(FGameplayTag GameplayTag);
	int32_t GetNumGameplayTagsInContainer(FGameplayTagContainer TagContainer);
	FString GetDebugStringFromGameplayTagContainer(FGameplayTagContainer TagContainer);
	FString GetDebugStringFromGameplayTag(FGameplayTag GameplayTag);
	void GetAllActorsOfClassMatchingTagQuery(UObject* WorldContextObject, AActor* ActorClass, FGameplayTagQuery GameplayTagQuery, TArray<AActor*> OutActors);
	bool EqualEqual_GameplayTagContainer(FGameplayTagContainer A, FGameplayTagContainer B);
	bool EqualEqual_GameplayTag(FGameplayTag A, FGameplayTag B);
	bool DoesTagAssetInterfaceHaveTag(TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, FGameplayTag Tag);
	bool DoesContainerMatchTagQuery(FGameplayTagContainer TagContainer, FGameplayTagQuery tagQuery);
	void BreakGameplayTagContainer(FGameplayTagContainer GameplayTagContainer, TArray<FGameplayTag> GameplayTags);
	void AppendGameplayTagContainers(FGameplayTagContainer InOutTagContainer, FGameplayTagContainer InTagContainer);
	void AddGameplayTag(FGameplayTagContainer TagContainer, FGameplayTag Tag);
};

// Class GameplayTags.GameplayTagAssetInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameplayTagAssetInterface : UInterface {

	bool HasMatchingGameplayTag(FGameplayTag TagToCheck);
	bool HasAnyMatchingGameplayTags(FGameplayTagContainer TagContainer);
	bool HasAllMatchingGameplayTags(FGameplayTagContainer TagContainer);
	void GetOwnedGameplayTags(FGameplayTagContainer TagContainer);
};

// Class GameplayTags.EditableGameplayTagQuery
// Size: 0x98 (Inherited: 0x28)
struct UEditableGameplayTagQuery : UObject {
	FString UserDescription; // 0x28(0x10)
	UEditableGameplayTagQueryExpression* RootExpression; // 0x48(0x08)
	FGameplayTagQuery TagQueryExportText_Helper; // 0x50(0x48)
};

// Class GameplayTags.EditableGameplayTagQueryExpression
// Size: 0x28 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression : UObject {
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// Size: 0x48 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28(0x20)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// Size: 0x48 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28(0x20)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// Size: 0x48 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28(0x20)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// Size: 0x38 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28(0x10)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// Size: 0x38 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28(0x10)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// Size: 0x38 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28(0x10)
};

// Class GameplayTags.GameplayTagsManager
// Size: 0x210 (Inherited: 0x28)
struct UGameplayTagsManager : UObject {
	TArray<FGameplayTagSource> TagSources; // 0xc0(0x10)
	TArray<UDataTable*> GameplayTagTables; // 0x1b0(0x10)
};

// Class GameplayTags.GameplayTagsList
// Size: 0x48 (Inherited: 0x28)
struct UGameplayTagsList : UObject {
	FString ConfigFileName; // 0x28(0x10)
	TArray<FGameplayTagTableRow> GameplayTagList; // 0x38(0x10)
};

// Class GameplayTags.RestrictedGameplayTagsList
// Size: 0x48 (Inherited: 0x28)
struct URestrictedGameplayTagsList : UObject {
	FString ConfigFileName; // 0x28(0x10)
	TArray<FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x38(0x10)
};

// Class GameplayTags.GameplayTagsSettings
// Size: 0xb8 (Inherited: 0x48)
struct UGameplayTagsSettings : UGameplayTagsList {
	bool ImportTagsFromConfig; // 0x48(0x01)
	bool WarnOnInvalidTags; // 0x49(0x01)
	bool FastReplication; // 0x4a(0x01)
	FString InvalidTagCharacters; // 0x50(0x10)
	TArray<FGameplayTagCategoryRemap> CategoryRemapping; // 0x60(0x10)
	TArray<FSoftObjectPath> GameplayTagTableList; // 0x70(0x10)
	TArray<FGameplayTagRedirect> GameplayTagRedirects; // 0x80(0x10)
	TArray<FName> CommonlyReplicatedTags; // 0x90(0x10)
	int32_t NumBitsForContainerSize; // 0xa0(0x04)
	int32_t NetIndexFirstBitSegment; // 0xa4(0x04)
	TArray<FRestrictedConfigInfo> RestrictedConfigFiles; // 0xa8(0x10)
};

// Class GameplayTags.GameplayTagsDeveloperSettings
// Size: 0x38 (Inherited: 0x28)
struct UGameplayTagsDeveloperSettings : UObject {
	FString DeveloperConfigName; // 0x28(0x10)
};

