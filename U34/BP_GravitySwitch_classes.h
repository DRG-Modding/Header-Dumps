// BlueprintGeneratedClass BP_GravitySwitch.BP_GravitySwitch_C
// Size: 0x298 (Inherited: 0x220)
struct ABP_GravitySwitch_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UWidgetComponent* Widget; // 0x228(0x08)
	struct UAudioComponent* Alarm; // 0x230(0x08)
	struct UStaticMeshComponent* ButtonSphere; // 0x238(0x08)
	struct UBoxComponent* Box; // 0x240(0x08)
	struct UInstantUsable* InstantUsable; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	float Timeline_0_LightIntensity_2CB0110A43F837100C1A68A2642737BF; // 0x258(0x04)
	char Timeline_0__Direction_2CB0110A43F837100C1A68A2642737BF; // 0x25c(0x01)
	char UnknownData_25D[0x3]; // 0x25d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x260(0x08)
	int32_t Normal Gravity; // 0x268(0x04)
	bool Can Use; // 0x26c(0x01)
	char UnknownData_26D[0x3]; // 0x26d(0x03)
	struct ASkyLight* SkyLight; // 0x270(0x08)
	struct FLinearColor OriginalSkylightClour; // 0x278(0x10)
	float OriginalSkyLightIntensity; // 0x288(0x04)
	char UnknownData_28C[0x4]; // 0x28c(0x04)
	struct APlayerCharacter* User; // 0x290(0x08)

	void Timeline_0__FinishedFunc(); // Function BP_GravitySwitch.BP_GravitySwitch_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_GravitySwitch.BP_GravitySwitch_C.Timeline_0__UpdateFunc
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_GravitySwitch.BP_GravitySwitch_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_GravitySwitch.BP_GravitySwitch_C.ReceiveBeginPlay
	void ChangeSkyLight(); // Function BP_GravitySwitch.BP_GravitySwitch_C.ChangeSkyLight
	void ResetSkyLight(); // Function BP_GravitySwitch.BP_GravitySwitch_C.ResetSkyLight
	void ExecuteUbergraph_BP_GravitySwitch(int32_t EntryPoint); // Function BP_GravitySwitch.BP_GravitySwitch_C.ExecuteUbergraph_BP_GravitySwitch
};

