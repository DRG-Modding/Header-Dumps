// BlueprintGeneratedClass BP_SeeYouInHellField.BP_SeeYouInHellField_C
// Size: 0x290 (Inherited: 0x280)
struct ABP_SeeYouInHellField_C : ABP_Grenade_IFG_Area_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	USphereComponent* FearSphere; // 0x288(0x08)

	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__FearSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void FearMe(AActor* FearTarget);
	void ExecuteUbergraph_BP_SeeYouInHellField(int32_t EntryPoint);
};

