// BlueprintGeneratedClass BP_Spider_Leg_Base.BP_Spider_Leg_Base_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_Spider_Leg_Base_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	UStaticMeshComponent* Mesh; // 0x230(0x08)
	UBoxComponent* Box; // 0x238(0x08)
	USceneComponent* DefaultSceneRoot; // 0x240(0x08)

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Spider_Leg_Base(int32_t EntryPoint);
};

