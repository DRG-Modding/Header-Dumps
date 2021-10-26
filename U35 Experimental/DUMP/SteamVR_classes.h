// Class SteamVR.SteamVRChaperoneComponent
// Size: 0xd8 (Inherited: 0xb0)
struct USteamVRChaperoneComponent : UActorComponent {
	FMulticastInlineDelegate OnLeaveBounds; // 0xb0(0x10)
	FMulticastInlineDelegate OnReturnToBounds; // 0xc0(0x10)

	void SteamVRChaperoneEvent__DelegateSignature();
	TArray<FVector> GetBounds();
};

// Class SteamVR.SteamVRFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct USteamVRFunctionLibrary : UBlueprintFunctionLibrary {

	void GetValidTrackedDeviceIds(enum class ESteamVRTrackedDeviceType DeviceType, TArray<int32_t> OutTrackedDeviceIds);
	bool GetTrackedDevicePositionAndOrientation(int32_t DeviceID, FVector OutPosition, FRotator OutOrientation);
	bool GetHandPositionAndOrientation(int32_t ControllerIndex, enum class EControllerHand hand, FVector OutPosition, FRotator OutOrientation);
};

// Class SteamVR.SteamVRHQStereoLayerShape
// Size: 0x38 (Inherited: 0x28)
struct USteamVRHQStereoLayerShape : UStereoLayerShapeQuad {
	bool bCurved; // 0x28(0x01)
	bool bAntiAlias; // 0x29(0x01)
	float AutoCurveMinDistance; // 0x2c(0x04)
	float AutoCurveMaxDistance; // 0x30(0x04)

	void SetCurved(bool InCurved);
	void SetAutoCurveMinDistance(float InDistance);
	void SetAutoCurveMaxDistance(float InDistance);
	void SetAntiAlias(bool InAntiAlias);
};

