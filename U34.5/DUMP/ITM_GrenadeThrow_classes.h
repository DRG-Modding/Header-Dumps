// BlueprintGeneratedClass ITM_GrenadeThrow.ITM_GrenadeThrow_C
// Size: 0x468 (Inherited: 0x390)
struct AITM_GrenadeThrow_C : AThrownGrenadeItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	UBillboardComponent* Billboard; // 0x398(0x08)
	USceneComponent* EndPoint; // 0x3a0(0x08)
	USplineMeshComponent* SplineMesh; // 0x3a8(0x08)
	USceneComponent* DefaultSceneRoot; // 0x3b0(0x08)
	FVector StartTangent; // 0x3b8(0x0c)
	FVector EndTangent; // 0x3c4(0x0c)
	FVector EndLocation; // 0x3d0(0x0c)
	FRuntimeFloatCurve ScaleCurve; // 0x3e0(0x88)

	void UpdateSpline(TArray<FVector> Array, float DeltaTime);
	void ReceiveTick(float DeltaSeconds);
	void RecieveEquipped();
	void RecieveUnequipped();
	void ReceiveBeginPlay();
	void Set Is Visible(bool Visible);
	void GrenadeThrown();
	void ExecuteUbergraph_ITM_GrenadeThrow(int32_t EntryPoint);
};

