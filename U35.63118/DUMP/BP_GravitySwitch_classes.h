// BlueprintGeneratedClass BP_GravitySwitch.BP_GravitySwitch_C
// Size: 0x298 (Inherited: 0x220)
struct ABP_GravitySwitch_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UWidgetComponent* Widget; // 0x228(0x08)
	UAudioComponent* Alarm; // 0x230(0x08)
	UStaticMeshComponent* ButtonSphere; // 0x238(0x08)
	UBoxComponent* Box; // 0x240(0x08)
	UInstantUsable* InstantUsable; // 0x248(0x08)
	USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	float Timeline_0_LightIntensity_2CB0110A43F837100C1A68A2642737BF; // 0x258(0x04)
	enum class ETimelineDirection Timeline_0__Direction_2CB0110A43F837100C1A68A2642737BF; // 0x25c(0x01)
	UTimelineComponent* Timeline_1; // 0x260(0x08)
	int32_t Normal Gravity; // 0x268(0x04)
	bool Can Use; // 0x26c(0x01)
	ASkyLight* SkyLight; // 0x270(0x08)
	FLinearColor OriginalSkylightClour; // 0x278(0x10)
	float OriginalSkyLightIntensity; // 0x288(0x04)
	APlayerCharacter* User; // 0x290(0x08)

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void ReceiveBeginPlay();
	void ChangeSkyLight();
	void ResetSkyLight();
	void ExecuteUbergraph_BP_GravitySwitch(int32_t EntryPoint);
};

