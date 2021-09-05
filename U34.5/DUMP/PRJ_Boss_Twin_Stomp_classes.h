// BlueprintGeneratedClass PRJ_Boss_Twin_Stomp.PRJ_Boss_Twin_Stomp_C
// Size: 0x318 (Inherited: 0x2f0)
struct APRJ_Boss_Twin_Stomp_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UAudioComponent* Twin_B_ProjectileBarrage_Cue; // 0x2f8(0x08)
	UNiagaraComponent* Niagara; // 0x300(0x08)
	UDamageComponent* Damage; // 0x308(0x08)
	UBoxComponent* Box; // 0x310(0x08)

	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void ReceiveBeginPlay();
	void CustomEvent_1(AActor* DestroyedActor);
	void ExecuteUbergraph_PRJ_Boss_Twin_Stomp(int32_t EntryPoint);
};

