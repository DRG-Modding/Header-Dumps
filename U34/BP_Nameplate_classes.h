// BlueprintGeneratedClass BP_Nameplate.BP_Nameplate_C
// Size: 0x288 (Inherited: 0x220)
struct ABP_Nameplate_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UWidgetComponent* Nameplate Widget; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct AActor* Look At Target; // 0x238(0x08)
	struct FNameplateConfig Nameplate; // 0x240(0x28)
	struct FLinearColor Dev Color; // 0x268(0x10)
	struct FLinearColor Chosen Color; // 0x278(0x10)

	void Setup Nameplate(struct FNameplateConfig Nameplate); // Function BP_Nameplate.BP_Nameplate_C.Setup Nameplate
	void Setup Nameplate Event(); // Function BP_Nameplate.BP_Nameplate_C.Setup Nameplate Event
	void Event On Parent Destroyed(struct AActor* DestroyedActor); // Function BP_Nameplate.BP_Nameplate_C.Event On Parent Destroyed
	void ReceiveBeginPlay(); // Function BP_Nameplate.BP_Nameplate_C.ReceiveBeginPlay
	void ReceiveTick(float DeltaSeconds); // Function BP_Nameplate.BP_Nameplate_C.ReceiveTick
	void ExecuteUbergraph_BP_Nameplate(int32_t EntryPoint); // Function BP_Nameplate.BP_Nameplate_C.ExecuteUbergraph_BP_Nameplate
};

