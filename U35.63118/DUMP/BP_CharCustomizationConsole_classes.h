// BlueprintGeneratedClass BP_CharCustomizationConsole.BP_CharCustomizationConsole_C
// Size: 0x2a0 (Inherited: 0x220)
struct ABP_CharCustomizationConsole_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UWidgetComponent* Widget3; // 0x228(0x08)
	UStaticMeshComponent* Mesh_Monitor4; // 0x230(0x08)
	UWidgetComponent* Widget1; // 0x238(0x08)
	UStaticMeshComponent* Mesh_Monitor2; // 0x240(0x08)
	UStaticMeshComponent* Mesh_LockerLeft1; // 0x248(0x08)
	UStaticMeshComponent* Mesh_LockerRight1; // 0x250(0x08)
	UChildActorComponent* ChildActor; // 0x258(0x08)
	UStaticMeshComponent* Mesh_LockerRight; // 0x260(0x08)
	UStaticMeshComponent* Mesh_LockerLeft; // 0x268(0x08)
	UWidgetComponent* Widget; // 0x270(0x08)
	UStaticMeshComponent* Mesh_Monitor; // 0x278(0x08)
	UTextRenderComponent* TextRender; // 0x280(0x08)
	UBoxComponent* InteractionCollider; // 0x288(0x08)
	UInstantUsable* InstantUsable; // 0x290(0x08)
	USceneComponent* DefaultSceneRoot; // 0x298(0x08)

	void ReceiveBeginPlay();
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void ExecuteUbergraph_BP_CharCustomizationConsole(int32_t EntryPoint);
};

