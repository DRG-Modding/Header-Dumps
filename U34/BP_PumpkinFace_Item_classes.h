// BlueprintGeneratedClass BP_PumpkinFace_Item.BP_PumpkinFace_Item_C
// Size: 0x2a8 (Inherited: 0x279)
struct ABP_PumpkinFace_Item_C : ABP_Pumpkin_Item_C {
	char UnknownData_279[0x7]; // 0x279(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USphereComponent* ProximityTrigger; // 0x288(0x08)
	struct UPointLightComponent* PointLight; // 0x290(0x08)
	float Timeline_0_LightIntensity_7354DC9243CD117360DDC3823BE25B3E; // 0x298(0x04)
	char Timeline_0__Direction_7354DC9243CD117360DDC3823BE25B3E; // 0x29c(0x01)
	char UnknownData_29D[0x3]; // 0x29d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2a0(0x08)

	void Timeline_0__FinishedFunc(); // Function BP_PumpkinFace_Item.BP_PumpkinFace_Item_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_PumpkinFace_Item.BP_PumpkinFace_Item_C.Timeline_0__UpdateFunc
	void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_PumpkinFace_Item.BP_PumpkinFace_Item_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_PumpkinFace_Item.BP_PumpkinFace_Item_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void ExecuteUbergraph_BP_PumpkinFace_Item(int32_t EntryPoint); // Function BP_PumpkinFace_Item.BP_PumpkinFace_Item_C.ExecuteUbergraph_BP_PumpkinFace_Item
};

