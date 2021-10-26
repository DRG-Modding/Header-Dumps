// BlueprintGeneratedClass EVENT_Defense_Base.EVENT_Defense_Base_C
// Size: 0x468 (Inherited: 0x358)
struct AEVENT_Defense_Base_C : AGameEvent {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SphereMesh; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* OuterSphereMesh; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* InnerSphereMesh; 
	UPROPERTY(BlueprintReadWrite) float Progress; 
	UPROPERTY(BlueprintReadWrite) float Duration; 
	UPROPERTY(BlueprintReadWrite) float InitialProgress; 
	UPROPERTY(BlueprintReadWrite) TArray<APlayerCharacter*> DefendingPlayers; 
	UPROPERTY(BlueprintReadWrite) UEWC_Salvage_Defend_C* Wave; 
	UPROPERTY(BlueprintReadWrite) UHUD_Defend_Event_C* Event Widget; 
	UPROPERTY(BlueprintReadWrite) FText Event Text; 
	UPROPERTY(BlueprintReadWrite) FText Event Succeed Text; 
	UPROPERTY(BlueprintReadWrite) FText Event Failed Text; 
	UPROPERTY(BlueprintReadWrite) float Extra Defender Bonus; 
	UPROPERTY(BlueprintReadWrite) int32_t Defending player count; 
	UPROPERTY(BlueprintReadWrite) UDialogDataAsset* 75p Progress Shout; 
	UPROPERTY(BlueprintReadWrite) UDialogDataAsset* 50p Progress Shout; 
	UPROPERTY(BlueprintReadWrite) UDialogDataAsset* Event Start Shout; 
	UPROPERTY(BlueprintReadWrite) UDialogDataAsset* Event Fail Warning Shout; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate DefendSucceded; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate DefendFailed; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate ProgressUpdated; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate DefenderCountUpdate; 

	UFUNCTION(BlueprintCallable) void UpdateDefenderCount();
	UFUNCTION(BlueprintCallable) void GetDefenderBonus(int32_t DefendingPlayerCount, float DefenseBonus);
	UFUNCTION(BlueprintCallable) void AnyPlayersDefending(bool IsPlayersDefending);
	UFUNCTION(BlueprintCallable) void OnRep_Defending player count();
	UFUNCTION(BlueprintCallable) void OnRep_Progress();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ReceiveTick(float DeltaSeconds);
	UFUNCTION(BlueprintCallable) void EventFailed();
	UFUNCTION(BlueprintCallable) void EventSucceded();
	UFUNCTION(BlueprintCallable) void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_EVENT_Defense_Base(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void DefenderCountUpdate__DelegateSignature(int32_t DefenderCount);
	UFUNCTION(BlueprintCallable) void ProgressUpdated__DelegateSignature(float NewProgress);
	UFUNCTION(BlueprintCallable) void DefendFailed__DelegateSignature();
	UFUNCTION(BlueprintCallable) void DefendSucceded__DelegateSignature();
};

