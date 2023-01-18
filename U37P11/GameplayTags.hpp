#ifndef UE4SS_SDK_GameplayTags_HPP
#define UE4SS_SDK_GameplayTags_HPP

#include "GameplayTags_enums.hpp"

struct FGameplayTag
{
    FName TagName;

};

struct FGameplayTagCategoryRemap
{
    FString BaseCategory;
    TArray<FString> RemapCategories;

};

struct FGameplayTagContainer
{
    TArray<FGameplayTag> GameplayTags;
    TArray<FGameplayTag> ParentTags;

};

struct FGameplayTagCreationWidgetHelper
{
};

struct FGameplayTagNode
{
};

struct FGameplayTagQuery
{
    int32 TokenStreamVersion;
    TArray<FGameplayTag> TagDictionary;
    TArray<uint8> QueryTokenStream;
    FString UserDescription;
    FString AutoDescription;

};

struct FGameplayTagRedirect
{
    FName OldTagName;
    FName NewTagName;

};

struct FGameplayTagReferenceHelper
{
};

struct FGameplayTagSource
{
    FName SourceName;
    EGameplayTagSourceType SourceType;
    class UGameplayTagsList* SourceTagList;
    class URestrictedGameplayTagsList* SourceRestrictedTagList;

};

struct FGameplayTagTableRow : public FTableRowBase
{
    FName Tag;
    FString DevComment;

};

struct FRestrictedConfigInfo
{
    FString RestrictedConfigName;
    TArray<FString> Owners;

};

struct FRestrictedGameplayTagTableRow : public FGameplayTagTableRow
{
    bool bAllowNonRestrictedChildren;

};

class IGameplayTagAssetInterface : public IInterface
{

    bool HasMatchingGameplayTag(FGameplayTag TagToCheck);
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer);
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer);
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer);
};

class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
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
    bool HasAllMatchingGameplayTags(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, const FGameplayTagContainer& OtherContainer);
    FName GetTagName(const FGameplayTag& GameplayTag);
    int32 GetNumGameplayTagsInContainer(const FGameplayTagContainer& TagContainer);
    FString GetDebugStringFromGameplayTagContainer(const FGameplayTagContainer& TagContainer);
    FString GetDebugStringFromGameplayTag(FGameplayTag GameplayTag);
    void GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, const FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>& OutActors);
    bool EqualEqual_GameplayTagContainer(const FGameplayTagContainer& A, const FGameplayTagContainer& B);
    bool EqualEqual_GameplayTag(FGameplayTag A, FGameplayTag B);
    bool DoesTagAssetInterfaceHaveTag(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, FGameplayTag Tag);
    bool DoesContainerMatchTagQuery(const FGameplayTagContainer& TagContainer, const FGameplayTagQuery& tagQuery);
    void BreakGameplayTagContainer(const FGameplayTagContainer& GameplayTagContainer, TArray<FGameplayTag>& GameplayTags);
    void AppendGameplayTagContainers(FGameplayTagContainer& InOutTagContainer, const FGameplayTagContainer& InTagContainer);
    void AddGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag);
};

class UEditableGameplayTagQuery : public UObject
{
    FString UserDescription;
    class UEditableGameplayTagQueryExpression* RootExpression;
    FGameplayTagQuery TagQueryExportText_Helper;

};

class UEditableGameplayTagQueryExpression : public UObject
{
};

class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
    TArray<class UEditableGameplayTagQueryExpression*> Expressions;

};

class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
    FGameplayTagContainer Tags;

};

class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
    TArray<class UEditableGameplayTagQueryExpression*> Expressions;

};

class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{
    FGameplayTagContainer Tags;

};

class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
    TArray<class UEditableGameplayTagQueryExpression*> Expressions;

};

class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
    FGameplayTagContainer Tags;

};

class UGameplayTagsDeveloperSettings : public UDeveloperSettings
{
    FString DeveloperConfigName;
    FName FavoriteTagSource;

};

class UGameplayTagsList : public UObject
{
    FString ConfigFileName;
    TArray<FGameplayTagTableRow> GameplayTagList;

};

class UGameplayTagsManager : public UObject
{
    TMap<class FName, class FGameplayTagSource> TagSources;
    TArray<class UDataTable*> GameplayTagTables;

};

class UGameplayTagsSettings : public UGameplayTagsList
{
    bool ImportTagsFromConfig;
    bool WarnOnInvalidTags;
    bool ClearInvalidTags;
    bool FastReplication;
    FString InvalidTagCharacters;
    TArray<FGameplayTagCategoryRemap> CategoryRemapping;
    TArray<FSoftObjectPath> GameplayTagTableList;
    TArray<FGameplayTagRedirect> GameplayTagRedirects;
    TArray<FName> CommonlyReplicatedTags;
    int32 NumBitsForContainerSize;
    int32 NetIndexFirstBitSegment;
    TArray<FRestrictedConfigInfo> RestrictedConfigFiles;

};

class URestrictedGameplayTagsList : public UObject
{
    FString ConfigFileName;
    TArray<FRestrictedGameplayTagTableRow> RestrictedGameplayTagList;

};

#endif
