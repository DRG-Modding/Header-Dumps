// BlueprintGeneratedClass PRJ_Boss_Twin_Stomp.PRJ_Boss_Twin_Stomp_C
// Size: 0x318 (Inherited: 0x2f0)
struct APRJ_Boss_Twin_Stomp_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UAudioComponent* Twin_B_ProjectileBarrage_Cue; // 0x2f8(0x08)
	struct UNiagaraComponent* Niagara; // 0x300(0x08)
	struct UDamageComponent* Damage; // 0x308(0x08)
	struct UBoxComponent* Box; // 0x310(0x08)

	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function PRJ_Boss_Twin_Stomp.PRJ_Boss_Twin_Stomp_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void ReceiveBeginPlay(); // Function PRJ_Boss_Twin_Stomp.PRJ_Boss_Twin_Stomp_C.ReceiveBeginPlay
	void CustomEvent_1(struct AActor* DestroyedActor); // Function PRJ_Boss_Twin_Stomp.PRJ_Boss_Twin_Stomp_C.CustomEvent_1
	void ExecuteUbergraph_PRJ_Boss_Twin_Stomp(int32_t EntryPoint); // Function PRJ_Boss_Twin_Stomp.PRJ_Boss_Twin_Stomp_C.ExecuteUbergraph_PRJ_Boss_Twin_Stomp
};

