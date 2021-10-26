// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
// Size: 0x10 (Inherited: 0x00)
struct FMagicLeapSharedWorldSharedData {
	UPROPERTY(BlueprintReadWrite) TArray<FGuid> PinIDs; 
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
// Size: 0x10 (Inherited: 0x00)
struct FMagicLeapSharedWorldAlignmentTransforms {
	UPROPERTY(BlueprintReadWrite) TArray<FTransform> AlignmentTransforms; 
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
// Size: 0x10 (Inherited: 0x00)
struct FMagicLeapSharedWorldLocalData {
	UPROPERTY(BlueprintReadWrite) TArray<FMagicLeapSharedWorldPinData> LocalPins; 
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldPinData
// Size: 0x20 (Inherited: 0x00)
struct FMagicLeapSharedWorldPinData {
	UPROPERTY(BlueprintReadWrite) FGuid PinID; 
	UPROPERTY(BlueprintReadWrite) FMagicLeapARPinState PinState; 
};

