// BlueprintGeneratedClass BP_SeeYouInHellField.BP_SeeYouInHellField_C
// Size: 0x290 (Inherited: 0x280)
struct ABP_SeeYouInHellField_C : ABP_Grenade_IFG_Area_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USphereComponent* FearSphere; // 0x288(0x08)

	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_SeeYouInHellField.BP_SeeYouInHellField_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__FearSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_SeeYouInHellField.BP_SeeYouInHellField_C.BndEvt__FearSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	void FearMe(struct AActor* FearTarget); // Function BP_SeeYouInHellField.BP_SeeYouInHellField_C.FearMe
	void ExecuteUbergraph_BP_SeeYouInHellField(int32_t EntryPoint); // Function BP_SeeYouInHellField.BP_SeeYouInHellField_C.ExecuteUbergraph_BP_SeeYouInHellField
};

