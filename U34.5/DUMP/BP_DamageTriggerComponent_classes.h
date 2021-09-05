// BlueprintGeneratedClass BP_DamageTriggerComponent.BP_DamageTriggerComponent_C
// Size: 0xf1 (Inherited: 0xb0)
struct UBP_DamageTriggerComponent_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	TArray<UHealthComponent*> ActorsInRange; // 0xb8(0x10)
	bool CanOnlyHurtPlayers; // 0xc8(0x01)
	FMulticastInlineDelegate ActorEntered; // 0xd0(0x10)
	FMulticastInlineDelegate ActorExited; // 0xe0(0x10)
	bool CheckOnClient; // 0xf0(0x01)

	bool IsEmpty();
	void ReceiveBeginPlay();
	void OnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
	void OnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
	void ExecuteUbergraph_BP_DamageTriggerComponent(int32_t EntryPoint);
	void ActorExited__DelegateSignature(UHealthComponent* OtherHealthComponent);
	void ActorEntered__DelegateSignature(UHealthComponent* OtherHealthComponent);
};

