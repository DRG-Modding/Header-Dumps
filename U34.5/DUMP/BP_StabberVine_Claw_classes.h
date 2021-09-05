// BlueprintGeneratedClass BP_StabberVine_Claw.BP_StabberVine_Claw_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_StabberVine_Claw_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UEnemyComponent* enemy; // 0x228(0x08)
	UStaticMeshComponent* SM_StabberVine_Blade; // 0x230(0x08)
	UMaterialInstanceDynamic* Material; // 0x238(0x08)
	FLinearColor DissolveTint1; // 0x240(0x10)
	FLinearColor DissolveTint2; // 0x250(0x10)
	float DissolveDuration; // 0x260(0x04)

	void ReceiveBeginPlay();
	void Dissolve();
	void AddImpulse();
	void ExecuteUbergraph_BP_StabberVine_Claw(int32_t EntryPoint);
};

