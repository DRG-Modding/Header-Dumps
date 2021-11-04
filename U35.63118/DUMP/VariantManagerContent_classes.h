// Class VariantManagerContent.LevelVariantSets
// Size: 0x90 (Inherited: 0x28)
struct ULevelVariantSets : UObject {
	UObject* DirectorClass; // 0x28(0x08)
	TArray<UVariantSet*> VariantSets; // 0x30(0x10)

	UVariantSet* GetVariantSetByName(FString VariantSetName);
	UVariantSet* GetVariantSet(int32_t VariantSetIndex);
	int32_t GetNumVariantSets();
};

// Class VariantManagerContent.LevelVariantSetsActor
// Size: 0x238 (Inherited: 0x220)
struct ALevelVariantSetsActor : AActor {
	FSoftObjectPath LevelVariantSets; // 0x220(0x18)

	bool SwitchOnVariantByName(FString VariantSetName, FString VariantName);
	bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex);
	void SetLevelVariantSets(ULevelVariantSets* InVariantSets);
	ULevelVariantSets* GetLevelVariantSets(bool bLoad);
};

// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// Size: 0x40 (Inherited: 0x28)
struct ULevelVariantSetsFunctionDirector : UObject {
};

// Class VariantManagerContent.PropertyValue
// Size: 0x1b8 (Inherited: 0x28)
struct UPropertyValue : UObject {
	TArray<TFieldPath<FProperty>> Properties; // 0x88(0x10)
	TArray<int32_t> PropertyIndices; // 0x98(0x10)
	TArray<FCapturedPropSegment> CapturedPropSegments; // 0xa8(0x10)
	FString FullDisplayString; // 0xb8(0x10)
	FName PropertySetterName; // 0xc8(0x08)
	TMap<FString, FString> PropertySetterParameterDefaults; // 0xd0(0x50)
	bool bHasRecordedData; // 0x120(0x01)
	UObject* LeafPropertyClass; // 0x128(0x08)
	TArray<char> ValueBytes; // 0x138(0x10)
	enum class EPropertyValueCategory PropCategory; // 0x148(0x01)

	bool HasRecordedData();
	FText GetPropertyTooltip();
	FString GetFullDisplayString();
};

// Class VariantManagerContent.PropertyValueTransform
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueTransform : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueVisibility
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueVisibility : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueColor
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueColor : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueMaterial
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueMaterial : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueOption
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueOption : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueSoftObject
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueSoftObject : UPropertyValue {
};

// Class VariantManagerContent.SwitchActor
// Size: 0x248 (Inherited: 0x220)
struct ASwitchActor : AActor {
	USceneComponent* SceneComponent; // 0x238(0x08)
	int32_t LastSelectedOption; // 0x240(0x04)

	void SelectOption(int32_t OptionIndex);
	int32_t GetSelectedOption();
	TArray<AActor*> GetOptions();
};

// Class VariantManagerContent.Variant
// Size: 0x70 (Inherited: 0x28)
struct UVariant : UObject {
	FText DisplayText; // 0x28(0x18)
	TArray<UVariantObjectBinding*> ObjectBindings; // 0x58(0x10)
	UTexture2D* Thumbnail; // 0x68(0x08)

	void SwitchOn();
	void SetDisplayText(FText NewDisplayText);
	bool IsActive();
	UTexture2D* GetThumbnail();
	int32_t GetNumActors();
	FText GetDisplayText();
	AActor* GetActor(int32_t ActorIndex);
};

// Class VariantManagerContent.VariantObjectBinding
// Size: 0x90 (Inherited: 0x28)
struct UVariantObjectBinding : UObject {
	FString CachedActorLabel; // 0x28(0x10)
	FSoftObjectPath ObjectPtr; // 0x38(0x18)
	LazyObjectProperty LazyObjectPtr; // 0x50(0x1c)
	TArray<UPropertyValue*> CapturedProperties; // 0x70(0x10)
	TArray<FFunctionCaller> FunctionCallers; // 0x80(0x10)
};

// Class VariantManagerContent.VariantSet
// Size: 0x70 (Inherited: 0x28)
struct UVariantSet : UObject {
	FText DisplayText; // 0x28(0x18)
	bool bExpanded; // 0x58(0x01)
	TArray<UVariant*> Variants; // 0x60(0x10)

	void SetDisplayText(FText NewDisplayText);
	UVariant* GetVariantByName(FString VariantName);
	UVariant* GetVariant(int32_t VariantIndex);
	int32_t GetNumVariants();
	FText GetDisplayText();
};

