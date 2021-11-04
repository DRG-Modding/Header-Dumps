// BlueprintGeneratedClass BP_PhaseBomb.BP_PhaseBomb_C
// Size: 0x2b0 (Inherited: 0x220)
struct ABP_PhaseBomb_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UAudioComponent* TMP_Caretaker_Phasebomb_TeleportEnd; // 0x228(0x08)
	UParticleSystemComponent* P_PhaseBomb_SpawnAtLocation; // 0x230(0x08)
	UPointLightComponent* PointLight; // 0x238(0x08)
	UStaticMeshComponent* Mesh_Range; // 0x240(0x08)
	USkeletalMeshComponent* SK_Phase_Bomb; // 0x248(0x08)
	UAudioComponent* BuildupSound; // 0x250(0x08)
	UDamageComponent* Damage; // 0x258(0x08)
	USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	float Timeline_0_SpinRate_1825F49740C5EB02FEA5878F2184A8B0; // 0x268(0x04)
	enum class ETimelineDirection Timeline_0__Direction_1825F49740C5EB02FEA5878F2184A8B0; // 0x26c(0x01)
	UTimelineComponent* Timeline_1; // 0x270(0x08)
	float ExplosionDelay; // 0x278(0x04)
	float SpinDelay; // 0x27c(0x04)
	FMulticastInlineDelegate Event_StartSpin; // 0x280(0x10)
	float RiseDelay; // 0x290(0x04)
	FMulticastInlineDelegate Event_StartRise; // 0x298(0x10)
	UNiagaraComponent* BuildUpSystem; // 0x2a8(0x08)

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PhaseBomb(int32_t EntryPoint);
	void Event_StartRise__DelegateSignature();
	void Event_StartSpin__DelegateSignature();
};

