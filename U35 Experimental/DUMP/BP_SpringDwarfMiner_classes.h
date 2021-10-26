// BlueprintGeneratedClass BP_SpringDwarfMiner.BP_SpringDwarfMiner_C
// Size: 0x288 (Inherited: 0x220)
struct ABP_SpringDwarfMiner_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* SM_SpringDwarf_004; // 0x228(0x08)
	UStaticMeshComponent* SM_SpringDwarf001_StandAlone1; // 0x230(0x08)
	UStaticMeshComponent* Sphere; // 0x238(0x08)
	UStaticMeshComponent* SM_SpringDwarf001_Spring; // 0x240(0x08)
	UStaticMeshComponent* SM_SpringDwarf001_StandAlone; // 0x248(0x08)
	UStaticMeshComponent* SM_SpringDwarf001_Legs; // 0x250(0x08)
	UStaticMeshComponent* SM_SpringDwarf001_Torso1; // 0x258(0x08)
	UInstantUsable* InstantUsable; // 0x260(0x08)
	UCapsuleComponent* Capsule; // 0x268(0x08)
	UPhysicsConstraintComponent* PhysicsConstraint; // 0x270(0x08)
	UStaticMeshComponent* Cylinder1; // 0x278(0x08)
	USceneComponent* DefaultSceneRoot; // 0x280(0x08)

	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void ImpulseSpringDwarf();
	void ExecuteUbergraph_BP_SpringDwarfMiner(int32_t EntryPoint);
};

