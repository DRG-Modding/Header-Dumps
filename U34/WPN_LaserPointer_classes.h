// BlueprintGeneratedClass WPN_LaserPointer.WPN_LaserPointer_C
// Size: 0x5b8 (Inherited: 0x518)
struct AWPN_LaserPointer_C : ALaserPointerItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x518(0x08)
	struct UFirstPersonWidgetComponent* FirstPersonWidget; // 0x520(0x08)
	struct USceneComponent* FPTransform; // 0x528(0x08)
	struct UStaticMeshComponent* LightBeam_Cylinder; // 0x530(0x08)
	struct USceneComponent* LightBeam; // 0x538(0x08)
	struct UAudioComponent* LaserLight_On_Cue; // 0x540(0x08)
	struct UCrosshairAggregator* CrosshairAggregator; // 0x548(0x08)
	struct USceneComponent* TPTransform; // 0x550(0x08)
	struct UHUD_LaserPointerDisplay_C* HUD; // 0x558(0x08)
	float Delay; // 0x560(0x04)
	char UnknownData_564[0x4]; // 0x564(0x04)
	struct UMaterialInstanceDynamic* BackgroundMaterial; // 0x568(0x08)
	struct FLinearColor BackgroundDefaultColor; // 0x570(0x10)
	struct TArray<struct ABP_PointOfInterest_C*> PointsOfInterest; // 0x580(0x10)
	struct UTexture2D* PreviousPOI; // 0x590(0x08)
	float PreviousPOITime; // 0x598(0x04)
	char UnknownData_59C[0x4]; // 0x59c(0x04)
	struct UAudioComponent* StartStop; // 0x5a0(0x08)
	struct FGuid PreviousLookAtID; // 0x5a8(0x10)

	void SetLaserBeamMaterial(struct APlayerCharacter* InCharacter); // Function WPN_LaserPointer.WPN_LaserPointer_C.SetLaserBeamMaterial
	void SetBeamVisibility(bool bNewVisibility); // Function WPN_LaserPointer.WPN_LaserPointer_C.SetBeamVisibility
	void CanPlacePOI(struct FVector Location, struct UTexture* Icon, bool Can Place); // Function WPN_LaserPointer.WPN_LaserPointer_C.CanPlacePOI
	void UpdateBackgroundColor(); // Function WPN_LaserPointer.WPN_LaserPointer_C.UpdateBackgroundColor
	void SetBackgroundColor(struct FLinearColor Value); // Function WPN_LaserPointer.WPN_LaserPointer_C.SetBackgroundColor
	void Adjust Beam(); // Function WPN_LaserPointer.WPN_LaserPointer_C.Adjust Beam
	void GetPointTransform(struct FTransform PointTransform); // Function WPN_LaserPointer.WPN_LaserPointer_C.GetPointTransform
	void UserConstructionScript(); // Function WPN_LaserPointer.WPN_LaserPointer_C.UserConstructionScript
	void RecieveUnequipped(); // Function WPN_LaserPointer.WPN_LaserPointer_C.RecieveUnequipped
	void BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature(struct UUserWidget* Crosshair); // Function WPN_LaserPointer.WPN_LaserPointer_C.BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature
	void OnPointOfInterest(struct AActor* TargetActor, struct FVector TargetLocation, struct UTexture2D* TargetIcon); // Function WPN_LaserPointer.WPN_LaserPointer_C.OnPointOfInterest
	void ReceiveBeginPlay(); // Function WPN_LaserPointer.WPN_LaserPointer_C.ReceiveBeginPlay
	void ToggleLaserVisible(bool aVisible); // Function WPN_LaserPointer.WPN_LaserPointer_C.ToggleLaserVisible
	void AddedToInventory(struct APlayerCharacter* ItemOwner); // Function WPN_LaserPointer.WPN_LaserPointer_C.AddedToInventory
	void OnScanComplete(); // Function WPN_LaserPointer.WPN_LaserPointer_C.OnScanComplete
	void OnMarkerPlaced_Event(struct FVector Location, struct FText Name, struct FLinearColor Color, struct AActor* Target, enum class ELaserPointerTargetType TypeOfTarget); // Function WPN_LaserPointer.WPN_LaserPointer_C.OnMarkerPlaced_Event
	void RecieveEquipped(); // Function WPN_LaserPointer.WPN_LaserPointer_C.RecieveEquipped
	void OnPOIDestroyed(struct AActor* DestroyedActor); // Function WPN_LaserPointer.WPN_LaserPointer_C.OnPOIDestroyed
	void ReceiveTick(float DeltaSeconds); // Function WPN_LaserPointer.WPN_LaserPointer_C.ReceiveTick
	void ExecuteUbergraph_WPN_LaserPointer(int32_t EntryPoint); // Function WPN_LaserPointer.WPN_LaserPointer_C.ExecuteUbergraph_WPN_LaserPointer
};

