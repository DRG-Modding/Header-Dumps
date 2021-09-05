// BlueprintGeneratedClass WPN_OilExtractor.WPN_OilExtractor_C
// Size: 0x5c8 (Inherited: 0x560)
struct AWPN_OilExtractor_C : AWPN_Extractor_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	UAudioComponent* OilExtractorHitPositive; // 0x568(0x08)
	UAudioComponent* OilExtractorHitNegative; // 0x570(0x08)
	UWidgetComponent* Widget_OilReadoutBottom_Ground; // 0x578(0x08)
	UWidgetComponent* Widget_OilReadoutTop_Ground; // 0x580(0x08)
	UWidgetComponent* Widget_OilReadoutBottom_TP; // 0x588(0x08)
	UWidgetComponent* Widget_OilReadoutTop_TP; // 0x590(0x08)
	UFirstPersonWidgetComponent* Widget_OilReadoutBottom; // 0x598(0x08)
	UFirstPersonWidgetComponent* Widget_OilReadoutTop; // 0x5a0(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x5a8(0x08)
	UActorTrackingComponent* ActorTracking; // 0x5b0(0x08)
	USoundCue* ImpactSound; // 0x5b8(0x08)
	UMaterialInstanceDynamic* FuelbarMat; // 0x5c0(0x08)

	void SetFilledUI(UWidgetComponent* Widget, float FilledAmount);
	void OnCurrentLoadChanged(float Load);
	void ReceiveBeginPlay();
	void RecieveEquipped();
	void RecieveUnequipped();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__DroppedCollider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void OnValidSurfaceChanged(bool IsValid);
	void ExecuteUbergraph_WPN_OilExtractor(int32_t EntryPoint);
};

