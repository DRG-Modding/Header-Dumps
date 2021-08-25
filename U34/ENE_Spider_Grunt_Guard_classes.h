// BlueprintGeneratedClass ENE_Spider_Grunt_Guard.ENE_Spider_Grunt_Guard_C
// Size: 0x4e8 (Inherited: 0x4c8)
struct AENE_Spider_Grunt_Guard_C : AENE_Spider_Grunt_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c8(0x08)
	struct UMeleeAttackComponent* MeleeAttack; // 0x4d0(0x08)
	struct UArmorHealthDamageComponent* ArmorHealthDamage; // 0x4d8(0x08)
	struct UInDangerComponent* InDanger; // 0x4e0(0x08)

	void PlayGuardAnimation(struct USpiderAnimInstance* AnimInstance, float Duration, float outDuration); // Function ENE_Spider_Grunt_Guard.ENE_Spider_Grunt_Guard_C.PlayGuardAnimation
	void BndEvt__InDanger_K2Node_ComponentBoundEvent_0_IsInDangerSig__DelegateSignature(); // Function ENE_Spider_Grunt_Guard.ENE_Spider_Grunt_Guard_C.BndEvt__InDanger_K2Node_ComponentBoundEvent_0_IsInDangerSig__DelegateSignature
	void MakeElite(); // Function ENE_Spider_Grunt_Guard.ENE_Spider_Grunt_Guard_C.MakeElite
	void ExecuteUbergraph_ENE_Spider_Grunt_Guard(int32_t EntryPoint); // Function ENE_Spider_Grunt_Guard.ENE_Spider_Grunt_Guard_C.ExecuteUbergraph_ENE_Spider_Grunt_Guard
};

