// BlueprintGeneratedClass BP_StabberVine_Claw.BP_StabberVine_Claw_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_StabberVine_Claw_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UEnemyComponent* enemy; // 0x228(0x08)
	struct UStaticMeshComponent* SM_StabberVine_Blade; // 0x230(0x08)
	struct UMaterialInstanceDynamic* Material; // 0x238(0x08)
	struct FLinearColor DissolveTint1; // 0x240(0x10)
	struct FLinearColor DissolveTint2; // 0x250(0x10)
	float DissolveDuration; // 0x260(0x04)

	void ReceiveBeginPlay(); // Function BP_StabberVine_Claw.BP_StabberVine_Claw_C.ReceiveBeginPlay
	void Dissolve(); // Function BP_StabberVine_Claw.BP_StabberVine_Claw_C.Dissolve
	void AddImpulse(); // Function BP_StabberVine_Claw.BP_StabberVine_Claw_C.AddImpulse
	void ExecuteUbergraph_BP_StabberVine_Claw(int32_t EntryPoint); // Function BP_StabberVine_Claw.BP_StabberVine_Claw_C.ExecuteUbergraph_BP_StabberVine_Claw
};

