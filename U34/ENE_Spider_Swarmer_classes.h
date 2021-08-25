// BlueprintGeneratedClass ENE_Spider_Swarmer.ENE_Spider_Swarmer_C
// Size: 0x480 (Inherited: 0x450)
struct AENE_Spider_Swarmer_C : AENE_PF_SpiderBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UMeleeAttackComponent* JumpAttack; // 0x458(0x08)
	struct UMeleeAttackComponent* MeleeAttack; // 0x460(0x08)
	struct UStaticMeshComponent* DropShadow; // 0x468(0x08)
	struct USphereComponent* Sphere; // 0x470(0x08)
	struct UAudioComponent* SwarmerIdle_Cue; // 0x478(0x08)

	void OnDeathBase(); // Function ENE_Spider_Swarmer.ENE_Spider_Swarmer_C.OnDeathBase
	void ChangeVisibility(bool bNewVisibility); // Function ENE_Spider_Swarmer.ENE_Spider_Swarmer_C.ChangeVisibility
	void OnFrozen(struct AActor* Source); // Function ENE_Spider_Swarmer.ENE_Spider_Swarmer_C.OnFrozen
	void ExecuteUbergraph_ENE_Spider_Swarmer(int32_t EntryPoint); // Function ENE_Spider_Swarmer.ENE_Spider_Swarmer_C.ExecuteUbergraph_ENE_Spider_Swarmer
};

