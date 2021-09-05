// BlueprintGeneratedClass ENE_GliderBeast.ENE_GliderBeast_C
// Size: 0x430 (Inherited: 0x3c8)
struct AENE_GliderBeast_C : AFlyingEnemyDeepPathfinderCharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	UAudioComponent* GliderBeastDeath_Cue; // 0x3d0(0x08)
	UAudioComponent* GliderBeastGrabOneShotScream; // 0x3d8(0x08)
	UAudioComponent* GliderBeastIdleScream; // 0x3e0(0x08)
	UAudioComponent* GliderBeastAttachScream; // 0x3e8(0x08)
	UAIPlayerControlComponent* AIPlayerControl; // 0x3f0(0x08)
	USphereComponent* Sphere; // 0x3f8(0x08)
	UEnemyComponent* enemy; // 0x400(0x08)
	UOutlineComponent* outline; // 0x408(0x08)
	FTimerHandle AudioScreamHandle; // 0x410(0x08)
	bool IsControlledByPlayer; // 0x418(0x01)
	bool LastScreamForced; // 0x419(0x01)
	UAudioComponent* LastPlayedScream; // 0x420(0x08)
	UAudioComponent* NewVar_1; // 0x428(0x08)

	void PlayScream(UAudioComponent* ForcedScream);
	void OnNotifyEnd_71AD1CB34498196F772390944624EEFE(FName NotifyName);
	void OnNotifyBegin_71AD1CB34498196F772390944624EEFE(FName NotifyName);
	void OnInterrupted_71AD1CB34498196F772390944624EEFE(FName NotifyName);
	void OnBlendOut_71AD1CB34498196F772390944624EEFE(FName NotifyName);
	void OnCompleted_71AD1CB34498196F772390944624EEFE(FName NotifyName);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void OnControlledByPlayer(bool IsControlled, bool IsLocallyControlled);
	void ScreamUpdate();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ENE_GliderBeast(int32_t EntryPoint);
};

