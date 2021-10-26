// BlueprintGeneratedClass BP_AttackablePiplinesegmentActor.BP_AttackablePiplinesegmentActor_C
// Size: 0x278 (Inherited: 0x250)
struct ABP_AttackablePiplinesegmentActor_C : ATargetDummyPawn {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCustomObjectAttackerPositioning* CustomObjectAttackerPositioning; 
	UPROPERTY(BlueprintReadWrite) UObjectAttackerPositioning* ObjectAttackerPositioning; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_AttackablePiplinesegmentActor(int32_t EntryPoint);
};

