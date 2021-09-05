// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
// Size: 0x10 (Inherited: 0x00)
struct FMagicLeapSharedWorldSharedData {
	TArray<FGuid> PinIDs; // 0x00(0x10)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
// Size: 0x10 (Inherited: 0x00)
struct FMagicLeapSharedWorldAlignmentTransforms {
	TArray<FTransform> AlignmentTransforms; // 0x00(0x10)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
// Size: 0x10 (Inherited: 0x00)
struct FMagicLeapSharedWorldLocalData {
	TArray<FMagicLeapSharedWorldPinData> LocalPins; // 0x00(0x10)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldPinData
// Size: 0x20 (Inherited: 0x00)
struct FMagicLeapSharedWorldPinData {
	FGuid PinID; // 0x00(0x10)
	FMagicLeapARPinState PinState; // 0x10(0x10)
};

