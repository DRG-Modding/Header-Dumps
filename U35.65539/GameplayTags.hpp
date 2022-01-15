#ifndef UE4SS_SDK_GameplayTags_HPP
#define UE4SS_SDK_GameplayTags_HPP

#include "GameplayTags_enums.hpp"

class UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary
{

    bool RemoveGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag);
    bool NotEqual_TagTag(FGameplayTag A, FString B);
    bool NotEqual_TagContainerTagContainer(FGameplayTagContainer A, FString B);
    bool NotEqual_GameplayTagContainer(const FGameplayTagContainer& A, const FGameplayTagContainer& B);
    bool NotEqual_GameplayTag(FGameplayTag A, FGameplayTag B);
    bool MatchesTag(FGameplayTag TagOne, FGameplayTag TagTwo, bool bExactMatch);
    bool MatchesAnyTags(FGameplayTag TagOne, const FGameplayTagContainer& OtherContainer, bool bExactMatch);
    FGameplayTagContainer MakeLiteralGameplayTagContainer(FGameplayTagContainer Value);
    FGameplayTag MakeLiteralGameplayTag(FGameplayTag Value);
    FGameplayTagQuery MakeGameplayTagQuery(FGameplayTagQuery tagQuery);
    FGameplayTagContainer MakeGameplayTagContainerFromTag(FGameplayTag SingleTag);
    FGameplayTagContainer MakeGameplayTagContainerFromArray(const TArray<FGameplayTag>& GameplayTags);
    bool IsTagQueryEmpty(const FGameplayTagQuery& tagQuery);
    bool IsGameplayTagValid(FGameplayTag GameplayTag);
    bool HasTag(const FGameplayTagContainer& TagContainer, FGameplayTag Tag, bool bExactMatch);
    bool HasAnyTags(const FGameplayTagContainer& TagContainer, const FGameplayTagContainer& OtherContainer, bool bExactMatch);
    bool HasAllTags(const FGameplayTagContainer& TagContainer, const FGameplayTagContainer& OtherContainer, bool bExactMatch);
    bool HasAllMatchingGameplayTags(InterfaceProperty TagContainerInterface, const FGameplayTagContainer& OtherContainer);
    FName GetTagName(const FGameplayTag& GameplayTag);
    int32 GetNumGameplayTagsInContainer(const FGameplayTagContainer& TagContainer);
    FString GetDebugStringFromGameplayTagContainer(const FGameplayTagContainer& TagContainer);
    FString GetDebugStringFromGameplayTag(FGameplayTag GameplayTag);
    void GetAllActorsOfClassMatchingTagQuery(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FGameplayTagQuery& GameplayTagQuery, TArray<AActor*>& OutActors);
    bool EqualEqual_GameplayTagContainer(const FGameplayTagContainer& A, const FGameplayTagContainer& B);
    bool EqualEqual_GameplayTag(FGameplayTag A, FGameplayTag B);
    bool DoesTagAssetInterfaceHaveTag(InterfaceProperty TagContainerInterface, FGameplayTag Tag);
    bool DoesContainerMatchTagQuery(const FGameplayTagContainer& TagContainer, const FGameplayTagQuery& tagQuery);
    void BreakGameplayTagContainer(const FGameplayTagContainer& GameplayTagContainer, TArray<FGameplayTag>& GameplayTags);
    void AppendGameplayTagContainers(FGameplayTagContainer& InOutTagContainer, const FGameplayTagContainer& InTagContainer);
    void AddGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag);
}

class UGameplayTagAssetInterface : UInterface
{

    bool HasMatchingGameplayTag(FGameplayTag TagToCheck);
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer);
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer);
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer);
}

class UEditableGameplayTagQuery : UObject
{
    FString UserDescription;
    UEditableGameplayTagQueryExpression* RootExpression;
    FGameplayTagQuery TagQueryExportText_Helper;
}

class UEditableGameplayTagQueryExpression : UObject
{
}

class UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression
{
    FGameplayTagContainer Tags;
}

class UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression
{
    FGameplayTagContainer Tags;
}

class UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression
{
    FGameplayTagContainer Tags;
}

class UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression
{
    TArray<UEditableGameplayTagQueryExpression*> Expressions;
}

class UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression
{
    TArray<UEditableGameplayTagQueryExpression*> Expressions;
}

class UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression
{
    TArray<UEditableGameplayTagQueryExpression*> Expressions;
}

class UGameplayTagsManager : UObject
{
    TArray<FGameplayTagSource> TagSources;
    TArray<UDataTable*> GameplayTagTables;
}

class UGameplayTagsList : UObject
{
    FString ConfigFileName;
    TArray<FGameplayTagTableRow> GameplayTagList;
}

class URestrictedGameplayTagsList : UObject
{
    FString ConfigFileName;
    TArray<FRestrictedGameplayTagTableRow> RestrictedGameplayTagList;
}

class UGameplayTagsSettings : UGameplayTagsList
{
    bool ImportTagsFromConfig;
    bool WarnOnInvalidTags;
    bool FastReplication;
    FString InvalidTagCharacters;
    TArray<FGameplayTagCategoryRemap> CategoryRemapping;
    TArray<FSoftObjectPath> GameplayTagTableList;
    TArray<FGameplayTagRedirect> GameplayTagRedirects;
    TArray<FName> CommonlyReplicatedTags;
    int32 NumBitsForContainerSize;
    int32 NetIndexFirstBitSegment;
    TArray<FRestrictedConfigInfo> RestrictedConfigFiles;
}

class UGameplayTagsDeveloperSettings : UObject
{
    FString DeveloperConfigName;
}

struct UGameplayTagContainer
{
    TArray<FGameplayTag> GameplayTags;
    TArray<FGameplayTag> ParentTags;
}

struct UGameplayTag
{
    FName TagName;
}

struct UGameplayTagQuery
{
    int32 TokenStreamVersion;
    TArray<FGameplayTag> TagDictionary;
    TArray<uint8> QueryTokenStream;
    FString UserDescription;
    FString AutoDescription;
}

struct UGameplayTagCreationWidgetHelper
{
}

struct UGameplayTagReferenceHelper
{
}

struct UGameplayTagNode
{
}

struct UGameplayTagSource
{
    FName SourceName;
    EGameplayTagSourceType SourceType;
    UGameplayTagsList* SourceTagList;
    URestrictedGameplayTagsList* SourceRestrictedTagList;
}

struct UGameplayTagTableRow : FTableRowBase
{
    FName Tag;
    FString DevComment;
}

struct URestrictedGameplayTagTableRow : FGameplayTagTableRow
{
    bool bAllowNonRestrictedChildren;
}

struct URestrictedConfigInfo
{
    FString RestrictedConfigName;
    TArray<FString> Owners;
}

struct UGameplayTagCategoryRemap
{
    FString BaseCategory;
    TArray<FString> RemapCategories;
}

struct UGameplayTagRedirect
{
    FName OldTagName;
    FName NewTagName;
}

#endif
