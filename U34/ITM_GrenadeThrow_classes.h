// BlueprintGeneratedClass ITM_GrenadeThrow.ITM_GrenadeThrow_C
// Size: 0x468 (Inherited: 0x390)
struct AITM_GrenadeThrow_C : AThrownGrenadeItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct UBillboardComponent* Billboard; // 0x398(0x08)
	struct USceneComponent* EndPoint; // 0x3a0(0x08)
	struct USplineMeshComponent* SplineMesh; // 0x3a8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3b0(0x08)
	struct FVector StartTangent; // 0x3b8(0x0c)
	struct FVector EndTangent; // 0x3c4(0x0c)
	struct FVector EndLocation; // 0x3d0(0x0c)
	char UnknownData_3DC[0x4]; // 0x3dc(0x04)
	struct FRuntimeFloatCurve ScaleCurve; // 0x3e0(0x88)

	void UpdateSpline(struct TArray<struct FVector> Array, float DeltaTime); // Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.UpdateSpline
	void ReceiveTick(float DeltaSeconds); // Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ReceiveTick
	void RecieveEquipped(); // Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.RecieveEquipped
	void RecieveUnequipped(); // Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.RecieveUnequipped
	void ReceiveBeginPlay(); // Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ReceiveBeginPlay
	void Set Is Visible(bool Visible); // Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.Set Is Visible
	void GrenadeThrown(); // Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.GrenadeThrown
	void ExecuteUbergraph_ITM_GrenadeThrow(int32_t EntryPoint); // Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ExecuteUbergraph_ITM_GrenadeThrow
};

