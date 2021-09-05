// BlueprintGeneratedClass BP_PumpkinFace_Item.BP_PumpkinFace_Item_C
// Size: 0x2a8 (Inherited: 0x279)
struct ABP_PumpkinFace_Item_C : ABP_Pumpkin_Item_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	USphereComponent* ProximityTrigger; // 0x288(0x08)
	UPointLightComponent* PointLight; // 0x290(0x08)
	float Timeline_0_LightIntensity_7354DC9243CD117360DDC3823BE25B3E; // 0x298(0x04)
	enum class ETimelineDirection Timeline_0__Direction_7354DC9243CD117360DDC3823BE25B3E; // 0x29c(0x01)
	UTimelineComponent* Timeline_1; // 0x2a0(0x08)

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void ExecuteUbergraph_BP_PumpkinFace_Item(int32_t EntryPoint);
};

