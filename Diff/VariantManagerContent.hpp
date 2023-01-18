#ifndef UE4SS_SDK_VariantManagerContent_HPP
#define UE4SS_SDK_VariantManagerContent_HPP

#include "VariantManagerContent_enums.hpp"

struct FCapturedPropSegment
{
    FString PropertyName;
    int32 PropertyIndex;
    FString ComponentName;

};

struct FFunctionCaller
{
    FName FunctionName;

};

struct FVariantDependency
{
    TSoftObjectPtr<UVariantSet> VariantSet;
    TSoftObjectPtr<UVariant> Variant;
    bool bEnabled;

};

class ALevelVariantSetsActor : public AActor
{
    FSoftObjectPath LevelVariantSets;
    TMap<class UClass*, class ULevelVariantSetsFunctionDirector*> DirectorInstances;

    bool SwitchOnVariantByName(FString VariantSetName, FString VariantName);
    bool SwitchOnVariantByIndex(int32 VariantSetIndex, int32 VariantIndex);
    void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);
    class ULevelVariantSets* GetLevelVariantSets(bool bLoad);
};

class ASwitchActor : public AActor
{
    class USceneComponent* SceneComponent;
    int32 LastSelectedOption;

    void SelectOption(int32 OptionIndex);
    int32 GetSelectedOption();
    TArray<class AActor*> GetOptions();
};

class ULevelVariantSets : public UObject
{
    UClass* DirectorClass;
    TArray<class UVariantSet*> VariantSets;

    class UVariantSet* GetVariantSetByName(FString VariantSetName);
    class UVariantSet* GetVariantSet(int32 VariantSetIndex);
    int32 GetNumVariantSets();
};

class ULevelVariantSetsFunctionDirector : public UObject
{
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

class UPropertyValueTransform : public UPropertyValue
{
};

class UPropertyValueVisibility : public UPropertyValue
{
};

class UVariant : public UObject
{
    TArray<FVariantDependency> Dependencies;
    FText DisplayText;
    TArray<class UVariantObjectBinding*> ObjectBindings;
    class UTexture2D* Thumbnail;

    void SwitchOn();
    void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);
    void SetThumbnailFromFile(FString FilePath);
    void SetThumbnailFromEditorViewport();
    void SetThumbnailFromCamera(class UObject* WorldContextObject, const FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);
    void SetDisplayText(const FText& NewDisplayText);
    void SetDependency(int32 Index, FVariantDependency& Dependency);
    bool IsActive();
    class UTexture2D* GetThumbnail();
    class UVariantSet* GetParent();
    int32 GetNumDependencies();
    int32 GetNumActors();
    FText GetDisplayText();
    TArray<class UVariant*> GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);
    FVariantDependency GetDependency(int32 Index);
    class AActor* GetActor(int32 ActorIndex);
    void DeleteDependency(int32 Index);
    int32 AddDependency(FVariantDependency& Dependency);
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
    class UTexture2D* Thumbnail;

    void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);
    void SetThumbnailFromFile(FString FilePath);
    void SetThumbnailFromEditorViewport();
    void SetThumbnailFromCamera(class UObject* WorldContextObject, const FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);
    void SetDisplayText(const FText& NewDisplayText);
    class UVariant* GetVariantByName(FString VariantName);
    class UVariant* GetVariant(int32 VariantIndex);
    class UTexture2D* GetThumbnail();
    class ULevelVariantSets* GetParent();
    int32 GetNumVariants();
    FText GetDisplayText();
};

#endif
