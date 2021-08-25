// BlueprintGeneratedClass WPN_OilExtractor.WPN_OilExtractor_C
// Size: 0x5c8 (Inherited: 0x560)
struct AWPN_OilExtractor_C : AWPN_Extractor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UAudioComponent* OilExtractorHitPositive; // 0x568(0x08)
	struct UAudioComponent* OilExtractorHitNegative; // 0x570(0x08)
	struct UWidgetComponent* Widget_OilReadoutBottom_Ground; // 0x578(0x08)
	struct UWidgetComponent* Widget_OilReadoutTop_Ground; // 0x580(0x08)
	struct UWidgetComponent* Widget_OilReadoutBottom_TP; // 0x588(0x08)
	struct UWidgetComponent* Widget_OilReadoutTop_TP; // 0x590(0x08)
	struct UFirstPersonWidgetComponent* Widget_OilReadoutBottom; // 0x598(0x08)
	struct UFirstPersonWidgetComponent* Widget_OilReadoutTop; // 0x5a0(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x5a8(0x08)
	struct UActorTrackingComponent* ActorTracking; // 0x5b0(0x08)
	struct USoundCue* ImpactSound; // 0x5b8(0x08)
	struct UMaterialInstanceDynamic* FuelbarMat; // 0x5c0(0x08)

	void SetFilledUI(struct UWidgetComponent* Widget, float FilledAmount); // Function WPN_OilExtractor.WPN_OilExtractor_C.SetFilledUI
	void OnCurrentLoadChanged(float Load); // Function WPN_OilExtractor.WPN_OilExtractor_C.OnCurrentLoadChanged
	void ReceiveBeginPlay(); // Function WPN_OilExtractor.WPN_OilExtractor_C.ReceiveBeginPlay
	void RecieveEquipped(); // Function WPN_OilExtractor.WPN_OilExtractor_C.RecieveEquipped
	void RecieveUnequipped(); // Function WPN_OilExtractor.WPN_OilExtractor_C.RecieveUnequipped
	void ReceiveTick(float DeltaSeconds); // Function WPN_OilExtractor.WPN_OilExtractor_C.ReceiveTick
	void BndEvt__DroppedCollider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function WPN_OilExtractor.WPN_OilExtractor_C.BndEvt__DroppedCollider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void OnValidSurfaceChanged(bool IsValid); // Function WPN_OilExtractor.WPN_OilExtractor_C.OnValidSurfaceChanged
	void ExecuteUbergraph_WPN_OilExtractor(int32_t EntryPoint); // Function WPN_OilExtractor.WPN_OilExtractor_C.ExecuteUbergraph_WPN_OilExtractor
};

