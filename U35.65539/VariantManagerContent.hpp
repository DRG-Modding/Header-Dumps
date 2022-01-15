#ifndef UE4SS_SDK_VariantManagerContent_HPP
#define UE4SS_SDK_VariantManagerContent_HPP

#include "VariantManagerContent_enums.hpp"

class ULevelVariantSets : UObject
{
    UClass* DirectorClass;
    TArray<UVariantSet*> VariantSets;

    UVariantSet* GetVariantSetByName(FString VariantSetName);
    UVariantSet* GetVariantSet(int32 VariantSetIndex);
    int32 GetNumVariantSets();
}

class ALevelVariantSetsActor : AActor
{
    FSoftObjectPath LevelVariantSets;

    bool SwitchOnVariantByName(FString VariantSetName, FString VariantName);
    bool SwitchOnVariantByIndex(int32 VariantSetIndex, int32 VariantIndex);
    void SetLevelVariantSets(ULevelVariantSets* InVariantSets);
    ULevelVariantSets* GetLevelVariantSets(bool bLoad);
}

class ULevelVariantSetsFunctionDirector : UObject
{
}

class UPropertyValue : UObject
{
    TArray<TFieldPath<FNone>> Properties;
    TArray<int32> PropertyIndices;
    TArray<FCapturedPropSegment> CapturedPropSegments;
    FString FullDisplayString;
    FName PropertySetterName;
    TMap<FString, FString> PropertySetterParameterDefaults;
    bool bHasRecordedData;
    UClass* LeafPropertyClass;
    TArray<uint8> ValueBytes;
    EPropertyValueCategory PropCategory;

    bool HasRecordedData();
    FText GetPropertyTooltip();
    FString GetFullDisplayString();
}

class UPropertyValueTransform : UPropertyValue
{
}

class UPropertyValueVisibility : UPropertyValue
{
}

class UPropertyValueColor : UPropertyValue
{
}

class UPropertyValueMaterial : UPropertyValue
{
}

class UPropertyValueOption : UPropertyValue
{
}

class UPropertyValueSoftObject : UPropertyValue
{
}

class ASwitchActor : AActor
{
    USceneComponent* SceneComponent;
    int32 LastSelectedOption;

    void SelectOption(int32 OptionIndex);
    int32 GetSelectedOption();
    TArray<AActor*> GetOptions();
}

class UVariant : UObject
{
    FText DisplayText;
    TArray<UVariantObjectBinding*> ObjectBindings;
    UTexture2D* Thumbnail;

    void SwitchOn();
    void SetDisplayText(const FText& NewDisplayText);
    bool IsActive();
    UTexture2D* GetThumbnail();
    int32 GetNumActors();
    FText GetDisplayText();
    AActor* GetActor(int32 ActorIndex);
}

class UVariantObjectBinding : UObject
{
    FString CachedActorLabel;
    FSoftObjectPath ObjectPtr;
    TLazyObjectPtr<UObject> LazyObjectPtr;
    TArray<UPropertyValue*> CapturedProperties;
    TArray<FFunctionCaller> FunctionCallers;
}

class UVariantSet : UObject
{
    FText DisplayText;
    bool bExpanded;
    TArray<UVariant*> Variants;

    void SetDisplayText(const FText& NewDisplayText);
    UVariant* GetVariantByName(FString VariantName);
    UVariant* GetVariant(int32 VariantIndex);
    int32 GetNumVariants();
    FText GetDisplayText();
}

struct UFunctionCaller
{
    FName FunctionName;
}

struct UCapturedPropSegment
{
    FString PropertyName;
    int32 PropertyIndex;
    FString ComponentName;
}

#endif
