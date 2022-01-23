#ifndef UE4SS_SDK_VariantManagerContent_HPP
#define UE4SS_SDK_VariantManagerContent_HPP

#include "VariantManagerContent_enums.hpp"

class ULevelVariantSets : public UObject
{
    UClass* DirectorClass;
    TArray<class UVariantSet*> VariantSets;

    class UVariantSet* GetVariantSetByName(FString VariantSetName);
    class UVariantSet* GetVariantSet(int32 VariantSetIndex);
    int32 GetNumVariantSets();
};

class ALevelVariantSetsActor : public AActor
{
    FSoftObjectPath LevelVariantSets;

    bool SwitchOnVariantByName(FString VariantSetName, FString VariantName);
    bool SwitchOnVariantByIndex(int32 VariantSetIndex, int32 VariantIndex);
    void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);
    class ULevelVariantSets* GetLevelVariantSets(bool bLoad);
};

class ULevelVariantSetsFunctionDirector : public UObject
{
};

struct FCapturedPropSegment
{
    FString PropertyName;
    int32 PropertyIndex;
    FString ComponentName;
};

class UPropertyValue : public UObject
{
    TArray<TFieldPath<FProperty>> Properties;
    TArray<int32> PropertyIndices;
    TArray<FCapturedPropSegment> CapturedPropSegments;
    FString FullDisplayString;
    FName PropertySetterName;
    TMap<class FString, class FString> PropertySetterParameterDefaults;
    bool bHasRecordedData;
    UClass* LeafPropertyClass;
    TArray<uint8> ValueBytes;
    EPropertyValueCategory PropCategory;

    bool HasRecordedData();
    FText GetPropertyTooltip();
    FString GetFullDisplayString();
};

class UPropertyValueTransform : public UPropertyValue
{
};

class UPropertyValueVisibility : public UPropertyValue
{
};

class UPropertyValueColor : public UPropertyValue
{
};

class UPropertyValueMaterial : public UPropertyValue
{
};

class UPropertyValueOption : public UPropertyValue
{
};

class UPropertyValueSoftObject : public UPropertyValue
{
};

class ASwitchActor : public AActor
{
    class USceneComponent* SceneComponent;
    int32 LastSelectedOption;

    void SelectOption(int32 OptionIndex);
    int32 GetSelectedOption();
    TArray<class AActor*> GetOptions();
};

class UVariant : public UObject
{
    FText DisplayText;
    TArray<class UVariantObjectBinding*> ObjectBindings;
    class UTexture2D* Thumbnail;

    void SwitchOn();
    void SetDisplayText(const FText& NewDisplayText);
    bool IsActive();
    class UTexture2D* GetThumbnail();
    int32 GetNumActors();
    FText GetDisplayText();
    class AActor* GetActor(int32 ActorIndex);
};

struct FFunctionCaller
{
    FName FunctionName;
};

class UVariantObjectBinding : public UObject
{
    FString CachedActorLabel;
    FSoftObjectPath ObjectPtr;
    TLazyObjectPtr<class UObject> LazyObjectPtr;
    TArray<class UPropertyValue*> CapturedProperties;
    TArray<FFunctionCaller> FunctionCallers;
};

class UVariantSet : public UObject
{
    FText DisplayText;
    bool bExpanded;
    TArray<class UVariant*> Variants;

    void SetDisplayText(const FText& NewDisplayText);
    class UVariant* GetVariantByName(FString VariantName);
    class UVariant* GetVariant(int32 VariantIndex);
    int32 GetNumVariants();
    FText GetDisplayText();
};

#endif
