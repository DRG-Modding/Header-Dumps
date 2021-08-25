// BlueprintGeneratedClass BP_Spider_Leg_Base.BP_Spider_Leg_Base_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_Spider_Leg_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	struct UStaticMeshComponent* Mesh; // 0x230(0x08)
	struct UBoxComponent* Box; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)

	void ReceiveBeginPlay(); // Function BP_Spider_Leg_Base.BP_Spider_Leg_Base_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_Spider_Leg_Base(int32_t EntryPoint); // Function BP_Spider_Leg_Base.BP_Spider_Leg_Base_C.ExecuteUbergraph_BP_Spider_Leg_Base
};

