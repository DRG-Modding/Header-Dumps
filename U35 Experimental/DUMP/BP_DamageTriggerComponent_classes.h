// BlueprintGeneratedClass BP_DamageTriggerComponent.BP_DamageTriggerComponent_C
// Size: 0xf1 (Inherited: 0xb0)
struct UBP_DamageTriggerComponent_C : UActorComponent {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) TArray<UHealthComponent*> ActorsInRange; 
	UPROPERTY(BlueprintReadWrite) bool CanOnlyHurtPlayers; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate ActorEntered; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate ActorExited; 
	UPROPERTY(BlueprintReadWrite) bool CheckOnClient; 

	UFUNCTION(BlueprintCallable) bool IsEmpty();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
	UFUNCTION(BlueprintCallable) void OnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_DamageTriggerComponent(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void ActorExited__DelegateSignature(UHealthComponent* OtherHealthComponent);
	UFUNCTION(BlueprintCallable) void ActorEntered__DelegateSignature(UHealthComponent* OtherHealthComponent);
};

