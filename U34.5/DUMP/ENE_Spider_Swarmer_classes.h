// BlueprintGeneratedClass ENE_Spider_Swarmer.ENE_Spider_Swarmer_C
// Size: 0x480 (Inherited: 0x450)
struct AENE_Spider_Swarmer_C : AENE_PF_SpiderBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	UMeleeAttackComponent* JumpAttack; // 0x458(0x08)
	UMeleeAttackComponent* MeleeAttack; // 0x460(0x08)
	UStaticMeshComponent* DropShadow; // 0x468(0x08)
	USphereComponent* Sphere; // 0x470(0x08)
	UAudioComponent* SwarmerIdle_Cue; // 0x478(0x08)

	void OnDeathBase();
	void ChangeVisibility(bool bNewVisibility);
	void OnFrozen(AActor* Source);
	void ExecuteUbergraph_ENE_Spider_Swarmer(int32_t EntryPoint);
};

