// BlueprintGeneratedClass ENE_GliderBeast.ENE_GliderBeast_C
// Size: 0x430 (Inherited: 0x3c8)
struct AENE_GliderBeast_C : AFlyingEnemyDeepPathfinderCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UAudioComponent* GliderBeastDeath_Cue; // 0x3d0(0x08)
	struct UAudioComponent* GliderBeastGrabOneShotScream; // 0x3d8(0x08)
	struct UAudioComponent* GliderBeastIdleScream; // 0x3e0(0x08)
	struct UAudioComponent* GliderBeastAttachScream; // 0x3e8(0x08)
	struct UAIPlayerControlComponent* AIPlayerControl; // 0x3f0(0x08)
	struct USphereComponent* Sphere; // 0x3f8(0x08)
	struct UEnemyComponent* enemy; // 0x400(0x08)
	struct UOutlineComponent* outline; // 0x408(0x08)
	struct FTimerHandle AudioScreamHandle; // 0x410(0x08)
	bool IsControlledByPlayer; // 0x418(0x01)
	bool LastScreamForced; // 0x419(0x01)
	char UnknownData_41A[0x6]; // 0x41a(0x06)
	struct UAudioComponent* LastPlayedScream; // 0x420(0x08)
	struct UAudioComponent* NewVar_1; // 0x428(0x08)

	void PlayScream(struct UAudioComponent* ForcedScream); // Function ENE_GliderBeast.ENE_GliderBeast_C.PlayScream
	void OnNotifyEnd_71AD1CB34498196F772390944624EEFE(struct FName NotifyName); // Function ENE_GliderBeast.ENE_GliderBeast_C.OnNotifyEnd_71AD1CB34498196F772390944624EEFE
	void OnNotifyBegin_71AD1CB34498196F772390944624EEFE(struct FName NotifyName); // Function ENE_GliderBeast.ENE_GliderBeast_C.OnNotifyBegin_71AD1CB34498196F772390944624EEFE
	void OnInterrupted_71AD1CB34498196F772390944624EEFE(struct FName NotifyName); // Function ENE_GliderBeast.ENE_GliderBeast_C.OnInterrupted_71AD1CB34498196F772390944624EEFE
	void OnBlendOut_71AD1CB34498196F772390944624EEFE(struct FName NotifyName); // Function ENE_GliderBeast.ENE_GliderBeast_C.OnBlendOut_71AD1CB34498196F772390944624EEFE
	void OnCompleted_71AD1CB34498196F772390944624EEFE(struct FName NotifyName); // Function ENE_GliderBeast.ENE_GliderBeast_C.OnCompleted_71AD1CB34498196F772390944624EEFE
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_GliderBeast.ENE_GliderBeast_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
	void OnControlledByPlayer(bool IsControlled, bool IsLocallyControlled); // Function ENE_GliderBeast.ENE_GliderBeast_C.OnControlledByPlayer
	void ScreamUpdate(); // Function ENE_GliderBeast.ENE_GliderBeast_C.ScreamUpdate
	void ReceiveBeginPlay(); // Function ENE_GliderBeast.ENE_GliderBeast_C.ReceiveBeginPlay
	void ExecuteUbergraph_ENE_GliderBeast(int32_t EntryPoint); // Function ENE_GliderBeast.ENE_GliderBeast_C.ExecuteUbergraph_ENE_GliderBeast
};

