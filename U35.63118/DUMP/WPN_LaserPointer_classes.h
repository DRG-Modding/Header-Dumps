// BlueprintGeneratedClass WPN_LaserPointer.WPN_LaserPointer_C
// Size: 0x5d8 (Inherited: 0x538)
struct AWPN_LaserPointer_C : ALaserPointerItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x538(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x540(0x08)
	USceneComponent* FPTransform; // 0x548(0x08)
	UStaticMeshComponent* LightBeam_Cylinder; // 0x550(0x08)
	USceneComponent* LightBeam; // 0x558(0x08)
	UAudioComponent* LaserLight_On_Cue; // 0x560(0x08)
	UCrosshairAggregator* CrosshairAggregator; // 0x568(0x08)
	USceneComponent* TPTransform; // 0x570(0x08)
	UHUD_LaserPointerDisplay_C* HUD; // 0x578(0x08)
	float Delay; // 0x580(0x04)
	UMaterialInstanceDynamic* BackgroundMaterial; // 0x588(0x08)
	FLinearColor BackgroundDefaultColor; // 0x590(0x10)
	TArray<ABP_PointOfInterest_C*> PointsOfInterest; // 0x5a0(0x10)
	UTexture2D* PreviousPOI; // 0x5b0(0x08)
	float PreviousPOITime; // 0x5b8(0x04)
	UAudioComponent* StartStop; // 0x5c0(0x08)
	FGuid PreviousLookAtID; // 0x5c8(0x10)

	void SetLaserBeamMaterial(APlayerCharacter* InCharacter);
	void SetBeamVisibility(bool bNewVisibility);
	void CanPlacePOI(FVector Location, UTexture* Icon, bool Can Place);
	void UpdateBackgroundColor();
	void SetBackgroundColor(FLinearColor Value);
	void Adjust Beam();
	void GetPointTransform(FTransform PointTransform);
	void UserConstructionScript();
	void RecieveUnequipped();
	void BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature(UUserWidget* Crosshair);
	void OnPointOfInterest(AActor* TargetActor, FVector TargetLocation, UTexture2D* TargetIcon);
	void ReceiveBeginPlay();
	void ToggleLaserVisible(bool aVisible);
	void AddedToInventory(APlayerCharacter* ItemOwner);
	void OnScanComplete();
	void OnMarkerPlaced_Event(FVector Location, FText Name, FLinearColor Color, AActor* Target, enum class ELaserPointerTargetType TypeOfTarget);
	void RecieveEquipped();
	void OnPOIDestroyed(AActor* DestroyedActor);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_WPN_LaserPointer(int32_t EntryPoint);
};

