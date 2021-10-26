// BlueprintGeneratedClass EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C
// Size: 0x450 (Inherited: 0x358)
struct AEVENT_DropPodDefense_Base_C : AGameEvent {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SphereInner1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SphereInner2; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Sphere1; 
	UPROPERTY(BlueprintReadWrite) float Progress; 
	UPROPERTY(BlueprintReadWrite) float Duration; 
	UPROPERTY(BlueprintReadWrite) float InitialProgress; 
	UPROPERTY(BlueprintReadWrite) TArray<APlayerCharacter*> DefendingPlayers; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate DefendSucceded; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate DefendFailed; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate ProgressUpdated; 
	UPROPERTY(BlueprintReadWrite) UEWC_Salvage_Defend_C* Wave; 
	UPROPERTY(BlueprintReadWrite) UHUD_Salvage_Defend_C* Event Widget; 
	UPROPERTY(BlueprintReadWrite) FText EventText; 
	UPROPERTY(BlueprintReadWrite) float ExtraDefenderBonus; 
	UPROPERTY(BlueprintReadWrite) int32_t DefendingPlayerCount; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate DefenderCountUpdated; 
	UPROPERTY(BlueprintReadWrite) FText EventSuccedText; 
	UPROPERTY(BlueprintReadWrite) UDialogDataAsset* EventStartShout; 
	UPROPERTY(BlueprintReadWrite) UDialogDataAsset* EventFailWarningShout; 
	UPROPERTY(BlueprintReadWrite) UDialogDataAsset* 75pProgressShout; 
	UPROPERTY(BlueprintReadWrite) UDialogDataAsset* 50pProgressShout; 

	UFUNCTION(BlueprintCallable) void OnRep_DefendingPlayerCount();
	UFUNCTION(BlueprintCallable) void UpdateDefenderCount();
	UFUNCTION(BlueprintCallable) float GetDefenderBonus(int32_t DefendingPlayers);
	UFUNCTION(BlueprintCallable) bool AnyPlayersDefending();
	UFUNCTION(BlueprintCallable) void OnRep_Progress();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ReceiveTick(float DeltaSeconds);
	UFUNCTION(BlueprintCallable) void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	UFUNCTION(BlueprintCallable) void EventSucceded();
	UFUNCTION(BlueprintCallable) void EventFailed();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_EVENT_DropPodDefense_Base(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void DefenderCountUpdated__DelegateSignature(int32_t DefenderCount);
	UFUNCTION(BlueprintCallable) void ProgressUpdated__DelegateSignature(float NewProgress);
	UFUNCTION(BlueprintCallable) void DefendFailed__DelegateSignature();
	UFUNCTION(BlueprintCallable) void DefendSucceded__DelegateSignature();
};

