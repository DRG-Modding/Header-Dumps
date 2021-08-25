// BlueprintGeneratedClass BP_FragilePlatform.BP_FragilePlatform_C
// Size: 0x294 (Inherited: 0x220)
struct ABP_FragilePlatform_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* Box; // 0x228(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x230(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x238(0x08)
	struct UStaticMeshComponent* Platform; // 0x240(0x08)
	struct USceneComponent* Default root component; // 0x248(0x08)
	char Crack_Timer__Direction_1ABFCC984A9885503D55279811F213E0; // 0x250(0x01)
	char UnknownData_251[0x7]; // 0x251(0x07)
	struct UTimelineComponent* Crack Timer; // 0x258(0x08)
	float Time Between Cracks; // 0x260(0x04)
	char CrackState; // 0x264(0x01)
	char UnknownData_265[0x3]; // 0x265(0x03)
	int32_t Amount of actors inside; // 0x268(0x04)
	float Time until next crack; // 0x26c(0x04)
	struct UStaticMesh* Stage1 mesh; // 0x270(0x08)
	struct UStaticMesh* Stage2 mesh; // 0x278(0x08)
	struct UStaticMesh* Stage3 mesh; // 0x280(0x08)
	float current state health; // 0x288(0x04)
	float State max health; // 0x28c(0x04)
	float Rotation; // 0x290(0x04)

	void OnRep_Rotation(); // Function BP_FragilePlatform.BP_FragilePlatform_C.OnRep_Rotation
	void Take damage on state(float Damage); // Function BP_FragilePlatform.BP_FragilePlatform_C.Take damage on state
	void OnRep_CrackState(); // Function BP_FragilePlatform.BP_FragilePlatform_C.OnRep_CrackState
	void Crack Timer__FinishedFunc(); // Function BP_FragilePlatform.BP_FragilePlatform_C.Crack Timer__FinishedFunc
	void Crack Timer__UpdateFunc(); // Function BP_FragilePlatform.BP_FragilePlatform_C.Crack Timer__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_FragilePlatform.BP_FragilePlatform_C.ReceiveBeginPlay
	void Break Platform(); // Function BP_FragilePlatform.BP_FragilePlatform_C.Break Platform
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_FragilePlatform.BP_FragilePlatform_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_FragilePlatform.BP_FragilePlatform_C.BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_5_DamageSig__DelegateSignature(float amount); // Function BP_FragilePlatform.BP_FragilePlatform_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_5_DamageSig__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_6_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_FragilePlatform.BP_FragilePlatform_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_6_DeathSig__DelegateSignature
	void ExecuteUbergraph_BP_FragilePlatform(int32_t EntryPoint); // Function BP_FragilePlatform.BP_FragilePlatform_C.ExecuteUbergraph_BP_FragilePlatform
};

